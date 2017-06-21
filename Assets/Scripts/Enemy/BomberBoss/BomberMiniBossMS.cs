using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberMiniBossMS : MonoBehaviour, IMoveState
{
    [Header("GENERAL_DATA")]
    public Direction direction = Direction.PLAYER_UNDETECTED;
    public Direction Direction { get; set; }
    public BomberMiniBoss bomberMiniBoss;
    public float endTime;
    public bool spawned = false;

    [Header("ROTATION_DATA")]
    public Transform rotatingGearSprite;      // Gear that starts rotating faster whenever attack is about to initiate
    public float startingRotationFactor = 3.0f;
    public float rotationFactorInterval = 5.0f;     // How much we increase the rotation speed by
    public float maxRotationSpeed = 20.0f;
    public bool rotationSpeedIncreased = false;
    public float currentRotationFactor;
    public Rigidbody rushCollisionRigidBody;
    IEnumerator rotationRoutine;

    [Header("RUSH_ATTACK_DATA")]
    public bool rushAttackMovementActive = false;
    public float thrustFactor = 5.0f;
    public float rushAttackChargeTime = 5.0f;
    public float knockbackForce = 4000.0f;
    public Vector3 directionToPlayer;
    IEnumerator rushAttackMovementRoutine;

    [Header("SLINGSHOT_ATTACK_DATA")]
    public bool slingShotAttackActive = false;
    public Vector3 targetDirection;
    public Vector3 slingShotPosition;
    public GameObject slingShotBomberShip;   // This is the prefab we spawn
    public GameObject spawnedMobsContainer;
    public List<PoolObject> bombersSpawned = new List<PoolObject>();
    public List<GameObject> bomberSpawnPoints = new List<GameObject>();
    IEnumerator slingShotAttackRoutine;

    void Start()
    {
        bomberMiniBoss = GetComponent<BomberMiniBoss>();
        if (spawnedMobsContainer != null)
        {
            spawnedMobsContainer.transform.parent = transform;      // Nest the container under ourselves
        }

        rotationRoutine = StartRotating();
        rushAttackMovementRoutine = RushAttackMovement();
        slingShotAttackRoutine = SlingShotMovement();

        StartCoroutine(rotationRoutine);
        StartCoroutine(rushAttackMovementRoutine);
        StartCoroutine(slingShotAttackRoutine);

    }

    public void OnObjectReuse()
    {

    }

    public void UpdateState()
    {

        if (direction == Direction.PLAYER_DETECTED)
        {
            MoveToPlayer(); // Change to be AWAY from player if too close

        }
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
                // Collisions will knock player back and knock powerups out of them
                directionToPlayer = (bomberMiniBoss.target.transform.position - bomberMiniBoss.transform.position).normalized;
                bomberMiniBoss.GetComponent<Rigidbody>().AddForce(directionToPlayer * thrustFactor, ForceMode.Impulse);     // Propel boss forward

            }
            yield return null;
        }
    }

    // This routine is for BOMBER_BOSS_SLINGSHOT_MOVEMENT
    // As a note: this looks pretty cool when we just keep spawning
    IEnumerator SlingShotMovement()
    {
        while (true)
        {

            if (slingShotAttackActive)
            {
                // Spawn the 4 sentinel bombers and put them in a container
                foreach (GameObject spawnPoint in bomberSpawnPoints)
                {
                    PoolObject spawnedMob = PoolManager.Instance.ReuseObjectRef(slingShotBomberShip, spawnPoint.transform.position, Quaternion.identity);
                    bombersSpawned.Add(spawnedMob);
                    spawnedMob.gameObject.transform.parent = spawnedMobsContainer.transform;    // Put them in container object
                }
                // Cache player position and start spinning
                Vector3 targetPosition = GameManager.Singleton.playerShip.transform.position;

                // Spin for a certain duration, with rotation speed contant
                float endTime = Time.time + 5.0f;
                while (Time.time < endTime)
                {
                    // Rotate the center sprite
                    Vector3 newRotationAngle = Vector3.forward * currentRotationFactor * Time.deltaTime;
                    rotatingGearSprite.transform.Rotate(newRotationAngle);

                    // Rotate ring of other bombers the other way
                    newRotationAngle *= -1;
                    spawnedMobsContainer.transform.Rotate(newRotationAngle);
                    yield return null;
                }

                // Slingshot the 4 bombers
                // Spin for a certain duration, with rotation speed increasing
                // Find closest point on collider to cached position
                // Currently is not time-dependent
                PoolObject bomberToSlingshot = bombersSpawned[0];

                targetDirection = (GameManager.Singleton.playerShip.transform.position - transform.position).normalized;
                targetDirection *= bomberMiniBoss.collisionCollider.radius;     // Scale to be on the radius
                slingShotPosition = transform.position + targetDirection;    // This is the pt on the perimeter of collider

                rotationSpeedIncreased = true;
                while (rotationSpeedIncreased)
                {
                    //Debug.Break();
                    // Rotate the center sprite
                    Vector3 newRotationAngle = Vector3.forward * currentRotationFactor * Time.deltaTime;
                    rotatingGearSprite.transform.Rotate(newRotationAngle);

                    // Rotate ring of other bombers the other way
                    newRotationAngle *= -1;
                    spawnedMobsContainer.transform.Rotate(newRotationAngle);

                    if (currentRotationFactor < maxRotationSpeed)
                    {
                        // Increase by our interval, or as much as possible under the max
                        float rotationFactorDiff = maxRotationSpeed - currentRotationFactor;
                        currentRotationFactor += Mathf.Min(rotationFactorInterval, rotationFactorDiff);
                    }
                    else
                    {
                        rotationSpeedIncreased = false;
                    }
                    yield return null;
                }
                //yield return new WaitForSeconds(5.0f);
                //Debug.Break();




                // Randomly select 1 bomber & rotate until it's close to the closest point
                // Apply force on selected bomber in direction of cached position
                // Repeat process

            }
            yield return null;
        }
    }


    IEnumerator StartRotating()
    {
        while (true)
        {
            // GO into loop if we're under influence of attack; coroutine controls how long we stay in loop
            // Rush attack case
            while (rotationSpeedIncreased)
            {
                // Rotate each of the sprites
                Vector3 newRotationAngle = Vector3.forward * currentRotationFactor * Time.deltaTime;
                rotatingGearSprite.transform.Rotate(newRotationAngle);

                //transform.Rotate(Vector3.forward * currentRotationSpeed * Time.deltaTime); // Rotate the gear much faster
                if (currentRotationFactor < maxRotationSpeed)
                {
                    // Increase by our interval, or as much as possible under the max
                    float rotationFactorDiff = maxRotationSpeed - currentRotationFactor;
                    currentRotationFactor += Mathf.Min(rotationFactorInterval, rotationFactorDiff);
                }
                yield return null;
            }

            // The normal rotation case
            currentRotationFactor = startingRotationFactor;
            Vector3 rotationAngle = Vector3.forward * startingRotationFactor * Time.deltaTime;
            rotatingGearSprite.transform.Rotate(rotationAngle);
            yield return null;
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
        if (bomberMiniBoss.target != null)
        {

            Vector3 dist = (bomberMiniBoss.target.transform.position - bomberMiniBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            bomberMiniBoss.transform.rotation = Quaternion.RotateTowards(bomberMiniBoss.transform.rotation, desiredRotation, bomberMiniBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

        }
    }


    public void MoveToPlayer()
    {

        if (bomberMiniBoss.target != null)
        {

            Vector3 dist = (bomberMiniBoss.target.transform.position - bomberMiniBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            bomberMiniBoss.transform.rotation = Quaternion.RotateTowards(bomberMiniBoss.transform.rotation, desiredRotation, bomberMiniBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

            bomberMiniBoss.transform.position = Vector2.MoveTowards(bomberMiniBoss.transform.position, bomberMiniBoss.target.transform.position, Time.deltaTime * bomberMiniBoss.speed);

        }
    }

    public void MoveBackwards()
    {

        if (bomberMiniBoss.target != null)
        {

            Vector3 dist = -(bomberMiniBoss.target.transform.position - bomberMiniBoss.transform.position).normalized;  // Find unit vector difference between target and this
            Vector3 angleDist = -dist;

            float zAngle = (Mathf.Atan2(angleDist.y, angleDist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);       // Store rotation as an Euler, then Quaternion
            bomberMiniBoss.transform.rotation = Quaternion.RotateTowards(bomberMiniBoss.transform.rotation, desiredRotation, bomberMiniBoss.rotationSpeed * Time.deltaTime);   // Rotate the enemy

            bomberMiniBoss.transform.position = Vector2.MoveTowards(bomberMiniBoss.transform.position, bomberMiniBoss.transform.position + dist, Time.deltaTime * bomberMiniBoss.speed);

        }

    }

}

