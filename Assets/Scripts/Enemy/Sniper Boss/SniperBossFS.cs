using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SniperBossFS : MonoBehaviour, IFireState
{

    public AttackStatus attackStatus;       // Indicates what attack we're using
    public float laserChargeTime = 3.0f;
    public float laserEmitTime = 4.0f;  // How long we fire the laser for
    public float laserResetDelayTime = 0.2f;    // Time btwn laser fires we rest
    public bool laserActive = false;

    public float bulletHellDuration = 6.0f;
    public bool bulletHellActive = false;
    public List<ShotSpawn> bulletHellShotSpawns = new List<ShotSpawn>();

    public float numAttacks = 0;
    public float numRotations = 3;
    public float rotationLength = 1.0f;
    public float endTime;
    public SniperBoss sniperBoss;
    public GameObject laserCollider;
    public FiringMode Mode
    {
        get;
        set;
    }

    void Awake()
    {
        // Start attack routines
        sniperBoss = GetComponent<SniperBoss>();

        StartCoroutine(LaserAttack());
        StartCoroutine(BulletHellAttack());
        HideLaser();
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
        if (randomVal <= 0.00000000005f)
        {
            // Trigger the Laser attack
            laserActive = true;
            attackStatus = AttackStatus.SNIPER_BOSS_LASER_ATTACK;
        }
        else
        {
            // Trigger the Bullet Hell attack
            bulletHellActive = true;
            attackStatus = AttackStatus.SNIPER_BOSS_BULLET_HELL_ATTACK;
        }
    }

    IEnumerator BulletHellAttack()
    {
        while (true)
        {
            if (bulletHellActive)
            {
                // Activate the bullet hell routine in our ShotSpawns
                // Routines will end at same time as this one

                endTime = Time.time + bulletHellDuration;
                SetAttackEndTime(endTime);      // So that SniperBoss script won't launch any more attacks
                sniperBoss.ActivateBulletHellMovementState(endTime);

                foreach (BulletHellShotSpawn bulletHellShotSpawn in bulletHellShotSpawns)
                {
                    bulletHellShotSpawn.UseBulletHellAttack(endTime);
                }

                // Wait until end time
                yield return new WaitForSeconds(endTime - Time.time);
                bulletHellActive = false;
                sniperBoss.DeactivateBulletHellMovementState();

            }
            yield return null;
        }
    }


    // Set next possible time for attack 
    public void SetAttackEndTime(float attackEndTime)
    {
        sniperBoss.nextAttackTime = attackEndTime + Random.Range(1.0f, 2.0f);
    }

    void ShowLaser()
    {
        // Preliminary logic for laser
        if (!laserCollider.gameObject.activeSelf)
        {
            laserCollider.SetActive(true);
        }
        Vector3 rayDir = new Vector3(-transform.position.x * 2, transform.position.y, 0);
        Debug.DrawRay(transform.position, transform.up * 30);
    }

    void HideLaser()
    {
        laserCollider.SetActive(false);
    }

    // Sweeps laser in a wide arc. Must be still while using move. Colliders are overridden by this state.
    IEnumerator LaserAttack()
    {
        while (true)
        {
            while (laserActive)
            {

                // Charge time
                // Play animations and indicate laser is charging here
                //yield return new WaitForSeconds(laserChargeTime);

                // Setup laser
                // Hand over movement logic to MoveState

                // Fire laser for X sec, rotating at Y angles / sec.
                endTime = Time.time + rotationLength * (numRotations + laserResetDelayTime);
                SetAttackEndTime(endTime);      // So that SniperBoss script won't launch any more attacks

                // Do X sweeps of the laser
                for (int i = 0; i < numRotations; i++)
                {
                    // Setup movement and laser
                    sniperBoss.ActivateLaserMovementState(Time.time + rotationLength);
                    ShowLaser();

                    // Resume operation at endTime
                    yield return new WaitForSeconds(rotationLength);

                    // Reset movement and laser
                    HideLaser();
                    yield return new WaitForSeconds(laserResetDelayTime);
                }

                // End the attack
                sniperBoss.DeactivateLaserMovementState();
                attackStatus = AttackStatus.NOT_ATTACKING;
                laserActive = false;
                HideLaser();
            }
            yield return null;
        }
    }




    IEnumerator SummonMobsAttack()
    {
        //while (true)
        //{
        //	while ()
        //	{



        //	}
        //	yield return null;
        //}
        yield return null;
    }

}

