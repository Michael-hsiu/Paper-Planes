using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//using UnityStandardAssets.CrossPlatformInput;

// Dash components modelled after: http://answers.unity3d.com/questions/892955/dashing-mechanic-using-rigidbodyaddforce.html
public class AIInput : MonoBehaviour, InputComponent
{

    public bool controlsEnabled = false;
    public float disableTime;           // The amount of time that player controls are disabled when hit by EMP Wave
    public float speed = 10.0f;
    public float rotationSpeed = 10.0f;
    public float rotationDetectInterval = 0.3f;

    [Header("MOBILE_CONTROLS_AND_LERP")]
    public float lerpStartTime;
    public float lerpRatio;
    public float currLerpTime;
    public float rotationEndTime;
    public Quaternion playerStartRotation;
    public Quaternion desiredRotation;
    float zAnglePlayer;

    [Header("FIRING_RIG_LERP")]
    public float rigLerpStartTime;
    public float rigLerpRatio;
    public float rigCurrLerpTime;
    public float rigRotationEndTime;
    public Quaternion rigStartRotation;
    public Quaternion rigDesiredRotation;
    float zAngleFiringRig;

    [Header("TIMESCALE_LOGIC")]
    public bool gamePaused = false;
    public float endTime;

    //public float speed = 5.0f;
    public Vector2 savedVelocity;
    public Vector2 lastDashVelocity;    // For if we get hit by EMP while dashing, we keep velocity without losing full control
                                        //public DashState dashState;		// Stores current dash state

    public IEnumerator cr1;
    //public VirtualJoystick virtualJoystickMove;
    public VirtualDraggableJoystick virtualJoystickMove;
    public VirtualJoystick virtualJoystickRotate;

    //public enum DashState { Ready, Dashing, Cooldown}

    // Naive way of pausing game
    //void Update()
    //{
    //    if (Time.time > endTime)
    //    {
    //        Vector3 moveInputDirection = virtualJoystickMove.inputDirection;
    //        if (moveInputDirection == Vector3.zero)
    //        {
    //            if (!gamePaused)
    //            {
    //                Time.timeScale = 0f;
    //                gamePaused = true;
    //            }
    //            else
    //            {
    //                Time.timeScale = 1f;
    //                gamePaused = false;
    //            }
    //        }
    //        endTime += 3.0f;
    //    }
    //}
    //IEnumerator PlayDelayedAudioRoutine(PlayerShip player)
    //{
    //    yield return new WaitForSeconds(1.2f);
    //    player.playerAudioSource.PlayOneShot(player.firingAudioClip, 0.4f);   // Play audio
    //}

