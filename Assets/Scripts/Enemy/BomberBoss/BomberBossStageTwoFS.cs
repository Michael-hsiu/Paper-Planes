using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberBossStageTwoFS : MonoBehaviour, IFireState
{

    public AttackStatus attackStatus;       // Indicates what attack we're using
    public BomberBossStageTwo bomberBossStageTwo;
    public float endTime;
    //public float slingshotAttackDuration;

    [Header("SLINGSHOT_ATTACK_DATA")]
    public bool slingShotAttackActive = false;
    public int numMobsToSpawn = 8;
    public float bomberSpawnRadius = 7.0f;
    //public float startingRotationFactor = 3.0f;
    //public float currentRotationFactor;

    // Rotation delays
    public float initialRotationDelay = 2.0f;
    public float secondRotationDelay = 1.0f;
    public float rotEndTime;

    public float slingShotForce = 700.0f;   // Force of slingshots fired
    public float slingShotDelay = 2.0f;     // Delay btwn slingshots fired
    public float slingShotErrorRange = 10.0f;   // The error distance within which slingshots are fired
    public Vector3 targetDirection;
    public Vector3 slingShotPosition;
    public GameObject slingShotBomberShip;   // This is the prefab we spawn
    public GameObject spawnedMobsContainer;
    //public List<PoolObject> bombersSpawned = new List<PoolObject>();
    //public Queue<PoolObject> bombersSpawnedQueue = new Queue<PoolObject>();
    public List<GameObject> bomberSpawnPointsUnordered = new List<GameObject>();        // To move to correct angle / pos
    public List<GameObject> bomberSpawnPointsOrdered = new List<GameObject>();          // The actual order we fire bombers
    public Dictionary<GameObject, GameObject> ringBomberDictionary = new Dictionary<GameObject, GameObject>();
    public GameObject bomberToSlingshot;           // Currently active bomber to slingshot

    IEnumerator slingshotAttackRoutine;
    IEnumerator rushAttackRoutine;
    public FiringMode Mode
    {
        get;
        set;
    }

    void Awake()
    {
        // Start attack routines
        bomberBossStageTwo = GetComponent<BomberBossStageTwo>();

        slingshotAttackRoutine = SlingShotAttack();
        //rushAttackRoutine = BulletHellAttack();

        StartCoroutine(slingshotAttackRoutine);
        //StartCoroutine(rushAttackRoutine);
    }


    // This will be called from the Boss's overridden OnObjectReuse() method
    public void OnObjectReuse()
    {
        StopAllCoroutines();
        slingshotAttackRoutine = SlingShotAttack();
        StartCoroutine(slingshotAttackRoutine);
    }


    public void UpdateState()
    {

    }

    // MAIN method for choosing and activating attacks.
    public void UseAttack()
    {
        // Choose an attack
        float randomVal = Random.value;
        if (randomVal <= 1f)
        {
            // Trigger the SLINGSHOT attack
            slingShotAttackActive = true;
            attackStatus = AttackStatus.BOMBER_BOSS_SLINGSHOT_ATTACK;
        }
        else
        {
            // Trigger the RUSH attack
        }
    }

    // Set next possible time for attack 
    public void SetAttackEndTime(float attackEndTime)
    {
        bomberBossStageTwo.nextAttackTime = attackEndTime + Random.Range(3.0f, 4.0f);
    }

    // This routine is for BOMBER_BOSS_SLINGSHOT_MOVEMENT
    // As a note: this looks pretty cool when we just keep spawning
    IEnumerator SlingShotAttack()
    {
        while (true)
        {

            // Randomly select 1 bomber & rotate until it's close to the closest point
            // Apply force on selected bomber in direction of cached position
            // Repeat process
            if (slingShotAttackActive)
            {
                // 2s initial in-place rotation, 1s in-place rot /w bombers, 
                // 4s before 1st launch, 'slingShotDelay' btwn ea. launch for _ bombers
                endTime = Time.time + initialRotationDelay + secondRotationDelay + slingShotDelay * bomberSpawnPointsUnordered.Count + 15.0f;
                SetAttackEndTime(endTime);      // So that Boss script won't launch any more attacks
                bomberBossStageTwo.ActivateMovementState(endTime, Direction.BOMBER_BOSS_SLINGSHOT_MOVEMENT);

                // MS takes over, just rotating in place
                yield return new WaitForSeconds(initialRotationDelay);

                // Clear the remaining bombers from last prefab use
                List<GameObject> remainingBombers = Utils.GetChildren(spawnedMobsContainer);
                foreach (GameObject go in remainingBombers)
                {
                    go.GetComponent<PoolObject>().DestroyForReuse();
                }

                // Spawn sentinel bombers symetrically in circle around boss 
                // Put them in a container, adjust # distance from boss in inspector
                numMobsToSpawn = bomberSpawnPointsOrdered.Count;
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

                // Cache player position and start spinning 
                Vector3 targetPosition = GameManager.Singleton.playerShip.transform.position;

                // Wait to come to a stop first before spawning
                // [MS] Spin for a certain duration, with rotation speed constant
                yield return new WaitForSeconds(secondRotationDelay);

                // [MS] now takes over, increases to max speed
                // FS now controls slinging
                float accelStartTime = Time.time + 4.0f;

                int spawnIndex = 0;
                int bombersRemainingToLaunch = bomberSpawnPointsOrdered.Count;

                // For the first launch
                targetDirection = (GameManager.Singleton.playerShip.transform.position - transform.position).normalized;
                targetDirection *= bomberBossStageTwo.collisionCollider.radius;     // Scale to be on the radius
                slingShotPosition = transform.position + targetDirection;    // This is the pt on the perimeter of collider

                // Keep slinging until all bombers are gone!
                while (bombersRemainingToLaunch != 0)
                {
                    // Choose correct mob to launch from ordered list
                    if (bomberToSlingshot == null || !bomberToSlingshot.gameObject.activeSelf)
                    {
                        GameObject activeSpawnPoint = bomberSpawnPointsOrdered[spawnIndex];
                        bomberToSlingshot = ringBomberDictionary[activeSpawnPoint];
                        spawnIndex += 1;
                        //Debug.Break();
                    }

                    if (Time.time > accelStartTime && Vector3.Distance(bomberToSlingshot.transform.position, slingShotPosition) < slingShotErrorRange)
                    {
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
                // Delay btwn attacks
                slingShotAttackActive = false;
                bomberBossStageTwo.DeactivateMovementState();
            }
            yield return null;
        }
    }
}

