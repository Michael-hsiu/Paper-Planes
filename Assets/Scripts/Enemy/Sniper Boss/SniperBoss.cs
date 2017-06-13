using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class SniperBoss : Ship, IEnemy
{

    /** 
	Spec:

	- Turn to player
	- Teleports to random pt far from player
	- Charges + fires laser in arc
		1) Charge. 
		2) Then fire laser for X sec, rotating at Y angles / sec. (can fire 3 lasers consecutively!!!!)
		3) Then brief cooldown in which boss can't do anything except rotate.
		4) Then teleport, start charging + repeat process again.
	 - Scatters small explosives (errata: Bullet Hell attack)
	 */

    #region Variables
    public float sqDist = 100.0f;   // Distance at which it starts backing away from player
    public float spawnDelay = 5.0f;
    public float safetyDist = 100.0f; // If player is too close, will use explosives attack

    [Header("TELE LOGIC")]
    public float teleDelay = 0.5f; // The time btwn when visual marker for teleport marker appears, and when we actually teleport
    public float teleCooldown = 8.0f; // Cooldown time for teleport
    public float postTeleDelay = 1.0f;
    public bool teleportActive = false;
    public float nextAttackTime = 3.0f;     // When we start attacking after spawning
    public bool explAtkActive = false;

    //public bool isAtking = false;   // Desc. if boss is attacking
    //public int numAtks = 0;     // Tracks # of times we atked. Useful for if we fire laser mult. times in a row.

    // Time at which we can launch next valid atk
    public IEnumerator teleRoutine;
    public IEnumerator laserRoutine;

    #endregion


    #region Unity Life Cycle

    protected override void Start()
    {

        base.Start();
        moveState = GetComponent<IMoveState>();
        fireState = GetComponent<IFireState>();

        //nextAtkTime = Time.time + Random.Range(2.0f, 5.0f);
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {
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
        ((SniperBossFS)fireState).UseAttack();
    }

    // Tells MS to use appropriate movement
    public void ActivateMovementState(float endTime, Direction direction)
    {
        ((SniperBossMS)moveState).ActivateMovementState(endTime, direction);
        //if (direction == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        //{
        //    ((SniperBossMS)moveState).ActivateLaserMovement(endTime);

        //}
        //else if (direction == Direction.SNIPER_BOSS_BULLET_HELL_MOVEMENT)
        //{
        //    ((SniperBossMS)moveState).ActivateBulletHellMovement(endTime);
        //}
        //else if (direction == Direction.SNIPER_BOSS_TELEPORT_MOVEMENT)
        //{
        //    ((SniperBossMS)moveState).ActivateTeleportMovement(endTime);
        //}
    }

    public void DeactivateMovementState()
    {
        ((SniperBossMS)moveState).DeactivateMovementState();
    }


    public void ActivateLaserMovementState(float endTime)
    {
        ((SniperBossMS)moveState).ActivateLaserMovement(endTime);
    }
    public void DeactivateLaserMovementState()
    {
        ((SniperBossMS)moveState).DeactivateLaserMovement();
    }
    // Tells MS to use appropriate movement
    public void ActivateBulletHellMovementState(float endTime)
    {
        ((SniperBossMS)moveState).ActivateBulletHellMovement(endTime);
    }
    public void DeactivateBulletHellMovementState()
    {
        ((SniperBossMS)moveState).DeactivateBulletHellMovement();
    }




    //IEnumerator UseExplosives()
    //{

    //    while (true)
    //    {
    //        if (explAtkActive)
    //        {


    //        }
    //        yield return null;
    //    }
    //}

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.activeSelf && other.gameObject.CompareTag(Constants.PlayerShot))
        {

            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us
            Damage(GameManager.Singleton.playerDamage);         // We lost health

            //Debug.Log ("ENEMY HEALTH: " + health);    // Print message to console
        }
    }

    //IEnumerator UseAttack()
    //{
    //    while (true)
    //    {

    //        // Wait until we can start atking again
    //        if (Time.time >= nextAtkTime)
    //        {

    //            // Choose an atk randomly (may choose to weight later to prevent repeats)
    //            // 0=laser, 1=explosives (must use if player is close)

    //            //int atkID = 0; /* = Random.Range (0, 2); */
    //            isAtking = true;        // We're now attacking

    //            if (numAtks >= 3)
    //            {       // If we've atked 3 times in a row

    //                teleportActive = true;
    //                //StartCoroutine(Teleport());

    //                // We let Teleport routine do its job
    //                while (teleportActive)
    //                {
    //                    yield return null;
    //                }

    //            }
    //            else if (moveState.Direction == Direction.PLAYER_UNDETECTED)
    //            {
    //                // Only use our laser if player is far enough away to be undetected (MS performs this check).

    //                //laserActive = true;
    //                StartCoroutine(UseLaser());

    //                while (laserActive)
    //                {
    //                    yield return null;
    //                }

    //            }
    //            else if (moveState.Direction == Direction.PLAYER_DETECTED)
    //            {
    //                // Use our explosives if player is too close, to make them go away!	

    //                explAtkActive = true;
    //                StartCoroutine(UseExplosives());

    //                while (explAtkActive)
    //                {
    //                    yield return null;
    //                }
    //            }


    //            /*// Fix to explosives atk
    //if (target != null && Utils.SquaredEuclideanDistance(gameObject, target.gameObject) < safetyDist) {

    //}*/

    //            // After either attack
    //            //nextAtkTime = Time.time + Random.Range(3, atkTimeRange);		// Next atk will take place at 'nextAtkTime'	
    //            isAtking = false;       // No longer attacking
    //            moveState.Direction = Direction.PLAYER_DETECTED;
    //            yield return null;
    //        }
    //        yield return null;
    //    }
    //}

    #endregion

}