    // Called during PlayerShip's FixedUpdate()
    public void UpdateInput(PlayerShip player)
    {

        if (controlsEnabled)
        {
            // Auto-fire
            if (Time.time > player.nextFire && !GameManager.Singleton.isBurstRushCharging && !GameManager.Singleton.isBurstRushing && !player.dashStarted)
            {
                player.Fire();
                //if (isActiveAndEnabled)
                //{
                //    StartCoroutine(PlayDelayedAudioRoutine(player));
                //}
            }

            bool axisInput = GameManager.Singleton.axisInput;   // Check if we register hori/vert movement
            bool turnInput = GameManager.Singleton.turnInput;   // Check if we can rotate/turn

            // COMPUTER INPUTS
            // Can't turn whilst dashing
            if (turnInput)
            {
                if (Input.GetKey(KeyCode.D) && !player.dashStarted)
                {
                    //player.transform.GetComponent <Rigidbody>().angularVelocity = Vector3.zero;
                    //player.transform.Rotate(new Vector3(0, 0, 200) * Time.deltaTime);
                    player.transform.GetComponent<Rigidbody>().AddTorque(new Vector3(0, 0, -200) * Time.deltaTime, ForceMode.VelocityChange);
                }

                // Can't turn whilst dashing
                if (Input.GetKey(KeyCode.A) && !player.dashStarted)
                {
                    //player.transform.GetComponent <Rigidbody>().angularVelocity = Vector3.zero;
                    //player.transform.Rotate(new Vector3(0, 0, -200) * Time.deltaTime);
                    player.transform.GetComponent<Rigidbody>().AddTorque(new Vector3(0, 0, 200) * Time.deltaTime, ForceMode.VelocityChange);
                }
            }


            if (axisInput)
            {
                if (Input.GetKey(KeyCode.W))
                {
                    player.GetComponent<Rigidbody>().AddRelativeForce(transform.up * player.speed);
                    //player.GetComponent<Rigidbody>().AddRelativeForce(transform.up * player.speed); // Also works!

                }

                if (Input.GetKey(KeyCode.S))
                {
                    player.GetComponent<Rigidbody>().AddRelativeForce(-transform.up * player.speed);
                    //player.GetComponent<Rigidbody>().AddRelativeForce(-transform.up * player.speed); // Also works!
                }
            }

            // Powerup input keys
            if (Input.GetKey(KeyCode.G))
            {       // Use Dash powerup
                if (GameManager.Singleton.numDashes > 0 && !player.rushStarted)
                {
                    Dash(player);
                    Debug.Log("DASH KEY REGISTERED!");
                }
            }
            if (Input.GetKey(KeyCode.H))
            {       // Use Burst Rush powerup
                if (GameManager.Singleton.rushes.Count > 0 && !player.dashStarted)
                {
                    player.rushStarted = true;      // To make sure we can't activate 2 at a time
                    GameManager.Singleton.rushes.Dequeue().TriggerCharge(player);   // Get the FIFO rush powerup; tell it to activate a rush!!!
                    Debug.Log("RUSH KEY REGISTERED!");
                }
            }


            // MOBILE INPUTS
            // Old Unity prefab logic was removed; consult old versions for the code
            // Rotation logic
            Vector3 rotateInputDirection = virtualJoystickRotate.inputDirection;
            Vector3 moveInputDirection = virtualJoystickMove.inputDirection;
            if (rotateInputDirection != Vector3.zero)
            {
                // Joystick FiringRig Rotation logic
                if (Time.time > rigRotationEndTime)
                {
                    Quaternion rawFiringRigRotation = player.firingRig.transform.rotation;    // Cache start rotation
                    Vector3 firingRigRotEuler = rawFiringRigRotation.eulerAngles;
                    firingRigRotEuler.x = 0f;       // Remove non z-axis rot
                    firingRigRotEuler.y = 0f;
                    rigStartRotation = Quaternion.Euler(firingRigRotEuler);

                    zAngleFiringRig = (Mathf.Atan2(rotateInputDirection.z, rotateInputDirection.x) * Mathf.Rad2Deg) - 90;    // Angle of rotation around z-axis (pointing upwards)
                    rigDesiredRotation = Quaternion.Euler(0, 0, zAngleFiringRig);        // Store rotation as an Euler, then Quaternion
                    rigRotationEndTime = Time.time + rotationDetectInterval;             // Schedule next rotation check
                    rigLerpStartTime = Time.time;
                    rigCurrLerpTime = 0f;
                }
                rigCurrLerpTime += Time.deltaTime;
                rigLerpRatio = rigCurrLerpTime / rotationDetectInterval;
                player.firingRig.transform.rotation = Quaternion.Slerp(rigStartRotation, rigDesiredRotation, rigLerpRatio);
                Debug.Log("FIRINGRIGANGLES: " + player.firingRig.transform.rotation.eulerAngles);
            }
            // Movement logic
            if (moveInputDirection != Vector3.zero)
            {
                // Joystick Rotation logic
                // Only turn if no abnormal status OR is burst rush charging
                if (axisInput || GameManager.Singleton.isBurstRushCharging)
                {
                    if (Time.time > rotationEndTime)
                    {
                        Quaternion rawPlayerRotation = player.transform.rotation;    // Cache start rotation
                        Vector3 playerRotEuler = rawPlayerRotation.eulerAngles;
                        playerRotEuler.x = 0f;
                        playerRotEuler.y = 0f;
                        playerStartRotation = Quaternion.Euler(playerRotEuler);

                        Vector3 destRotEuler = virtualJoystickMove.currPos - virtualJoystickMove.lastPos;
                        zAnglePlayer = (Mathf.Atan2(destRotEuler.y, destRotEuler.x) * Mathf.Rad2Deg) - 90;    // Angle of rotation around z-axis (pointing upwards)
                        desiredRotation = Quaternion.Euler(0, 0, zAnglePlayer);        // Store rotation as an Euler, then Quaternion
                        rotationEndTime = Time.time + rotationDetectInterval;   // Schedule next rotation check
                        lerpStartTime = Time.time;
                        currLerpTime = 0f;
                        //Debug.Break();
                    }
                    currLerpTime += Time.deltaTime;
                    lerpRatio = currLerpTime / rotationDetectInterval;
                    player.transform.rotation = Quaternion.Slerp(playerStartRotation, desiredRotation, lerpRatio);     // Works for PlayerShotSpawn rotations for Mobile, feels smoother

                    //float zAngle = (Mathf.Atan2(moveInputDirection.z, moveInputDirection.x) * Mathf.Rad2Deg) - 90;   // Angle of rotation around z-axis (pointing upwards)
                    //Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);       // Store rotation as an Euler, then Quaternion
                    //player.transform.rotation = desiredRotation;
                    //player.GetComponent<Rigidbody>().AddRelativeForce(transform.up * player.speed);
                }

                // Move in new direction we're facing
                // Burst rush rotate only
                // This part is for adding forward force
                if (GameManager.Singleton.isBurstRushing && GameManager.Singleton.turnInput)
                {
                    // No rotation change
                    //Debug.Break();
                }
                else if (!GameManager.Singleton.isBurstRushCharging && !GameManager.Singleton.isBurstRushing)
                {
                    player.GetComponent<Rigidbody>().AddForce(player.transform.up * player.speed);
                }
            }

            // Fix player z-position
            Vector3 playerPos = player.transform.position;
            playerPos.z = 0f;
            player.transform.position = playerPos;      // Weird error where mobile controls / wall collisions cause z-coordinate of player to change
                                                        // Check if our speed cap is on (off if we're dashing!!!)
            if (GameManager.Singleton.speedCapped)
            {
                // Limit player's maximum velocity
                player.GetComponent<Rigidbody>().velocity = Vector3.ClampMagnitude(player.GetComponent<Rigidbody>().velocity, player.maxForward);

                // Comparing squared vector magnitudes
                if (player.GetComponent<Rigidbody>().velocity.sqrMagnitude == Mathf.Pow(player.maxForward, 2))
                {
                    //Debug.Log("MAX VELOCITY REACHED: " + player.GetComponent<Rigidbody>().velocity.sqrMagnitude);       // Should be the square of maxForward
                }
            }
        }
    }
    // Disable player control - activated when hit my EMP wave
    public void DisableControls()
    {
        StopAllCoroutines();
        if (Time.time < GameManager.Singleton.playerShip.dashEndTime)
        {
            GameManager.Singleton.playerShip.GetComponent<Rigidbody>().velocity = lastDashVelocity;
        }
        else
        {
            GameManager.Singleton.playerShip.GetComponent<Rigidbody>().velocity = savedVelocity;
        }
        GameManager.Singleton.playerShip.dashStarted = false;
        StartCoroutine(DisableControlsRoutine());
    }

