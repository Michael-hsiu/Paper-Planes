using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SniperBossFS : MonoBehaviour
{

    public AttackStatus attackStatus;       // Indicates what attack we're using
    public float laserChargeTime = 3.0f;
    public float laserEmitTime = 4.0f;  // How long we fire the laser for
    public bool laserActive = false;
    public float numAttacks = 0;
    public float numRotations = 3;
    public float rotationLength = 1.0f;
    public float endTime;
    public SniperBoss sniperBoss;
    public GameObject laserCollider;


    void Awake()
    {
        // Start attack routines
        sniperBoss = GetComponent<SniperBoss>();
		StartCoroutine(LaserAttack());

	}

    void Start()
    {


    }

    public void UpdateState()
    {

        if (attackStatus == AttackStatus.SNIPER_BOSS_LASER_ATTACK)
        {
            //MoveToPlayer(); // Change to be AWAY from player if too close
            laserActive = true;
        }

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
                yield return new WaitForSeconds(laserChargeTime);

                // Setup laser
                // Hand over movement logic to MoveState

                // Fire laser for X sec, rotating at Y angles / sec.
                endTime = Time.time + rotationLength;
                Vector3 playerPos = sniperBoss.target.transform.position;

                for (int i = 0; i < numRotations; i++)
                {
                    while (Time.time < endTime)
                    {
                        // IDLE means boss doesn't move, but rotates in correct direction
                        // Direction it rotates to is fixed
                        sniperBoss.OverrideMoveState(Direction.IDLE);
                        yield return null;
                    }
                }

				// End the attack
				sniperBoss.OverrideMoveState(Direction.IDLE);
				attackStatus = AttackStatus.NOT_ATTACKING;
				laserActive = false;
				HideLaser();
			}
            yield return null;
		}

				//Vector3 targetStartPos = sniperBoss.target.transform.position;
				//yield return new WaitForSeconds(0.05f);
				//Vector3 targetEndPos = sniperBoss.target.transform.position;

				//// Need to fix cases - can't change after we start rotating
				//if (targetEndPos.y < targetStartPos.y /*&& newPos.x > transform.position.x*/)
				//{
				//    while (Time.time < endTime)
				//    {
				//        transform.RotateAround(transform.position, Vector3.forward, Time.deltaTime * -5.0f);        // Rotate CW
				//        ShowLaser();
				//        yield return null;
				//    }
				//}
				//else if (targetEndPos.y > targetStartPos.y /*&& newPos.x > transform.position.x*/)
				//{
				//    while (Time.time < endTime)
				//    {
				//        transform.RotateAround(transform.position, Vector3.forward, Time.deltaTime * 5.0f);     // Rotate CCW
				//        ShowLaser();
				//        yield return null;
				//    }
				//}
				//else
				//{
				//    while (Time.time < endTime)
				//    {
				//        transform.RotateAround(transform.position, Vector3.forward, Time.deltaTime * 5.0f);     // Rotate CCW
				//        ShowLaser();
				//        yield return null;
				//    }
				//}




        //// Turn to player first
        //float turnTime = Time.time + 2.0f;
        //while (Time.time < turnTime)
        //{
        //                sniperBoss.SetMoveState(Direction.IDLE);
        //	yield return null;
        //}


 


    }






    yield return null;
    }
}

IEnumerator BulletHellAttack()
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
