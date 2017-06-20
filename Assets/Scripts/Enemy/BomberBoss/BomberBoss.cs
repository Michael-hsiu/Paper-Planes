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
    public int numCoresAlive;
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
    public GameObject centerGear;
    public GameObject topGear;
    public GameObject lowerLeftGear;
    public GameObject lowerRightGear;

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

        numCoresAlive = bomberCores.Count;   // # of spawning cores
        spawnBombersRoutine = SpawnBombers();
        StartCoroutine(spawnBombersRoutine);
        //nextAtkTime = Time.time + Random.Range(2.0f, 5.0f);
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {

        StopAllCoroutines();
        moveState = GetComponent<IMoveState>();
        fireState = GetComponent<IFireState>();

        moveState.OnObjectReuse();
        fireState.OnObjectReuse();
    }

    #endregion

    #region Game Logic

    protected override void Update()
    {

        Move();

        if (Time.time > nextAttackTime)
        {
            Attack();
        }
    }

    public override void Move()
    {
        moveState.UpdateState();
    }

    public void Attack()
    {
        ((BomberBossFS)fireState).UseAttack();
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
        // Destroy the middle core
        //centerGear.SetActive(false);
        Instantiate(stageOneDeathExplosion, centerGear.transform.position, Quaternion.identity);
        //Debug.Break();

        // Spawn the 3 mini-bosses, administer their setup logic
        // They are each their own prefab, save positions/rotations as of sprites

        topGearDefaultValues.spriteInitialRotation = topGear.transform.localRotation;
        leftGearDefaultValues.spriteInitialRotation = lowerLeftGear.transform.rotation;
        rightGearDefaultValues.spriteInitialRotation = lowerRightGear.transform.rotation;

        // Spawn at position of miniboss container, at rotation of miniboss sprite (child)
        // We set rotation of sprites within the Start method of each miniboss, accessed thru scrObj
        PoolObject topGearRef = PoolManager.Instance.ReuseObjectRef(topGearStageTwoBoss, topGear.transform.position, Quaternion.identity);
        PoolObject leftGearRef = PoolManager.Instance.ReuseObjectRef(leftGearStageTwoBoss, lowerLeftGear.transform.position, Quaternion.identity);
        PoolObject rightGearRef = PoolManager.Instance.ReuseObjectRef(rightGearStageTwoBoss, lowerRightGear.transform.position, Quaternion.identity);

        // Use forces to push gears away from center
        Vector3 topGearDiff = (topGearRef.transform.position - centerGear.transform.position).normalized;
        Vector3 leftGearDiff = (leftGearRef.transform.position - centerGear.transform.position).normalized;
        Vector3 rightGearDiff = (rightGearRef.transform.position - centerGear.transform.position).normalized;

        topGearRef.gameObject.GetComponent<Rigidbody>().AddForce(topGearDiff * stageOneExplosionForce);
        leftGearRef.gameObject.GetComponent<Rigidbody>().AddForce(leftGearDiff * stageOneExplosionForce);
        rightGearRef.gameObject.GetComponent<Rigidbody>().AddForce(rightGearDiff * stageOneExplosionForce);

        // Normal kill logic, point distribution
        Kill();
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
