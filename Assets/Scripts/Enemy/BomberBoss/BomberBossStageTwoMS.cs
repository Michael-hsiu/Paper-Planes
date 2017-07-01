using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class BomberBossStageTwoMS : MonoBehaviour, IMoveState
{
    [Header("GENERAL_DATA")]
    public Direction direction = Direction.PLAYER_UNDETECTED;
    public Direction Direction { get; set; }
    public BomberBossStageTwo bomberBossStageTwo;
    public float movementSpeed = 5.0f;
    public float resizeDuration = 3.0f;
    public float currRingRetractTime;
    public float resizeStartTime;
    public int numMobsToSpawn = 6;
    public float bomberSpawnRadius = 7.0f;
    public float endTime;
    public bool spawned = false;
    public Dictionary<GameObject, GameObject> ringBomberDictionary = new Dictionary<GameObject, GameObject>();

    public GameObject coreSprite;
    public GameObject coreRingSprite;       // For the center core
    public GameObject ringSprite;

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
    public float slingShotForce = 700.0f;   // Force of slingshots fired
    public float slingShotDelay = 2.0f;     // Delay btwn slingshots fired
    public float slingShotErrorRange = 10.0f;   // The error distance within which slingshots are fired
    public Vector3 targetDirection;
    public Vector3 slingShotPosition;
    public GameObject slingShotBomberShip;   // This is the prefab we spawn
    public GameObject spawnedMobsContainer;
    public List<PoolObject> bombersSpawned = new List<PoolObject>();
    public Queue<PoolObject> bombersSpawnedQueue = new Queue<PoolObject>();
    public List<GameObject> bomberSpawnPointsUnordered = new List<GameObject>();        // To move to correct angle / pos
    public List<GameObject> bomberSpawnPointsOrdered = new List<GameObject>();          // The actual order we fire bombers

    public GameObject bomberToSlingshot;           // Currently active bomber to slingshot
    IEnumerator slingShotAttackRoutine;

    void Start()
    {
        bomberBossStageTwo = GetComponent<BomberBossStageTwo>();
        if (spawnedMobsContainer != null)
        {
            spawnedMobsContainer.transform.parent = transform;      // Nest the container under ourselves
        }

        rotationRoutine = StartRotating();
        rushAttackMovementRoutine = RushAttackMovement();
        slingShotAttackRoutine = SlingShotMovement();

        //StartCoroutine(rotationRoutine);
        //StartCoroutine(rushAttackMovementRoutine);
        StartCoroutine(slingShotAttackRoutine);
    }

    // Should NOT call this when starting for first time, only on reuse
    public void OnObjectReuse()
    {
        StopAllCoroutines();
        bombersSpawned.Clear();
        bombersSpawnedQueue.Clear();
        //Debug.Break();
        //Start();

    }

    public void UpdateState()
    {
        if (direction == Direction.PLAYER_DETECTED)
        {
            //MoveToCenterBomber(); // Change to be AWAY from player if too close

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
                yield return new WaitForSeconds(rushAttackChargeTime * 2 / 3);
                directionToPlayer = (bomberBossStageTwo.target.transform.position - bomberBossStageTwo.transform.position).normalized;
                yield return new WaitForSeconds(rushAttackChargeTime * 1 / 3);

                rotationSpeedIncreased = false;

                // Rush to player
                // Collisions will knock player back and knock powerups out of them
                bomberBossStageTwo.GetComponent<Rigidbody>().AddForce(directionToPlayer * thrustFactor, ForceMode.Impulse);     // Propel boss forward

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

            // Randomly select 1 bomber & rotate until it's close to the closest point
            // Apply force on selected bomber in direction of cached position
            // Repeat process
            if (slingShotAttackActive)
            {
                // Wait to come to a stop first before spawning
                // Spin for a certain duration, with rotation speed constant
                float rotEndTime = Time.time + 2.0f;
                while (Time.time < rotEndTime)
                {
                    // Rotate the center sprite
                    Vector3 newRotationAngle = Vector3.forward * currentRotationFactor * Time.deltaTime;
                    rotatingGearSprite.transform.Rotate(newRotationAngle);
                    yield return null;
                }

                // Clear the remaining bombers from last prefab use
                List<GameObject> remainingBombers = Utils.GetChildren(spawnedMobsContainer);
                foreach (GameObject go in remainingBombers)
                {
                    Destroy(go);
                    //Debug.Break();
                }


                // Spawn sentinel bombers symetrically in circle around boss 
                // Put them in a container, adjust # distance from boss in inspector
                //int numMobsToSpawn = bomberSpawnPoints.Count;
                float spawnAngle = 360.0f / numMobsToSpawn;     // Angle btwn 2 adjacent bombers
                float halfwayAngleIncrements = 180.0f / spawnAngle;     // Angle increments to travel 180 deg

                Vector3 startPosition = spawnedMobsContainer.transform.position;

                // Move each bomber spawn point to correct place
                float angle = 0f;
                int spawnCounter = numMobsToSpawn;
                for (int i = 0; i < bomberSpawnPointsUnordered.Count; i++)
                {
                    //foreach (GameObject spawnPoint in bomberSpawnPointsUnordered)
                    //{
                    GameObject spawnPoint = bomberSpawnPointsUnordered[i];

                    // Move the spawn point to correct distance
                    float newX = startPosition.x + bomberSpawnRadius * Mathf.Cos(angle * Mathf.Deg2Rad);
                    float newY = startPosition.y + bomberSpawnRadius * Mathf.Sin(angle * Mathf.Deg2Rad);

                    Vector3 newPos = new Vector3(newX, newY, 0f);
                    spawnPoint.transform.position = newPos;
                    angle += spawnAngle;     // Spawn in _ times

                    // Spawn mob at spawn point
                    PoolObject spawnedMob = PoolManager.Instance.ReuseObjectRef(slingShotBomberShip, newPos, Quaternion.identity);
                    ringBomberDictionary[spawnPoint] = spawnedMob.gameObject;
                    spawnedMob.gameObject.transform.parent = spawnedMobsContainer.transform;    // Put them in container object

                    // Count # mobs spawned
                    spawnCounter -= 1;
                }
                //Debug.Break();

                // Cache player position and start spinning
                Vector3 targetPosition = GameManager.Singleton.playerShip.transform.position;

                // Spin for a certain duration, with rotation speed constant
                rotEndTime = Time.time + 1.0f;
                while (Time.time < rotEndTime)
                {
                    // Rotate the center sprite
                    Vector3 newRotationAngle = Vector3.forward * currentRotationFactor * Time.deltaTime;
                    rotatingGearSprite.transform.Rotate(newRotationAngle);

                    // Rotate ring of other bombers the other way
                    newRotationAngle *= -1;
                    spawnedMobsContainer.transform.Rotate(newRotationAngle);
                    yield return null;
                }

                //Debug.Break();
                // Slingshot the 4 bombers

                // Spin for a certain duration, with rotation speed increasing
                // Find closest point on collider to cached position
                // Currently is not time-dependent
                rotEndTime = Time.time + 15.0f;
                float accelStartTime = Time.time + 4.0f;
                //bomberToSlingshot = bombersSpawnedQueue.Dequeue();
                //PoolObject bomberToSlingshot = bombersSpawned[0];

                // Cache a target position
                targetDirection = (GameManager.Singleton.playerShip.transform.position - transform.position).normalized;
                targetDirection *= bomberBossStageTwo.collisionCollider.radius;     // Scale to be on the radius
                slingShotPosition = transform.position + targetDirection;    // This is the pt on the perimeter of collider

                //rotationSpeedIncreased = true;
                int spawnIndex = 0;
                int bombersRemainingToLaunch = bomberSpawnPointsOrdered.Count;
                while (Time.time < rotEndTime)
                {
                    // Choose correct mob to launch from ordered list
                    if (bomberToSlingshot == null)
                    {
                        GameObject activeSpawnPoint = bomberSpawnPointsOrdered[spawnIndex];
                        bomberToSlingshot = ringBomberDictionary[activeSpawnPoint];
                        spawnIndex += 1;
                        //Debug.Break();
                    }

                    // Rotate the center sprite
                    Vector3 newRotationAngle = Vector3.forward * currentRotationFactor * Time.deltaTime;
                    rotatingGearSprite.transform.Rotate(newRotationAngle);

                    // Rotate ring of other bombers the other way
                    newRotationAngle *= -1;
                    spawnedMobsContainer.transform.Rotate(newRotationAngle);

                    // Speed up rotation
                    if (currentRotationFactor < maxRotationSpeed)
                    {
                        // Increase by our interval, or as much as possible under the max
                        float rotationFactorDiff = maxRotationSpeed - currentRotationFactor;
                        currentRotationFactor += Mathf.Min(rotationFactorInterval, rotationFactorDiff);
                        //Debug.Break();
                    }
                    if (Time.time > accelStartTime && Vector3.Distance(bomberToSlingshot.transform.position, slingShotPosition) < slingShotErrorRange)
                    {
                        //Debug.Break();
                        // Cache a target position
                        targetDirection = (GameManager.Singleton.playerShip.transform.position - transform.position).normalized;
                        targetDirection *= bomberBossStageTwo.collisionCollider.radius;     // Scale to be on the radius
                        slingShotPosition = transform.position + targetDirection;    // This is the pt on the perimeter of collider

                        // Fire at target position
                        bomberToSlingshot.GetComponent<Rigidbody>().AddForce(targetDirection.normalized * slingShotForce, ForceMode.Impulse);
                        accelStartTime = Time.time + slingShotDelay;    // Delay until the next time we can slingshot a mob

                        bomberToSlingshot.transform.parent = null;  // De-parent from container
                        bomberToSlingshot = null;
                        bombersRemainingToLaunch -= 1;
                        // Launched all our bombers (#s tracked manually)
                        if (bombersRemainingToLaunch == 0)
                        {
                            break;
                        }

                        accelStartTime = Time.time + slingShotDelay;    // Delay until the next time we can slingshot a mob
                        //Debug.Break();
                    }
                    yield return null;
                }
                //slingShotAttackActive = false;
                // Delay btwn attacks
                yield return new WaitForSeconds(1.0f);
                currentRotationFactor = startingRotationFactor;

            }
            yield return null;
        }
    }


    IEnumerator StartRotating()
    {
        while (true)
        {
            if (!slingShotAttackActive)
            {
                // GO into loop if we're under influence of attack; coroutine controls how long we stay in loop
                // Rush attack case
                while (rotationSpeedIncreased)
                {
                    // Rotate each of the sprites
                    Vector3 newRotationAngle = Vector3.forward * currentRotationFactor * Time.deltaTime;
                    rotatingGearSprite.transform.Rotate(newRotationAngle);
                    if (ringSprite != null)
                    {
                        ringSprite.transform.Rotate(newRotationAngle);
                    }
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
                if (ringSprite != null)
                {
                    ringSprite.transform.Rotate(rotationAngle);
                }
                yield return null;
            }
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
        if (bomberBossStageTwo.target != null)
        {

            Vector3 dist = (bomberBossStageTwo.target.transform.position - bomberBossStageTwo.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            bomberBossStageTwo.transform.rotation = Quaternion.RotateTowards(bomberBossStageTwo.transform.rotation, desiredRotation, bomberBossStageTwo.rotationSpeed * Time.deltaTime);    // Rotate the enemy

        }
    }


    public void MoveToPlayer()
    {

        if (bomberBossStageTwo.target != null)
        {

            Vector3 dist = (bomberBossStageTwo.target.transform.position - bomberBossStageTwo.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            bomberBossStageTwo.transform.rotation = Quaternion.RotateTowards(bomberBossStageTwo.transform.rotation, desiredRotation, bomberBossStageTwo.rotationSpeed * Time.deltaTime);    // Rotate the enemy

            bomberBossStageTwo.transform.position = Vector2.MoveTowards(bomberBossStageTwo.transform.position, bomberBossStageTwo.target.transform.position, Time.deltaTime * bomberBossStageTwo.speed);

        }
    }

    public void MoveBackwards()
    {

        if (bomberBossStageTwo.target != null)
        {

            Vector3 dist = -(bomberBossStageTwo.target.transform.position - bomberBossStageTwo.transform.position).normalized;  // Find unit vector difference between target and this
            Vector3 angleDist = -dist;

            float zAngle = (Mathf.Atan2(angleDist.y, angleDist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);       // Store rotation as an Euler, then Quaternion
            bomberBossStageTwo.transform.rotation = Quaternion.RotateTowards(bomberBossStageTwo.transform.rotation, desiredRotation, bomberBossStageTwo.rotationSpeed * Time.deltaTime);   // Rotate the enemy

            bomberBossStageTwo.transform.position = Vector2.MoveTowards(bomberBossStageTwo.transform.position, bomberBossStageTwo.transform.position + dist, Time.deltaTime * bomberBossStageTwo.speed);

        }

    }

}

