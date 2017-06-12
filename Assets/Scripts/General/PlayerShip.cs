using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class PlayerShip : FiringShip
{

    public enum Weapons
    {
        LEVEL_ONE,
        LEVEL_TWO,
        LEVEL_THREE,
        LEVEL_FOUR,
        SIDE

    };

    #region Variables

    [Header("SHOTSPAWN_LISTS")]
    public float firingPowerupExpirationTime;     // Tracks when firing powerup expires
    public List<ShotSpawnContainer> shotSpawnContainers = new List<ShotSpawnContainer>();       // Main list used to hold container objects, which hold individual shot spawns.
    public ShotSpawnContainer activeShotSpawnContainer;         // Tracks currently active ShotSpawnContainer object

    public Stack<ShotSpawnContainer> shotSpawnStack = new Stack<ShotSpawnContainer>();
    public Dictionary<Weapons, ShotSpawnContainer> shotSpawnDictionary = new Dictionary<Weapons, ShotSpawnContainer>();

    [Header("POWERUPS")]
    public int numShots = 0;
    public bool dashStarted = false;
    public float dashEndTime = 0.0f;
    public float thrust = 300.0f;
    public float maxDash = 20.0f;
    public float dashDuration = 5f;
    public bool rushStarted = false;

    [Header("WAVE_SHOT DEPENDENCIES")]
    // Wave shot dependencies
    public List<GameObject> waveSpawns = new List<GameObject>();
    public bool waveShotEnabled = false;
    public float waveRandomVal;
    public float waveChance = 0.15f;

    [Header("FRONT_FACING_MISSILE DEPENDENCIES")]
    // Front-facing missile dependencies
    public List<GameObject> sideMissileSpawns;
    public bool sideMissileEnabled;
    public float sideMissileRandomVal;
    public float sideMissileChance = 0.1f;

    [Header("FIRING_RIG")]
    public GameObject firingRig;
    public GameObject chargeColliderRig;

    [Header("OTHER")]
    public InputComponent input;
    public Rigidbody rb;
    public float maxForward = 3.0f;
    public float colliderRadius = 1.2f;

    public static PlayerShip singleton;

    #endregion

    #region Unity Life Cycle

    void Awake()
    {
        DontDestroyOnLoad(this);
        if (singleton == null)
        {
            singleton = this;
        }
        else
        {
            DestroyImmediate(gameObject);
        }
        rb = GetComponent<Rigidbody>();
        startColor = sprite.material.color;
    }

    protected override void Start()
    {
        input = InputManager.Singleton.GetInputComponent();     // Get valid input source
        InitializeShotSpawns();     // Get active shotspawn
    }

    protected override void Update()
    {

        // Firing logic
        //if (Input.GetButton("Fire1") && Time.time > nextFire && ((AIInput)input).controlsEnabled)
        //{
        //    Fire();
        //}

        // Temp logic for player destruction
        if (GameManager.Singleton.playerHealth <= 0)
        {
            Instantiate(explosion, transform.position, transform.rotation);
            transform.gameObject.SetActive(false);
        }

        // Check for user input
        //CheckForInput ();
        //UpdateInput ();

    }

    void FixedUpdate()
    {
        UpdateInput();      // This currently takes care of both input and physics; consider separating them
    }

    public void OnDrawGizmos()
    {
        // Only draw when we're dashing
        if (dashStarted)
        {
            Gizmos.color = Color.white;
            Gizmos.DrawWireSphere(transform.position, colliderRadius);
        }
    }

    #endregion

    #region Game Logic

    private void InitializeShotSpawns()
    {

        // Add references to each of the ShotSpawnContainers into a dictionary.
        foreach (ShotSpawnContainer shotSpawnContainer in shotSpawnContainers)
        {
            shotSpawnDictionary.Add(shotSpawnContainer.firingPowerupID, shotSpawnContainer);
        }

        // Starting properties - add LEVEL_ONE (Normal) ShotSpawnContainer to stack
        ShotSpawnContainer normalShotSpawnContainer = shotSpawnDictionary[Weapons.LEVEL_ONE];
        shotSpawnStack.Push(normalShotSpawnContainer);
        activeShotSpawnContainer = normalShotSpawnContainer;
    }

    public void SetWeapons(Weapons id, Powerup invokingPowerup)
    {
        // First cancel the current firing powerup's Deactivate call...
        if (activeShotSpawnContainer != null && activeShotSpawnContainer.activePowerup != null)
        {
            Debug.Log("CANCELED INVOKE!");
            activeShotSpawnContainer.activePowerup.CancelInvoke("DeactivatePower");     // We're going to set a new deactivation call!
        }

        // Then remove old powerup (if not LEVEL_ONE)...
        if (activeShotSpawnContainer.firingPowerupID != PlayerShip.Weapons.LEVEL_ONE)
        {
            shotSpawnStack.Pop();
        }

        // Now put new reference onto stack and record it as currently active ShotSpawnContainer.
        ShotSpawnContainer nowActiveshotSpawnContainer = shotSpawnDictionary[id];
        nowActiveshotSpawnContainer.activePowerup = invokingPowerup;        // In case we want to cancel the Invoke
        shotSpawnStack.Push(nowActiveshotSpawnContainer);
        activeShotSpawnContainer = nowActiveshotSpawnContainer;     // Record the powerup so we can deactivate its CancelInvoke call as needed
    }

    public void DeactivateFiringPowerup()
    {
        if (activeShotSpawnContainer.firingPowerupID != PlayerShip.Weapons.LEVEL_ONE)
        {
            ShotSpawnContainer oldContainer = shotSpawnStack.Pop();
            activeShotSpawnContainer = shotSpawnDictionary[Weapons.LEVEL_ONE];
            Debug.Log(String.Format(oldContainer.firingPowerupID + " FIRING POWERUP DEACTIVATED AT ENDTIME: {0}", Time.time));
        }
    }

    public override void Fire()
    {
        if (!isFiringBuffed)
        {
            nextFire = Time.time + fireRate;    // Cooldown time for projectile firing
        }
        else
        {
            nextFire = Time.time + fireRate / buffedFiringRateFactor;
        }

        List<ShotSpawn> activeShotSpawnList = activeShotSpawnContainer.shotSpawnList;       // Get list of active shotspawns

        if (activeShotSpawnList != null && activeShotSpawnList.Count > 0)
        {
            foreach (ShotSpawn spawn in activeShotSpawnList)
            {
                spawn.CreateShot(isFiringBuffed);   // Fire the shot!
                numShots += 1;
            }
        }


        // Simple wave shot logic
        if (waveShotEnabled)
        {
            CreateWaveShots();
        }
        if (sideMissileEnabled)
        {
            CreateFrontMissiles();
        }

    }

    public override void Damage(int damageTaken)
    {

        // Restart flicker animation
        if (hitFlickerRoutine != null)
        {
            StopCoroutine(hitFlickerRoutine);
        }
        hitFlickerRoutine = FlickerHit();
        StartCoroutine(hitFlickerRoutine);

        GameManager.Singleton.playerHealth -= damageTaken;
        if (GameManager.Singleton.playerHealth <= 0)
        {
            GameManager.Singleton.LevelFailed();            // Initiate level failure logic
        }
        UIManager.Singleton.UpdateHealth();
    }

    // Flicker when hit
    IEnumerator FlickerHit()
    {
        //Debug.Log("FLICKERING");
        Color flickerColor = sprite.material.color;
        flickerColor.a = 0.55f;

        sprite.material.color = flickerColor;
        yield return new WaitForSeconds(flickerTime);

        sprite.material.color = startColor;
        yield return new WaitForSeconds(flickerTime);

        sprite.material.color = flickerColor;
        yield return new WaitForSeconds(flickerTime);

        sprite.material.color = startColor;
        yield return new WaitForSeconds(flickerTime);

        sprite.material.color = flickerColor;
        yield return new WaitForSeconds(flickerTime);

        sprite.material.color = startColor;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag(Constants.EnemyShot))
        {
            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();
            Damage(10);
        }
    }

    private void UpdateInput()
    {
        input.UpdateInput(this);
    }

    public void CreateWaveShots()
    {
        waveRandomVal = UnityEngine.Random.value;       // Set the random value
        if (waveRandomVal <= waveChance)
        {
            foreach (GameObject go in waveSpawns)
            {
                if (go.GetComponent<ShotSpawn>() != null)
                {
                    go.GetComponent<ShotSpawn>().CreateShot();  // Fire the shot!
                }
            }
        }
    }

    // This is not for the homing missile powerup; it is for front-firing missiles.
    public void CreateFrontMissiles()
    {
        sideMissileRandomVal = UnityEngine.Random.value;        // Set the random value
        if (sideMissileRandomVal <= sideMissileChance && numShots % 20 == 0)
        {
            foreach (GameObject go in sideMissileSpawns)
            {
                if (go.GetComponent<ShotSpawn>() != null)
                {
                    go.GetComponent<WaveShotSpawn>().CreateFrontMissiles(); // Fire the shot!
                }
            }
        }
    }

    #endregion
}
