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

    IEnumerator laserAttackRoutine;
    IEnumerator bulletHellAttackRoutine;
    IEnumerator teleportRoutine;

    [Header("TELEPORT ATK")]
    public bool teleportActive = false;
    public float teleDelay = 0.5f;  // The time btwn when visual marker for teleport marker appears, and when we actually teleport
    public float teleCooldown = 8.0f;   // Cooldown time for teleport
    public float postTeleDelay = 1.0f;
    public GameObject teleMarker;
    public Vector3 teleportLocation;
    public PoolObject activeTeleMarker;

    public GameObject laserCollider;
    public Collider mapCollider;
    public float xBound;
    public float yBound;

    public FiringMode Mode
    {
        get;
        set;
    }

    void Awake()
    {
        // Start attack routines
        sniperBoss = GetComponent<SniperBoss>();

        laserAttackRoutine = LaserAttack();
        bulletHellAttackRoutine = BulletHellAttack();

        StartCoroutine(laserAttackRoutine);
        StartCoroutine(bulletHellAttackRoutine);
        HideLaser();
    }

    void Start()
    {
        mapCollider = GameManager.Singleton.mapCollider;
        Vector3 boxSize = mapCollider.GetComponent<BoxCollider>().size;

        xBound = boxSize.x / 2;
        yBound = boxSize.y / 2;
    }

    // This will be called from the SniperBoss's overridden OnObjectReuse() method
    public void OnObjectReuse()
    {
        StopAllCoroutines();
        laserAttackRoutine = LaserAttack();
        bulletHellAttackRoutine = BulletHellAttack();
        teleportRoutine = Teleport();

        StartCoroutine(laserAttackRoutine);
        StartCoroutine(bulletHellAttackRoutine);
        StartCoroutine(teleportRoutine);
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
        if (randomVal <= 0.3f)
        {
            // Trigger the Laser attack
            laserActive = true;
            attackStatus = AttackStatus.SNIPER_BOSS_LASER_ATTACK;
        }
        else if (randomVal <= 0.7f)
        {
            // Trigger the Bullet Hell attack
            bulletHellActive = true;
            attackStatus = AttackStatus.SNIPER_BOSS_BULLET_HELL_ATTACK;
        }
        else
        {
            // Trigger the Teleport attack
            teleportActive = true;
            attackStatus = AttackStatus.SNIPER_BOSS_TELEPORT_ATTACK;
        }
    }

    // Teleport routine
    // If player in zone, knocked backwards radially outwards
    IEnumerator Teleport()
    {

        // Keep true while in current round
        while (true)
        {
            if (teleportActive)
            {

                endTime = Time.time + teleDelay;
                SetAttackEndTime(endTime);      // So that SniperBoss script won't launch any more attacks
                sniperBoss.ActivateMovementState(endTime, Direction.SNIPER_BOSS_TELEPORT_MOVEMENT);

                // Choose a location to teleport to within collider bounds, then wait for a moment.
                teleportLocation = new Vector3(Random.Range(-xBound, xBound), Random.Range(-yBound, yBound), 0);

                activeTeleMarker = PoolManager.Instance.ReuseObjectRef(teleMarker, teleportLocation, Quaternion.identity);
                teleportActive = false;     // Can no longer teleport for awhile
                yield return new WaitForSeconds(endTime - Time.time);     // Activate visual marker, waiting to teleport

                // Teleport to the random location
                transform.position = teleportLocation;
                activeTeleMarker.DestroyForReuse();

            }
            yield return null;
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
                sniperBoss.ActivateMovementState(endTime, Direction.SNIPER_BOSS_BULLET_HELL_MOVEMENT);

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
                    sniperBoss.ActivateMovementState(Time.time + rotationLength, Direction.SNIPER_BOSS_LASER_MOVEMENT);
                    //sniperBoss.ActivateLaserMovementState(Time.time + rotationLength);
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