    IEnumerator DisableControlsRoutine()
    {
        controlsEnabled = false;
        yield return new WaitForSeconds(disableTime);
        controlsEnabled = true;
    }

    // Overloaded alternatives
    public void DisableControls(float givenEndTime)
    {
        StopAllCoroutines();
        if (Time.time < GameManager.Singleton.playerShip.dashEndTime)
        {
            GameManager.Singleton.playerShip.GetComponent<Rigidbody>().velocity = lastDashVelocity;
        }
        else
        {
            GameManager.Singleton.playerShip.GetComponent<Rigidbody>().velocity = savedVelocity;
        }
        GameManager.Singleton.playerShip.dashStarted = false;
        StartCoroutine(DisableControlsRoutine(givenEndTime));
    }

    IEnumerator DisableControlsRoutine(float givenDisableTime)
    {
        controlsEnabled = false;
        yield return new WaitForSeconds(givenDisableTime);
        controlsEnabled = true;
    }

    // Dash powerup for player
    public void Dash(PlayerShip player)
    {
        if (GameManager.Singleton.numDashes > 0 && !player.rushStarted)
        {
            //Debug.Log ("DASH KEY REGISTERED!");
            if (!player.dashStarted)
            {       // Makes sure we only have 1 dash at a time

                GameManager.Singleton.isDashing = true;
                GameManager.Singleton.speedCapped = false;
                GameManager.Singleton.numDashes -= 1;
                UIManager.Singleton.UpdateDashText(GameManager.Singleton.numDashes);

                player.dashStarted = true;      // Only 1 dash at a time
                player.dashEndTime = Time.time + player.dashDuration;       // Set end time for dash

                // Start dash co-routine
                /*if (cr1 != null) {
                StopCoroutine (cr1);
            }*/
                cr1 = StartDash(player);
                StartCoroutine(cr1);
            }
        }
    }

