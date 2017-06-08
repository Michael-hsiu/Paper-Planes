using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileBossMS : MonoBehaviour, IMoveState {


	public Direction direction = Direction.PLAYER_UNDETECTED;

	// Wander logic
	public float DIST_TO_CIRCLE = 5.0f;	    // Distance from circle to player
	public float CIRCLE_RADIUS = 1.0f;		// Radius of circle
	public float ANGLE_CHANGE = 10.0f;		// How many angle changes every frame
	public float displInterval = 2.0f;		// How often direction gets changed
	public float angleChange;
	public bool rotSetOnce = false;
	public bool startedWander = false;
	public bool shouldWander = true;
	public bool behaviorChangedOnce = false;
	//public Quaternion wanderAngle;		// Stores the rotation of each displacement vector
    public float wanderAngle;
	public Vector3 vel;
	public Vector3 circleCenter;
	public Vector3 displacement;
	public Vector3 oldVel;				// For when we change behaviors

    public Quaternion desiredRotation;
    public bool shouldRotate = true;
    public float maxHeadingChange = 10.0f;
    public bool reversingDirection = false;

	public Direction Direction {
		get
		{
			return direction;
		}
		set
		{
			direction = value;
		}
	}
	public MissileBoss missileBoss;

    void Start() {
        missileBoss = GetComponent<MissileBoss>();
    }

	public void EnterState () {

	}

	public void ExitState() {

	}
		
	public void UpdateState() {
		// If we're attacking right now, we should be idle
        /*if (mb.attacking) {
			direction = Direction.Idle;
		} */

		if (direction == Direction.IDLE) {
			// Do nothing if we're supposed to be idle; MissileBoss.cs will still take care of attacking


		} else if (direction == Direction.PLAYER_UNDETECTED) {


			// For after the first time we switch behavior states
            /*shouldWander = true;

			if (!startedWander) {
				StartCoroutine(Wander (s));
				startedWander = true;
			}*/

		} else if (direction == Direction.PLAYER_DETECTED) {

			// Store the velocity from detection phase
			if (!behaviorChangedOnce) {
				oldVel = missileBoss.GetComponent<Rigidbody> ().velocity;
			}
			behaviorChangedOnce = true;

            /*shouldWander = false;
			mb.GetComponent<Rigidbody> ().velocity = Vector3.zero;*/

            /*float sqDist = Utils.SquaredEuclideanDistance (mb.gameObject, mb.target);
			//Debug.Log ("SQDIST: " + sqDist);
			// Update behavior based on dist. from target if currently pursuing target
			if (sqDist > mb.sqMoveDist) {
                direction = Direction.PlayerDetected;
			} else {
				direction = Direction.PlayerDetected;
			}*/

			if (missileBoss.target != null) {
				Vector3 dist = missileBoss.target.transform.position - missileBoss.transform.position;	// Find vector difference between target and this
				dist.Normalize ();		// Get unit vector

				float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

				Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

				missileBoss.transform.rotation = Quaternion.RotateTowards (missileBoss.transform.rotation, desiredRotation, missileBoss.rotationSpeed * Time.deltaTime);	// Rotate the enemy

				/** MOVEMENT UPDATE */
				if (!missileBoss.isSpeedBuffed) {
					missileBoss.transform.position = Vector2.MoveTowards (missileBoss.transform.position, missileBoss.target.transform.position, Time.deltaTime * missileBoss.speed);
				} else {
					missileBoss.transform.position = Vector2.MoveTowards (missileBoss.transform.position, missileBoss.target.transform.position, Time.deltaTime * missileBoss.speed * missileBoss.buffedSpeedFactor);
				}
			}
		}
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	IEnumerator Idle(Ship s) {
		if (missileBoss == null) {
			missileBoss = (MissileBoss) s;
		}
		yield return new WaitForSeconds (4.0f);		// Wait while we execute behavior
		direction = Direction.PLAYER_DETECTED;		// Resume pursuing player

	}

	// Based on logic from: https://gamedevelopment.tutsplus.com/tutorials/understanding-steering-behaviors-wander--gamedev-1624
	/*IEnumerator Wander(Ship s) {
		if (mb == null) {
			mb = (MissileBoss) s;
		}
		while (true) {

            while (shouldWander) {
                if (!reversingDirection)
                {
                    // Calculate circle position (origin=boss_center)
                    circleCenter = mb.GetComponent<Rigidbody>().velocity.normalized * DIST_TO_CIRCLE;

                    // Create displacement vector
                    displacement = new Vector3(0, 1, 0) * CIRCLE_RADIUS;

                    // Set angle of displacement vector
                    float radianAngleRepresentation = wanderAngle * Mathf.Deg2Rad;
                    displacement.x = displacement.y / Mathf.Tan(radianAngleRepresentation);
                    displacement.y = displacement.x * Mathf.Tan(radianAngleRepresentation);

                    // Slightly change angle of displacement vector
                    float ceil = wanderAngle + maxHeadingChange;
                    float floor = wanderAngle - maxHeadingChange;
                    wanderAngle = Random.Range(ceil, floor);

                    //wanderAngle += (float) ((Random.value * ANGLE_CHANGE) - (ANGLE_CHANGE * .5));

                    // Create wander force vector and act on boss
                    Vector3 wanderForce = circleCenter + displacement;
                    mb.GetComponent<Rigidbody>().velocity = wanderForce.normalized;

                    // Face direction we're going
                    float zAngle = (Mathf.Atan2(wanderForce.y,wanderForce.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
                    desiredRotation = Quaternion.Euler (0, 0, zAngle);       // Store rotation as an Euler, then Quaternion

                    yield return new WaitForSeconds(displInterval);


                    /*while (shouldWander) {
                        if (mb.GetComponent<Rigidbody> ().velocity == Vector3.zero) {
                            //mb.GetComponent<Rigidbody> ().velocity = Vector3.zero;
                            mb.GetComponent<Rigidbody> ().velocity = mb.transform.up;
                            //mb.GetComponent<Rigidbody> ().velocity = oldVel;
                            //usedOldVel = true;
                            //Debug.Log ("ADDED FORCE!");
                            //Debug.Break ();
                        }

                        // Cache original velocity vector
                        vel = mb.GetComponent<Rigidbody> ().velocity;               
                        circleCenter = new Vector3 (vel.x, vel.y, vel.z).normalized;    // Calc center of circle (normalized)
                        displacement = circleCenter;                                // Calc displacement
                        circleCenter = circleCenter * DIST_TO_CIRCLE;                       // Scale dist from circle center

                        if (!rotSetOnce) {
                            //wanderAngle = Quaternion.LookRotation (vel, Vector3.forward); // Initial wander angle is just facing in same direction as enemy is heading        
                            wanderAngle = Quaternion.Euler (0, 0, 0);
                            angleChange = 0.0f;
                            rotSetOnce = true;
                        }
                        displacement = SetAngle (displacement, wanderAngle).normalized * CIRCLE_RADIUS;     // Set the angle of displacement every frame

                        float oldAngle = angleChange;
                        angleChange += (Random.Range (0.0f, 1.0f) * ANGLE_CHANGE - ANGLE_CHANGE * 0.5f);        // Micro-adjustments of angle per frame
                        float angleDiff = Utils.Mod (angleChange - oldAngle, 360.0f);
                        
                        wanderAngle = wanderAngle * Quaternion.Euler (0, 0, angleDiff);     // Add a micro-rotation to last rotation

                        Vector3 wanderForce = (circleCenter + displacement).normalized * 3;         // Create the wander force vector
                        mb.GetComponent<Rigidbody>().velocity = wanderForce;            // Now set the wander force

                        yield return new WaitForSeconds (displInterval);
                    }
                    //usedOldVel = true;
                    yield return null;*/
                    /*}
                    yield return null;
                }

            yield return null;
		}
    }*/


    public void ReverseDirection() {
        //mb.GetComponent<Rigidbody>().velocity = -mb.GetComponent<Rigidbody>().velocity;
        missileBoss.GetComponent<Rigidbody>().velocity = new Vector2(0, -1);
        wanderAngle = -180f;
        desiredRotation = Quaternion.Euler (0, 0, wanderAngle);       // Store rotation as an Euler, then Quaternion
        missileBoss.transform.rotation = desiredRotation;
        StartCoroutine(ReversingDirection());
    }

    IEnumerator ReversingDirection() {
        reversingDirection = true;
        yield return new WaitForSeconds(5.0f);
        reversingDirection = false;
    }

    void Update() {
        if (shouldRotate) {
            missileBoss.transform.rotation = Quaternion.RotateTowards (missileBoss.transform.rotation, desiredRotation, missileBoss.rotationSpeed * Time.deltaTime); // Rotate the enemy
        }

    }


    public void OnDrawGizmosSelected() {

        /* VECTOR VISUALIZATION */
        // Draw wander circle
        Gizmos.color = Color.white;
        Gizmos.DrawWireSphere(missileBoss.transform.position + circleCenter, CIRCLE_RADIUS);

        // Draw displacement
        Gizmos.color = Color.blue;
        Gizmos.DrawRay (missileBoss.transform.position + circleCenter, displacement);

        // Draw circle center
        Gizmos.color = Color.green;
        Gizmos.DrawRay (missileBoss.transform.position, circleCenter);

        // Draw added force
        Gizmos.color = Color.red;
        Gizmos.DrawRay (missileBoss.transform.position, circleCenter + displacement);

        // Draw velocity
        Gizmos.color = Color.magenta;
        Gizmos.DrawRay(missileBoss.transform.position, missileBoss.GetComponent<Rigidbody>().velocity);

    }

    public void OnDrawGizmos() {
        /* ATTACK VISUALIZATION */
        if (missileBoss.usingSpinAtk) {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere (missileBoss.transform.position, missileBoss.spinAtkRadius);
        }
    }

	private Vector3 SetAngle(Vector3 v, Quaternion wanderAngle) {
		float length = v.magnitude;
		float angleX = wanderAngle.eulerAngles.z;
		float angleY = wanderAngle.eulerAngles.y;
		//Debug.Log ("ANGLE X: " + angleX);
		//Debug.Log ("ANGLE Y: " + angleY);

		float cosX = Mathf.Cos (angleX) * Mathf.Rad2Deg;
		float sinY = Mathf.Sin (angleX) * Mathf.Rad2Deg;

		v.x = cosX * length;
		v.y = sinY * length;	

		return v;
	}
 
	public void MoveToPlayer (Ship s) {
		if (missileBoss == null) {
			missileBoss = (MissileBoss) s;
		}

	}	

	public void MoveBackwards (Ship s) {
		if (missileBoss == null) {
			missileBoss = (MissileBoss) s;
		}
	}	

}

