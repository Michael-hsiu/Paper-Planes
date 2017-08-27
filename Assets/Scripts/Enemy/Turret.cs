using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class Turret : PoolObject, IMovement, IFires, IDamageable<int>, IKillable
{

    #region Variables
    public EnemyType enemyType = EnemyType.Turret;
    public GameObject scoreText;    // Prefab for score_text

    public GameObject target;
    public bool isMarked = false;
    public bool canSeePlayer = false;

    public GameObject explosion;
    public float rotationSpeed = 90.0f;
    public int health = 100;
    public int enemyPoints = 100;

    public GameObject shot;
    public Transform shotSpawn;

    public int shotDamage = 10;
    public float fireRate = .1f;
    public float burstFireDelay = 1.0f;
    public int burstCount = 5;

    public float fieldOfViewDegrees = 180f;
    public float visibilityDistance = 10f;

    public float nextFire;
    public Vector3 initialPos;
    public Quaternion initialRot;
    IEnumerator burstFireRoutine;

    [Header("RENDERER/FLICKER")]
    public IEnumerator hitFlickerRoutine;
    public Color startColor;
    public Renderer sprite;
    public float flickerTime = 0.05f;


    [Header("AUDIO")]
    public AudioClip hitSoundAudioClip;
    public AudioClip deathSoundAudioClip;
    #endregion

    #region Properties
    public int ShotDamage
    {
        get { return shotDamage; }
        set { shotDamage = value; }
    }
    #endregion

    #region Unity Life Cycle
    /** UNITY CALLBACKS */

    protected virtual void Start()
    {

        initialRot = transform.rotation;
        initialPos = new Vector2(transform.position.x, transform.position.y);   // Cache our initial position
        target = GameObject.FindGameObjectWithTag(Constants.PlayerTag);     // Get Player at runtime
        nextFire = Time.time + Random.Range(0f, 1f);

        sprite = Utils.FindChildWithTag(gameObject, "Sprite").GetComponent<Renderer>();
        startColor = sprite.material.color;

        if (burstFireRoutine == null)
        {
            burstFireRoutine = BurstFire();
            StartCoroutine(burstFireRoutine);
        }
    }

    protected virtual void Update()
    {
        canSeePlayer = CanSeePlayer();      // Only pt where it is updated
        Move();
        if (canSeePlayer)
        {
            Debug.Log("ACTIVATING GUNS");
            ActivateGuns();
        }
        else
        {
            Debug.Log("DEACTIVATING GUNS");
            DeactivateGuns();
        }
    }

    public override void OnObjectReuse()
    {
        // End routines
        if (burstFireRoutine != null)
        {
            StopCoroutine(burstFireRoutine);
            burstFireRoutine = null;
        }
        Start();
        //Debug.Break();
        // Reset start color? -color seems to freeze on last flicker
        // The only change that ever occurs is for alpha
        if (sprite != null)
        {
            Color resetColor = startColor;
            resetColor.a = 1f;
            sprite.material.color = resetColor;
            Debug.Log("SPRITE RESET!");
        }
    }
    #endregion

    #region Game Logic
    /*protected virtual void Initialize() {

	}*/

    public virtual void Move()
    {

        /** Default move pattern is to turn and move towards player. */

        Vector3 dist = target.transform.position - transform.position;  // Find vector difference between target and this
        dist.Normalize();       // Get unit vector

        float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
        Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
        if (canSeePlayer)
        {
            transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime); // Rotate the enemy 

        }
        else
        {
            // Rotate back to original position
            //transform.rotation = Quaternion.RotateTowards(transform.rotation, initialRot, rotationSpeed * Time.deltaTime);
        }
    }

    public virtual void Damage(int damageTaken)
    {
        if (Utils.SquaredEuclideanDistance(GameManager.Singleton.playerShip.gameObject, gameObject) < 625.0f)
        {
            GameManager.Singleton.cameraController.audioSource.PlayOneShot(hitSoundAudioClip, 0.1f);      // Play hit sound

        }
        // Restart flicker animation
        if (hitFlickerRoutine != null)
        {
            StopCoroutine(hitFlickerRoutine);
        }
        hitFlickerRoutine = FlickerHit();
        StartCoroutine(hitFlickerRoutine);

        health -= damageTaken;      // We lose health
        if (health <= 0)
        {
            Kill();
            //Debug.Log ("Killed via projectile weapon");
        }
        else
        {
            if (Utils.SquaredEuclideanDistance(GameManager.Singleton.playerShip.gameObject, gameObject) < 625.0f)
            {
                GameManager.Singleton.cameraController.audioSource.PlayOneShot(hitSoundAudioClip, 0.3f);      // Play hit sound
            }
        }
    }

    // Flicker when hit
    IEnumerator FlickerHit()
    {
        Debug.Log("FLICKERING");
        Color flickerColor = sprite.material.color;
        flickerColor.a = 0.45f;

        sprite.material.color = flickerColor;
        yield return new WaitForSeconds(flickerTime);
        sprite.material.color = startColor;
    }

    public virtual void Kill()
    {
        //Destroy (transform.gameObject);		// Destroy our gameobject
        //transform.gameObject.SetActive(false);	// "Destroy" our gameobject
        if (Utils.SquaredEuclideanDistance(GameManager.Singleton.playerShip.gameObject, gameObject) < 625.0f)
        {
            GameManager.Singleton.cameraController.audioSource.PlayOneShot(deathSoundAudioClip, 1f);      // Play hit sound

        }
        PoolManager.Instance.ReuseObject(explosion, transform.position, transform.rotation);
        //GameManager.Singleton.cameraController.audioSource.PlayOneShot(hitSoundAudioClip, 0.2f);      // Play hit sound

        DisplayKillScore();            // Displays the score
        OnKillReset();     // Resets the logic
    }

    public void OnKillReset()
    {
        sprite.material.color = startColor;
        GameManager.Singleton.RecordEnemyKilled(enemyType); // REGISTER A KILL so we know if we can spawn more of this enemy. This should cover Missiles and Shurikens registering damage / kills
        GameManager.Singleton.UpdateScore(enemyPoints); // Add new score in GameManager
        UIManager.Singleton.UpdateScore();  // Update score in UI
        hitFlickerRoutine = null;

        DestroyForReuse();
    }

    public void DisplayKillScore()
    {
        PoolObject scoreTextInstance = PoolManager.Instance.ReuseObjectRef(scoreText, transform.position, Quaternion.identity);
        scoreTextInstance.gameObject.GetComponent<ScoreText>().OnObjectReuse(gameObject);  // Pass ourselves in as a target position
    }

    public virtual void Fire()
    {

        nextFire = Time.time + fireRate;    // Cooldown time for projectile firing
        // Check for all shotspawns in children
        foreach (Transform s in transform)
        {
            TurretShotSpawn shotSpawn = s.GetComponent<TurretShotSpawn>();  // Get ShotSpawn in children
            if (shotSpawn != null)
            {
                shotSpawn.CreateShot(); // Fire the shot!
            }
        }

    }

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.PlayerShot))
        {

            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us

            Damage(GameManager.Singleton.playerDamage);
        }
    }

    public void ActivateGuns()
    {
        foreach (Transform s in transform)
        {
            TurretShotSpawn shotSpawn = s.GetComponent<TurretShotSpawn>();  // Get ShotSpawn in children

            if (shotSpawn != null)
            {
                shotSpawn.Arm();    // Fire the shot!
            }
        }
    }

    public void DeactivateGuns()
    {
        foreach (Transform s in transform)
        {
            TurretShotSpawn shotSpawn = s.GetComponent<TurretShotSpawn>();  // Get ShotSpawn in children

            if (shotSpawn != null)
            {
                shotSpawn.Disarm(); // Fire the shot!
            }
        }


    }

    protected bool CanSeePlayer()
    {
        // Only cast ray onto Player layer
        int layerMask = 1 << 11;

        RaycastHit hit;
        if (target != null)
        {
            Vector3 rayDirection = target.transform.position - transform.position;

            if ((Vector3.Angle(rayDirection, transform.forward)) <= fieldOfViewDegrees * 0.5f)
            {

                // Detect if player is within the field of view
                if (Physics.Raycast(transform.position, rayDirection, out hit, visibilityDistance, layerMask))
                {
                    Debug.DrawRay(transform.position, rayDirection, Color.red);
                    Debug.Log("HIT THE PLAYER!");
                    return (hit.transform.CompareTag(Constants.PlayerTag));
                }
            }
        }
        return false;
    }

    IEnumerator BurstFire()
    {

        while (true)
        {

            int roundsLeft = burstCount;
            // Fire an entire burst
            while (roundsLeft > 0 && canSeePlayer)
            {
                if (Time.time > nextFire)
                {

                    Fire();
                    roundsLeft -= 1;
                }

                yield return null;
            }
            // Wait between bursts
            yield return new WaitForSeconds(burstFireDelay);

        }
    }
    #endregion
}
