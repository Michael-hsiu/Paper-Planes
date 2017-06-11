using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SniperBossMS : MonoBehaviour, IMoveState
{

    // Here, playerUndetected == player is far enough away. Sniper Boss always knows where player is.
    // playerDetected == player is too close. We either back up or use our small explosives.

    public Direction direction = Direction.PLAYER_UNDETECTED;
    public bool safeDistanceColliderActive = false;


    [Header("TELE LOGIC")]
    public float teleDelay = 0.5f;  // The time btwn when visual marker for teleport marker appears, and when we actually teleport
    public float teleCooldown = 8.0f;   // Cooldown time for teleport
    public bool laserMovementActive = false;
    public bool bulletHellMovementActive = false;

    public float postTeleDelay = 1.0f;
    public float xBound;
    public float yBound;
    public bool teleportActive = false;
    public bool moveStateOverridden = false;
    public IEnumerator laserRoutine;

    public GameObject teleMarker;
    public Collider mapCollider;


    public Direction Direction
    {
        get
        {
            return direction;
        }
        set
        {
            direction = value;
        }
    }

    public SniperBoss sniperBoss;

    void Awake()
    {
        sniperBoss = GetComponent<SniperBoss>();

    }

    void Start()
    {

        mapCollider = GameManager.Singleton.mapCollider;
        Vector3 boxSize = mapCollider.GetComponent<BoxCollider>().size;

        xBound = boxSize.x / 2;
        yBound = boxSize.y / 2;
        StartCoroutine(Teleport());
    }

    public void UpdateState()
    {

        if (direction == Direction.PLAYER_DETECTED)
        {
            MoveToPlayer(); // Change to be AWAY from player if too close

        }
        else if (direction == Direction.PLAYER_TOO_CLOSE)
        {
            MoveBackwards();
        }
        else if (direction == Direction.IDLE)
        {
            // For when we're not attacking, so we just stay put.
            // Only attack if we're in range!
            TurnToPlayer();
        }
        else if (direction == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        {
            // This means that we're close enough to the player to attack; no need to move.
            // Still rotates to meet player

        }
        else if (direction == Direction.SNIPER_BOSS_BULLET_HELL_MOVEMENT)
        {
            // We don't move; we just FIRE!
        }

    }

    public void ActivateLaserMovement(float endTime)
    {
        direction = Direction.SNIPER_BOSS_LASER_MOVEMENT;
        moveStateOverridden = true;
        laserMovementActive = true;

        laserRoutine = LaserMovement(endTime);
        StartCoroutine(laserRoutine);
    }

    public void DeactivateLaserMovement()
    {
        direction = Direction.PLAYER_DETECTED;
        // Give control back to Colliders to dictate Direction
        moveStateOverridden = false;
        laserMovementActive = false;

        laserRoutine = null;
    }

    public void ActivateBulletHellMovement(float endTime)
    {
        direction = Direction.SNIPER_BOSS_BULLET_HELL_MOVEMENT;
        moveStateOverridden = true;
        bulletHellMovementActive = true;

    }

    public void DeactivateBulletHellMovement()
    {
        direction = Direction.PLAYER_DETECTED;
        // Give control back to Colliders to dictate Direction
        moveStateOverridden = false;
        bulletHellMovementActive = false;


    }

    // Call this if SNIPER_BOSS_LASER_MOVEMENT
    IEnumerator LaserMovement(float endTime)
    {
        if (sniperBoss.target != null)
        {

            // Randomly pick a direction to rotate in
            float randomValue = Random.value;
            float rotSpeed = (randomValue < 0.5f) ? 5.0f : -5.0f;

            while (Time.time < endTime)
            {
                // Either rotates CW or CCW (negative is CW)
                transform.RotateAround(transform.position, Vector3.forward, Time.deltaTime * rotSpeed);
                yield return null;
            }
            laserRoutine = null;
        }
    }

    // Teleport routine
    IEnumerator Teleport()
    {

        // Keep true while in current round
        while (true)
        {
            while (teleportActive)
            {

                // Choose a location to teleport to within collider bounds, then wait for a moment.
                Vector3 spawnLoc = new Vector3(Random.Range(-xBound, xBound), Random.Range(-yBound, yBound), 0);
                //GameObject teleMarkerFab = Instantiate(teleMarker, spawnLoc, Quaternion.identity);
                PoolObject teleMarkerFab =
                    PoolManager.Instance.ReuseObjectRef(teleMarker, spawnLoc, Quaternion.identity);
                teleportActive = false;     // Can no longer teleport for awhile
                yield return new WaitForSeconds(teleDelay);     // Activate visual marker, waiting to teleport


                // Teleport to the random location
                transform.position = spawnLoc;
                teleMarkerFab.DestroyForReuse();
                yield return new WaitForSeconds(postTeleDelay);

            }
            yield return null;
        }
    }

    // Call this if IDLE
    public void TurnToPlayer()
    {
        if (sniperBoss.target != null)
        {

            Vector3 dist = (sniperBoss.target.transform.position - sniperBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            sniperBoss.transform.rotation = Quaternion.RotateTowards(sniperBoss.transform.rotation, desiredRotation, sniperBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

        }
    }

    // Call this if PLAYER_DETECTED
    public void MoveToPlayer()
    {

        if (sniperBoss.target != null)
        {

            Vector3 dist = (sniperBoss.target.transform.position - sniperBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            sniperBoss.transform.rotation = Quaternion.RotateTowards(sniperBoss.transform.rotation, desiredRotation, sniperBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

            /** MOVEMENT UPDATE */
            if (!sniperBoss.isSpeedBuffed)
            {
                sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed);
            }
            else
            {
                sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed * sniperBoss.buffedSpeedFactor);
            }
        }
    }

    // Call this if TOO_CLOSE
    public void MoveBackwards()
    {

        if (sniperBoss.target != null)
        {

            Vector3 dist = -(sniperBoss.target.transform.position - sniperBoss.transform.position).normalized;  // Find unit vector difference between target and this
            Vector3 angleDist = -dist;

            float zAngle = (Mathf.Atan2(angleDist.y, angleDist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);       // Store rotation as an Euler, then Quaternion
            sniperBoss.transform.rotation = Quaternion.RotateTowards(sniperBoss.transform.rotation, desiredRotation, sniperBoss.rotationSpeed * Time.deltaTime);   // Rotate the enemy

            /** MOVEMENT UPDATE */
            if (!sniperBoss.isSpeedBuffed)
            {
                sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.transform.position + dist, Time.deltaTime * sniperBoss.speed);
                //sniperBoss.transform.position = Vector2.MoveTowards (sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed);
            }
            else
            {
                sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed * sniperBoss.buffedSpeedFactor);
            }
        }

    }

}

