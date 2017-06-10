using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class SniperBoss : Ship, IEnemy
{

    /** 
	Spec:

	- Turn to player
	- Teleports to random pt far from player
	- Charges + fires laser in arc
		1) Charge. 
		2) Then fire laser for X sec, rotating at Y angles / sec. (can fire 3 lasers consecutively!!!!)
		3) Then brief cooldown in which boss can't do anything except rotate.
		4) Then teleport, start charging + repeat process again.
	 - Scatters small explosives 
	 */

    #region Variables
    public float sqDist = 100.0f;   // Distance at which it starts backing away from player
    public float spawnDelay = 5.0f;
    public float safetyDist = 100.0f; // If player is too close, will use explosives attack

    [Header("TELE LOGIC")]
    public float teleDelay = 0.5f; // The time btwn when visual marker for teleport marker appears, and when we actually teleport
    public float teleCooldown = 8.0f; // Cooldown time for teleport
    public float postTeleDelay = 1.0f;
    public bool teleportActive = false;


    public bool isAtking = false;   // Desc. if boss is attacking
    public int numAtks = 0;     // Tracks # of times we atked. Useful for if we fire laser mult. times in a row.
    public bool explAtkActive = false;


    public float endTime;

    public bool spawnEnabled = false;


    //public GameObject laserSprite;		// Temporary sprite
    //public GameObject teleMarker;
    // Visual marker for future teleport location

    [SerializeField] private float nextAtkTime;
    // Time at which we can launch next valid atk
    public IEnumerator teleRoutine;
    public IEnumerator laserRoutine;

    #endregion


    #region Unity Life Cycle

    protected override void Start()
    {

        //Initialize ();		// Assigns target
        base.Start();

        //mapCollider = GameManager.Singleton.mapCollider;
        moveState = GetComponent<IMoveState>();

        //Vector3 boxSize = mapCollider.GetComponent<BoxCollider>().size;
        //xBound = boxSize.x / 2;
        //yBound = boxSize.y / 2;

        //teleportActive = true;

        // Start attack routines
        //teleRoutine = Teleport();
        //StartCoroutine(teleRoutine);

        //laserActive = true;
        //laserRoutine = UseLaser();
        //StartCoroutine(laserRoutine);


    }

    #endregion

    #region Game Logic

    public void OverrideMoveState(Direction direction)
    {
        moveState.SetDirection(direction);
    }




    IEnumerator UseLaser()
    {

        while (true)
        {
            while (laserActive)
            {

                // Turn to player first
                float turnTime = Time.time + 2.0f;
                while (Time.time < turnTime)
                {
                    Vector3 playerDist = target.transform.position - transform.position;    // Find vector difference between target and this
                    playerDist.Normalize();     // Get unit vector
                    float zPlayerAngle = (Mathf.Atan2(playerDist.y, playerDist.x) * Mathf.Rad2Deg) - 90;    // Angle of rotation around z-axis (pointing upwards)

                    Quaternion rot = Quaternion.Euler(0, 0, zPlayerAngle);      // Store rotation as an Euler, then Quaternion
                    transform.rotation = Quaternion.RotateTowards(transform.rotation, rot, rotationSpeed * Time.deltaTime); // Rotate the enemy
                    yield return null;
                }

                // Charge time
                float chargeTime = Time.time + laserChargeTime;
                while (Time.time < chargeTime)
                {
                    Debug.Log("CHARGING LASER");
                    yield return null;
                }

                while (numAtks < 3)
                {

                    // Fire laser for X sec, rotating at Y angles / sec.
                    endTime = Time.time + laserEmitTime;
                    Debug.Log(string.Format("CURR TIME: {0}, ENDTIME: {1}", Time.time, endTime));
                    Vector3 targetStartPos = target.transform.position; // Take measurements to determine which way target is moving
                    Vector3 newPos = Vector3.zero;
                    //bool tookPosMeas = false;

                    //if (!tookPosMeas) {			// In case we need to take more meas.
                    yield return new WaitForSeconds(0.05f);
                    newPos = target.transform.position;
                    //tookPosMeas = true;
                    Debug.Log("TOOK MEAS");
                    //}


                    // Need to fix cases - can't change after we start rotating
                    if (newPos.y < targetStartPos.y /*&& newPos.x > transform.position.x*/)
                    {
                        while (Time.time < endTime)
                        {
                            transform.RotateAround(transform.position, Vector3.forward, Time.deltaTime * -5.0f);        // Rotate CW
                            ShowLaser();
                            yield return null;
                        }
                    }
                    else if (newPos.y > targetStartPos.y /*&& newPos.x > transform.position.x*/)
                    {
                        while (Time.time < endTime)
                        {
                            transform.RotateAround(transform.position, Vector3.forward, Time.deltaTime * 5.0f);     // Rotate CCW
                            ShowLaser();
                            yield return null;
                        }
                    }
                    else
                    {
                        while (Time.time < endTime)
                        {
                            transform.RotateAround(transform.position, Vector3.forward, Time.deltaTime * 5.0f);     // Rotate CCW
                            ShowLaser();
                            yield return null;
                        }
                    }

                    HideLaser();
                    Debug.Log("NUMATKS = " + numAtks);
                    numAtks += 1;
                    if (numAtks >= 3)
                    {
                        numAtks = 0;
                        break;
                    }
                    yield return new WaitForSeconds(1.5f);
                    // Laser / rotation logic
                    //Vector3 rayDir = new Vector3 (-transform.position.x * 10, transform.position.y, 0);
                    //Debug.DrawRay (transform.position, rayDir);

                    //transform.rotation = Quaternion.Slerp (transform.rotation, destRot, Time.deltaTime * 0.5f);
                }

                // Brief cooldown in which boss can't do anything except rotate. (tell MS)
                laserActive = false;
                teleportActive = true;
                //Debug.Log ("COOLDOWN");

            }
            yield return null;
        }
    }

    IEnumerator UseExplosives()
    {

        while (true)
        {
            if (explAtkActive)
            {


            }
            yield return null;
        }
    }


    IEnumerator UseAttack()
    {
        while (true)
        {

            // Wait until we can start atking again
            if (Time.time >= nextAtkTime)
            {

                // Choose an atk randomly (may choose to weight later to prevent repeats)
                // 0=laser, 1=explosives (must use if player is close)

                //int atkID = 0; /* = Random.Range (0, 2); */
                isAtking = true;        // We're now attacking

                if (numAtks >= 3)
                {       // If we've atked 3 times in a row

                    teleportActive = true;
                    //StartCoroutine(Teleport());

                    // We let Teleport routine do its job
                    while (teleportActive)
                    {
                        yield return null;
                    }

                }
                else if (moveState.Direction == Direction.PLAYER_UNDETECTED)
                {
                    // Only use our laser if player is far enough away to be undetected (MS performs this check).

                    //laserActive = true;
                    StartCoroutine(UseLaser());

                    while (laserActive)
                    {
                        yield return null;
                    }

                }
                else if (moveState.Direction == Direction.PLAYER_DETECTED)
                {
                    // Use our explosives if player is too close, to make them go away!	

                    explAtkActive = true;
                    StartCoroutine(UseExplosives());

                    while (explAtkActive)
                    {
                        yield return null;
                    }
                }


                /*// Fix to explosives atk
				if (target != null && Utils.SquaredEuclideanDistance(gameObject, target.gameObject) < safetyDist) {
					
				}*/

                // After either attack
                //nextAtkTime = Time.time + Random.Range(3, atkTimeRange);		// Next atk will take place at 'nextAtkTime'	
                isAtking = false;       // No longer attacking
                moveState.Direction = Direction.PLAYER_DETECTED;
                yield return null;
            }
            yield return null;
        }
    }




    public override void Move()
    {
        moveState.UpdateState();
    }

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.activeSelf && other.gameObject.CompareTag(Constants.PlayerShot))
        {

            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us
            Damage(GameManager.Singleton.playerDamage);         // We lost health

            //Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
        }
    }


    #endregion

}

