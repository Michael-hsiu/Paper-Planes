using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberBossFS : MonoBehaviour, IFireState
{

    public AttackStatus attackStatus;       // Indicates what attack we're using
    public BomberBoss bomberBoss;
    public FiringMode Mode { get; set; }
    public float endTime;

    [Header("BULLET HELL ATTACK")]
    public bool bulletHellActive;
    public float bulletHellDuration;

    // Attack routines


    void Awake()
    {
        // Start attack routines
        bomberBoss = GetComponent<BomberBoss>();


    }

    void Start()
    {

    }

    // This will be called from the SniperBoss's overridden OnObjectReuse() method
    public void OnObjectReuse()
    {
        StopAllCoroutines();

        // Restart all attack routines
    }


    public void UpdateState()
    {

        //if (attackStatus == AttackStatus.SNIPER_BOSS_LASER_ATTACK)
        //{
        //    //MoveToPlayer(); // Change to be AWAY from player if too close
        //    //laserActive = true;
        //}

    }

    // MAIN method for choosing and activating attacks.
    public void UseAttack()
    {
        // Choose an attack
        float randomVal = Random.value;
        if (randomVal <= 0.4f)
        {
            // Trigger the Laser attack
            //laserActive = true;
            //attackStatus = AttackStatus.SNIPER_BOSS_LASER_ATTACK;
        }
        else
        {
            // Trigger the Bullet Hell attack
            //bulletHellActive = true;
            //attackStatus = AttackStatus.SNIPER_BOSS_BULLET_HELL_ATTACK;
        }
    }


    //IEnumerator BulletHellAttack()
    //{
    //    while (true)
    //    {
    //        if (bulletHellActive)
    //        {
    //            // Activate the bullet hell routine in our ShotSpawns
    //            // Routines will end at same time as this one

    //            endTime = Time.time + bulletHellDuration;
    //            SetAttackEndTime(endTime);      // So that SniperBoss script won't launch any more attacks
    //            bomberBoss.ActivateMovementState(endTime, Direction.SNIPER_BOSS_BULLET_HELL_MOVEMENT);

    //            foreach (BulletHellShotSpawn bulletHellShotSpawn in bulletHellShotSpawns)
    //            {
    //                bulletHellShotSpawn.UseBulletHellAttack(endTime);
    //            }

    //            // Wait until end time
    //            yield return new WaitForSeconds(endTime - Time.time);
    //            bulletHellActive = false;
    //            bomberBoss.DeactivateMovementState();

    //        }
    //        yield return null;
    //    }
    //}


    // Set next possible time for attack 
    public void SetAttackEndTime(float attackEndTime)
    {
        bomberBoss.nextAttackTime = attackEndTime + Random.Range(4.0f, 5.0f);
    }
}

