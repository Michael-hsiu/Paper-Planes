using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class BomberBoss : Ship, IEnemy
{

    /** 
		Spec:

        Movement:
		- Slowly moves to player.
		- Background gear slowly rotates when not attacking.    
		- Eye slowly moves towards player.

        Attacking:
        - Rush attack.
        - Fire Bombers like Cannon Balls attack.
        - Bullet Hell attack.
        - Explodes when killed attack.

		 */

    #region Variables
    [Header("BOMBER_BOSS")]
    public float nextAttackTime = 3.0f;     // When we start attacking after spawning
    public float bomberSpawnDelay = 0.2f;   // Delay between bombers spawned
    public float stageOneExplosionForce = 1000.0f;
    public List<ShipSpawn> shipSpawns = new List<ShipSpawn>();
    public List<BomberShip> bomberCores = new List<BomberShip>();   // STAGE 1: the parts that are damageable
    private Queue<PoolObject> spawnedCores = new Queue<PoolObject>();   // Hold refs to destroy on reset
    public int numCoresAlive;
    public GameObject bomberCore;       // The damageable parts for STAGE 1
    public GameObject stageOneDeathExplosion;
    IEnumerator spawnBombersRoutine;

    [Header("PREP_FOR_STAGE_2")]
    public EnemyScriptableObject topGearDefaultValues;
    public EnemyScriptableObject leftGearDefaultValues;
    public EnemyScriptableObject rightGearDefaultValues;

    public GameObject topGearStageTwoBoss;
    public GameObject leftGearStageTwoBoss;
    public GameObject rightGearStageTwoBoss;

    [Header("SPRITE_REFERENCES")]
    // The parent object
    // These are the actual sprites
    public BomberMiniBoss centerGear;
    public BomberMiniBoss topGear;
    public BomberMiniBoss lowerLeftGear;
    public BomberMiniBoss lowerRightGear;
    public BomberMiniBoss blueRing;
    public BomberMiniBoss smallOuterRing;
    public GameObject stageTwoBomberBoss;       // Prefab
    public GameObject stageTwoSpawnLocation;    // Where the prefab will spawn
    // The child object (containing sprite)
    // Assigned in inspector
    public GameObject topGearSprite;
    public GameObject lowerLeftGearSprite;
    public GameObject lowerRightGearSprite;

    #endregion


    #region Unity Life Cycle
    protected override void Start()
    {

        base.Start();
        moveState = GetComponent<IMoveState>();
        fireState = GetComponent<IFireState>();

        numCoresAlive = shipSpawns.Count;   // # of spawning cores
        spawnBombersRoutine = SpawnBombers();
        StartCoroutine(spawnBombersRoutine);

        // Remove any core bombers still alive, then populate
        while (spawnedCores.Count > 0)
        {
            PoolObject corePoolObj = spawnedCores.Dequeue();
            if (corePoolObj.gameObject.activeInHierarchy)
            {
                corePoolObj.DestroyForReuse();
            }
        }
        foreach (ShipSpawn shipSpawn in shipSpawns)
        {
            Debug.Log(shipSpawn.transform.localPosition);
            BomberShip bomberShipFab = (BomberShip)(PoolManager.Instance.ReuseObjectRef(bomberCore, shipSpawn.gameObject.transform.position, Quaternion.identity));
            spawnedCores.Enqueue(bomberShipFab);    // Enqueue for later destruction
            bomberShipFab.bomberBoss = this;
        }
        //Debug.Break();
        //nextAtkTime = Time.time + Random.Range(2.0f, 5.0f);
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {
        if (spawnBombersRoutine != null)
        {
            StopCoroutine(spawnBombersRoutine);
        }
        Start();
        // Spawn the Core Bombers - no nested prefabs :(

        //Debug.Break();
        //StopAllCoroutines();
        //moveState = GetComponent<IMoveState>();
        //fireState = GetComponent<IFireState>();

        moveState.OnObjectReuse();
        fireState.OnObjectReuse();
    }

    #endregion

    #region Game Logic

    protected override void Update()
    {
        Move();
    }

    public override void Move()
    {
        moveState.UpdateState();
    }

    // Routine for spawning bombers
    IEnumerator SpawnBombers()
    {
        while (true)
        {
            foreach (ShipSpawn shipSpawn in shipSpawns)
            {
                shipSpawn.Spawn();
            }
            yield return new WaitForSeconds(bomberSpawnDelay);
        }
    }

    // This is called by the CORE Bombers upon the last one's death
    public void ActivateStageTwo()
    {
        StartCoroutine(ActivateStageTwoRoutine());
    }

    IEnumerator ActivateStageTwoRoutine()
    {
        // Give player points
        // Move gears to middle and resize
        centerGear.StartPhaseTwoTransition();
        topGear.StartPhaseTwoTransition();
        lowerLeftGear.StartPhaseTwoTransition();
        lowerRightGear.StartPhaseTwoTransition();

        yield return new WaitForSeconds(1.0f);      // Or however long we want transition to be (so underlying elements don't pop out!)
        //Debug.Break();
        // Enable blue center ring and smaller outer ring once all gears have arrived at center
        blueRing.StartPhaseTwoTransition();
        smallOuterRing.StartPhaseTwoTransition();

        yield return new WaitForSeconds(5.0f);

        // Spawn in the actual Stage 2 prefab and hand it the rotations of each of the gears
        PoolManager.Instance.ReuseObject(stageTwoBomberBoss, stageTwoSpawnLocation.transform.position, Quaternion.identity);

        // Perform some resets
        OnKillReset();
        DisplayKillScore();
        Debug.Log("STAGE TWO SPAWNED");
        //Debug.Break();
    }

    // Tells MS to use appropriate movement
    public void ActivateMovementState(float endTime, Direction direction)
    {
        ((BomberBossMS)moveState).ActivateMovementState(endTime, direction);

    }

    public void DeactivateMovementState()
    {
        ((BomberBossMS)moveState).DeactivateMovementState();
    }

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.activeSelf && other.gameObject.CompareTag(Constants.PlayerShot))
        {
            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us
            Damage(GameManager.Singleton.playerDamage);         // We lost health
        }
    }

    #endregion

}