    IEnumerator StartDash(PlayerShip player)
    {

        GameManager.Singleton.onDashCooldown = true;
        //Debug.Log ("STARTED DASH COROUTINE");


        savedVelocity = Vector3.ClampMagnitude(player.GetComponent<Rigidbody>().velocity, 1.0f);        // Store velocity pre-dash

        Vector3 forceToAdd = player.transform.up;       // Starting force, to be incremented every fixedUpdate

        player.gameObject.GetComponent<Collider>().enabled = false;     // Can't be hit when dashing

        player.GetComponent<Rigidbody>().velocity = player.transform.up;

        while (Time.time < player.dashEndTime)
        {
            //if (player.GetComponent<Rigidbody>().velocity < )
            //player.GetComponent<Rigidbody> ().velocity *= 1.3f;

            player.GetComponent<Rigidbody>().velocity = 1.8f * Vector3.ClampMagnitude(player.GetComponent<Rigidbody>().velocity, 7.0f);
            lastDashVelocity = player.GetComponent<Rigidbody>().velocity;

            //forceToAdd += new Vector3 (forceToAdd.x * 1.001f, forceToAdd.y * 1.001f, forceToAdd.z * 1.001f);
            //player.GetComponent < Rigidbody> ().AddForce (forceToAdd);	// Push player forward for dash (may make this increase over time)
            Debug.Log("DASH ACTIVE!!!");
            yield return new WaitForFixedUpdate();
        }

        //Debug.Log ("DASH ENDED!");

        yield return new WaitForSeconds(0.15f);     // Short delay for player to re-orient after dash

        player.GetComponent<Rigidbody>().velocity = savedVelocity;      // Return to pre-dash velocity
        player.gameObject.GetComponent<Collider>().enabled = true;      // Can now be hit after dashing

        player.dashStarted = false;     // Player is no longer dashing

        // Make sure our z-coord doesn't change!
        Vector3 pos = player.gameObject.transform.position;
        pos.z = 0f;
        player.gameObject.transform.position = pos;

        GameManager.Singleton.isDashing = false;
        GameManager.Singleton.onDashCooldown = false;

        GameManager.Singleton.speedCapped = true;


        yield return new WaitForSeconds(0.1f);
        GameManager.Singleton.onDashCooldown = false;

    }

    //IEnumerator OnDashCoolDown() {

    //}

}
