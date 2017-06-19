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
    public List<ShipSpawn> shipSpawns = new List<ShipSpawn>();
    public List<BomberShip> bomberCores = new List<BomberShip>();   // STAGE 1: the parts that are damageable
    public int numCoresAlive;

    [Header("SPRITE_REFERENCES")]
    public GameObject centerGear;
    public GameObject topGear;
    public GameObject lowerLeftGear;
    public GameObject lowerRightGear;
    #endregion


    #region Unity Life Cycle

    protected override void Start()
    {

        base.Start();
        moveState = GetComponent<IMoveState>();
        fireState = GetComponent<IFireState>();

        numCoresAlive = bomberCores.Count;   // # of spawning cores
        //nextAtkTime = Time.time + Random.Range(2.0f, 5.0f);
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {

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

    // This is called by the CORE Bombers upon the last one's death
    public void ActivateStageTwo()
    {
        Debug.Log("STAGE TWO ACTIVATED!");
        Debug.Break();
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
