using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

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

    //public float speed = 5.0f;
    public Vector2 savedVelocity;
    public Vector2 lastDashVelocity;    // For if we get hit by EMP while dashing, we keep velocity without losing full control
                                        //public DashState dashState;		// Stores current dash state

    public IEnumerator cr1;
    public VirtualJoystick virtualJoystickMove;
    public VirtualJoystick virtualJoystickRotate;

    //public enum DashState { Ready, Dashing, Cooldown}

    // Called during PlayerShip's FixedUpdate()
    public void UpdateInput(PlayerShip player)
    {

        if (controlsEnabled)
        {
            // Auto-fire
            if (Time.time > player.nextFire && !GameManager.Singleton.isBurstRushing && !player.dashStarted)
            {
                player.Fire();
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

            // Left joystick (move)
            float hori = CrossPlatformInputManager.GetAxis("HorizontalJoystick");
            float vert = CrossPlatformInputManager.GetAxis("VerticalJoystick");

            Vector3 shipRotateDir = Vector3.zero;
            shipRotateDir.x = hori;
            shipRotateDir.z = vert;
            if (shipRotateDir != Vector3.zero)
            {
                if (Time.time > rotationEndTime)
                {
                    Quaternion rawPlayerRotation = player.transform.rotation;    // Cache start rotation
                    Vector3 playerRotEuler = rawPlayerRotation.eulerAngles;
                    playerRotEuler.x = 0f;
                    playerRotEuler.y = 0f;
                    playerStartRotation = Quaternion.Euler(playerRotEuler);

                    zAnglePlayer = (Mathf.Atan2(shipRotateDir.z, shipRotateDir.x) * Mathf.Rad2Deg) - 90;    // Angle of rotation around z-axis (pointing upwards)
                    desiredRotation = Quaternion.Euler(0, 0, zAnglePlayer);        // Store rotation as an Euler, then Quaternion
                    rotationEndTime = Time.time + rotationDetectInterval;   // Schedule next rotation check
                    lerpStartTime = Time.time;
                    currLerpTime = 0f;
                    //Debug.Break();
                }
                currLerpTime += Time.deltaTime;
                lerpRatio = currLerpTime / rotationDetectInterval;
                player.transform.rotation = Quaternion.Slerp(playerStartRotation, desiredRotation, lerpRatio);     // Works for PlayerShotSpawn rotations for Mobile, feels smoother
                                                                                                                   //Debug.Break();

                if (axisInput)
                {

                    // Rotate to face joystick direction (rotateTowards behaves oddly b/c every frame, we get new start/end rotations)
                    //player.transform.rotation = Quaternion.RotateTowards(player.transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);     // Works for PlayerShotSpawn rotations for Mobile, feels smoother
                    //player.transform.rotation = desiredRotation;        // Works for Mobile, not Mac (works if already collected firingPowerup)
                    //player.transform.rotation = Quaternion.LookRotation(desiredRotation.eulerAngles);

                    // Move in new direction we're facing
                    // Burst rush rotate only
                    if (GameManager.Singleton.isBurstRushing && GameManager.Singleton.turnInput)
                    {
                        // Also change rotation of overall player if it's active
                        //player.transform.rotation = desiredRotation;
                    }
                    else
                    {
                        player.GetComponent<Rigidbody>().AddForce(player.transform.up * player.speed);
                    }
                }
            }

            // Right joystick (rotate + fire)
            if (turnInput)
            {
                float xInput = CrossPlatformInputManager.GetAxis("Mouse X");
                float yInput = CrossPlatformInputManager.GetAxis("Mouse Y");

                Vector3 rigRotateDir = Vector3.zero;
                rigRotateDir.x = xInput;
                rigRotateDir.z = yInput;
                if (rigRotateDir != Vector3.zero)
                {
                    if (Time.time > rigRotationEndTime)
                    {
                        Quaternion rawFiringRigRotation = player.firingRig.transform.rotation;    // Cache start rotation
                        Vector3 firingRigRotEuler = rawFiringRigRotation.eulerAngles;
                        firingRigRotEuler.x = 0f;       // Remove non z-axis rot
                        firingRigRotEuler.y = 0f;
                        rigStartRotation = Quaternion.Euler(firingRigRotEuler);

                        zAngleFiringRig = (Mathf.Atan2(rigRotateDir.z, rigRotateDir.x) * Mathf.Rad2Deg) - 90;    // Angle of rotation around z-axis (pointing upwards)
                        rigDesiredRotation = Quaternion.Euler(0, 0, zAngleFiringRig);        // Store rotation as an Euler, then Quaternion
                        rigRotationEndTime = Time.time + rotationDetectInterval;             // Schedule next rotation check
                        rigLerpStartTime = Time.time;
                        rigCurrLerpTime = 0f;
                    }
                    rigCurrLerpTime += Time.deltaTime;
                    rigLerpRatio = rigCurrLerpTime / rotationDetectInterval;
                    player.firingRig.transform.rotation = Quaternion.Slerp(rigStartRotation, rigDesiredRotation, rigLerpRatio);

                    // Works for PlayerShotSpawn rotations for Mobile, feels smoother
                    //Debug.Break();
                    //Rotate to face joystick direction
                    //zAngle = (Mathf.Atan2(rigRotateDir.z, rigRotateDir.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
                    //desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
                    //player.firingRig.transform.rotation = desiredRotation;
                }
            }
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
                    Debug.Log("MAX VELOCITY REACHED: " + player.GetComponent<Rigidbody>().velocity.sqrMagnitude);       // Should be the square of maxForward
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
