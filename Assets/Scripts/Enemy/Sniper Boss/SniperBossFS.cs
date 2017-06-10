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
    public bool bulletHellActive = false;
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
        if (randomVal < 1.0f)
        {
            // Trigger the Laser attack
            laserActive = true;
            attackStatus = AttackStatus.SNIPER_BOSS_LASER_ATTACK;
        }
    }

    // Set next possible time for attack 
    public void SetAttackEndTime(float attackEndTime)
    {
        sniperBoss.nextAttackTime = attackEndTime + Random.Range(2.0f, 5.0f);
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
                    sniperBoss.ActivateLaserMovementState(Direction.SNIPER_BOSS_LASER_MOVEMENT, Time.time + rotationLength);
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


    IEnumerator BulletHellAttack()
    {
        while (true)
        {
        	while (bulletHellActive)
        	{



        	}
        	yield return null;
        }
        yield return null;
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

