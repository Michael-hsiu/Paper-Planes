
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberBossMS : MonoBehaviour, IMoveState
{

    public Direction direction = Direction.PLAYER_UNDETECTED;
    public Direction Direction { get; set; }

    [Header("ROTATION DATA")]
    public Transform rotatingGear;      // Gear that starts rotating faster whenever attack is about to initiate
    public float startingRotationFactor = 3.0f;
    public float rotationFactorInterval = 5.0f;     // How much we increase the rotation speed by
    public float maxRotationSpeed = 20.0f;
    public bool rotationSpeedIncreased = false;
    public float currentRotationSpeed;
    IEnumerator rotationRoutine;

    [Header("RUSH_ATTACK_DATA")]
    public bool rushAttackMovementActive = false;
    public float thrustFactor = 5.0f;
    public float rushAttackChargeTime = 5.0f;
    public Vector3 directionToPlayer;
    IEnumerator rushAttackMovementRoutine;

    public BomberBoss bomberBoss;
    public float endTime;

    void Start()
    {
        bomberBoss = GetComponent<BomberBoss>();

        rotationRoutine = StartRotating();
        rushAttackMovementRoutine = RushAttackMovement();

        StartCoroutine(rotationRoutine);
        StartCoroutine(rushAttackMovementRoutine);
    }

    // This routine is for BOMBER_BOSS_RUSH_MOVEMENT
    IEnumerator RushAttackMovement()
    {
        while (true)
        {
            if (rushAttackMovementActive)
            {

                // Start rotating faster, getting ready to rush to player. Eye should move, colors should change.
                rotationSpeedIncreased = true;
                yield return new WaitForSeconds(rushAttackChargeTime);
                rotationSpeedIncreased = false;

                // Rush to player
                directionToPlayer = (bomberBoss.target.transform.position - bomberBoss.transform.position).normalized;
                bomberBoss.GetComponent<Rigidbody>().AddForce(directionToPlayer * thrustFactor, ForceMode.Impulse);     // Propel player forward

            }
            yield return null;
        }
    }

    // This routine is always active, but speed can be modified when attack starts 
    IEnumerator StartRotating()
    {
        while (true)
        {

            // Always reset rotation speed at top of the loop
            currentRotationSpeed = startingRotationFactor;

            // GO into loop if we're under influence of attack; coroutine controls how long we stay in loop
            while (rotationSpeedIncreased)
            {

                transform.Rotate(Vector3.forward * currentRotationSpeed * Time.deltaTime); // Rotate the gear much faster
                if (currentRotationSpeed < maxRotationSpeed)
                {
                    // Increase by our interval, or as much as possible under the max
                    float rotationFactorDiff = maxRotationSpeed - currentRotationSpeed;
                    currentRotationSpeed += Mathf.Min(rotationFactorInterval, rotationFactorDiff);
                }
                yield return null;
            }
            // The normal rotation logic
            transform.Rotate(Vector3.forward * startingRotationFactor * Time.deltaTime); // Rotate the gear much faster

            yield return null;
        }
    }


    public void UpdateState()
    {

        if (direction == Direction.PLAYER_DETECTED)
        {
            MoveToPlayer(); // Change to be AWAY from player if too close

        }
    }


    public void ActivateMovementState(float endTime, Direction newDirection)
    {
        if (newDirection == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        {
            //ActivateLaserMovement(endTime);
        }
    }

    public void DeactivateMovementState()
    {
        if (direction == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        {
            //DeactivateLaserMovement();
        }
    }




    // Call this if IDLE
    public void TurnToPlayer()
    {
        if (bomberBoss.target != null)
        {

            Vector3 dist = (bomberBoss.target.transform.position - bomberBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            bomberBoss.transform.rotation = Quaternion.RotateTowards(bomberBoss.transform.rotation, desiredRotation, bomberBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

        }
    }


    public void MoveToPlayer()
    {

        if (bomberBoss.target != null)
        {


            Vector3 dist = (bomberBoss.target.transform.position - bomberBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            bomberBoss.transform.rotation = Quaternion.RotateTowards(bomberBoss.transform.rotation, desiredRotation, bomberBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

            bomberBoss.transform.position = Vector2.MoveTowards(bomberBoss.transform.position, bomberBoss.target.transform.position, Time.deltaTime * bomberBoss.speed);

        }
    }

    public void MoveBackwards()
    {

        if (bomberBoss.target != null)
        {

            Vector3 dist = -(bomberBoss.target.transform.position - bomberBoss.transform.position).normalized;  // Find unit vector difference between target and this
            Vector3 angleDist = -dist;

            float zAngle = (Mathf.Atan2(angleDist.y, angleDist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);       // Store rotation as an Euler, then Quaternion
            bomberBoss.transform.rotation = Quaternion.RotateTowards(bomberBoss.transform.rotation, desiredRotation, bomberBoss.rotationSpeed * Time.deltaTime);   // Rotate the enemy

            bomberBoss.transform.position = Vector2.MoveTowards(bomberBoss.transform.position, bomberBoss.transform.position + dist, Time.deltaTime * bomberBoss.speed);

        }

    }

    public void OnObjectReuse()
    {

    }
}

