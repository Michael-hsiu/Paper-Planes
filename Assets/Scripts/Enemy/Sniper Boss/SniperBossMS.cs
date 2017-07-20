
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

    public bool laserMovementActive = false;
    public bool bulletHellMovementActive = false;
    public bool teleportMovementActive = false;
    public float laserRotationSpeed = 5.0f;

    public float xBound;
    public float yBound;
    public bool moveStateOverridden = false;
    public IEnumerator laserRoutine;

    public Collider mapCollider;
    public Collider bossHitCollider;
    public Color bossOriginalColor;
    public Color stealthColor;
    public SpriteRenderer spriteRenderer;

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

    void Start()
    {
        sniperBoss = GetComponent<SniperBoss>();
        bossHitCollider = sniperBoss.GetComponent<Collider>();
        bossOriginalColor = spriteRenderer.color;

        stealthColor = bossOriginalColor;
        stealthColor.a = 0.5f;

        //mapCollider = GameManager.Singleton.mapCollider;
        //Vector3 boxSize = mapCollider.GetComponent<BoxCollider>().size;

        //xBound = boxSize.x / 2;
        //yBound = boxSize.y / 2;

        // This need to be settled for OnEnable; use PoolObject override methods
        //laserRoutine = LaserMovement();

    }

    public void UpdateState()
    {

        if (direction == Direction.PLAYER_DETECTED)
        {
            MoveToPlayer(); // Change to be AWAY from player if too close
            EnableStealthMode();

        }
        else if (direction == Direction.PLAYER_TOO_CLOSE)
        {
            MoveBackwards();
            DisableStealthMode();
        }
        else if (direction == Direction.IDLE)
        {
            // For when we're not attacking, so we just stay put.
            // Only attack if we're in range!
            TurnToPlayer();
            DisableStealthMode();
        }
        else if (direction == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        {
            // This means that we're close enough to the player to attack; no need to move.
            // Still rotates to meet player
            DisableStealthMode();

        }
        else if (direction == Direction.SNIPER_BOSS_BULLET_HELL_MOVEMENT)
        {
            // We don't move; we just FIRE!
            DisableStealthMode();

        }
        else if (direction == Direction.SNIPER_BOSS_TELEPORT_MOVEMENT)
        {
            // We don't move; we just stay still.
            DisableStealthMode();

        }

    }

    public void EnableStealthMode()
    {
        // Enable Stealth Mode
        bossHitCollider.enabled = false;
        spriteRenderer.color = stealthColor;
    }

    public void DisableStealthMode()
    {
        // Disable Stealth Mode
        bossHitCollider.enabled = true;
        spriteRenderer.color = bossOriginalColor;

    }

    public void ActivateMovementState(float endTime, Direction newDirection)
    {
        if (newDirection == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        {
            ActivateLaserMovement(endTime);
        }
        else if (newDirection == Direction.SNIPER_BOSS_BULLET_HELL_MOVEMENT)
        {
            ActivateBulletHellMovement(endTime);
        }
        else if (newDirection == Direction.SNIPER_BOSS_TELEPORT_MOVEMENT)
        {
            ActivateTeleportMovement(endTime);
        }
    }

    public void DeactivateMovementState()
    {
        if (direction == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        {
            DeactivateLaserMovement();
        }
        else if (direction == Direction.SNIPER_BOSS_BULLET_HELL_MOVEMENT)
        {
            DeactivateBulletHellMovement();
        }
        else if (direction == Direction.SNIPER_BOSS_TELEPORT_MOVEMENT)
        {
            DeactivateTeleportMovement();
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

    public void ActivateTeleportMovement(float endTime)
    {
        direction = Direction.SNIPER_BOSS_TELEPORT_MOVEMENT;
        moveStateOverridden = true;
        teleportMovementActive = true;
    }

    public void DeactivateTeleportMovement()
    {
        direction = Direction.SNIPER_BOSS_TELEPORT_MOVEMENT;
        moveStateOverridden = true;
        teleportMovementActive = true;
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
            float rotSpeed = (randomValue < 0.5f) ? laserRotationSpeed : -laserRotationSpeed;

            while (Time.time < endTime)
            {
                // Either rotates CW or CCW (negative is CW)
                transform.RotateAround(transform.position, Vector3.forward, Time.deltaTime * rotSpeed);
                yield return null;
            }
            laserRoutine = null;
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
    // While moving to player, SniperBoss is in stealth mode and can't be hit by player attacks.
    public void MoveToPlayer()
    {

        if (sniperBoss.target != null)
        {


            Vector3 dist = (sniperBoss.target.transform.position - sniperBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            sniperBoss.transform.rotation = Quaternion.RotateTowards(sniperBoss.transform.rotation, desiredRotation, sniperBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

            sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed);

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

    public void OnObjectReuse()
    {

    }
}

