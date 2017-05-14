using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileBossMS : MonoBehaviour, IMoveState {


	public Direction direction;

	// Wander logic
	public float DIST_TO_CIRCLE = 5.0f;	// Distance from circle to player
	public float CIRCLE_RADIUS = 1.0f;		// Radius of circle
	public float ANGLE_CHANGE = 10.0f;		// How many angle changes every frame
	public float displInterval = 2.0f;		// How often direction gets changed
	public float angleChange;
	public bool rotSetOnce = false;
	public bool startedWander = false;
	public Quaternion wanderAngle;		// Stores the rotation of each displacement vector
	public Vector3 vel;
	public Vector3 circleCenter;
	public Vector3 displacement;

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
	public MissileBoss mb;

	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState(Ship s) {
		if (!startedWander) {
			StartCoroutine(Wander (s));
			startedWander = true;
		}
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	// Based on logic from: https://gamedevelopment.tutsplus.com/tutorials/understanding-steering-behaviors-wander--gamedev-1624
	IEnumerator Wander(Ship s) {
		if (mb == null) {
			mb = (MissileBoss) s;
		}
		while (true) {
			vel = mb.GetComponent<Rigidbody> ().velocity;				// Cache original velocity vector
			circleCenter = new Vector3 (vel.x, vel.y, vel.z).normalized;	// Calc center of circle (normalized)
			displacement = circleCenter;								// Calc displacement
			circleCenter = circleCenter * DIST_TO_CIRCLE;						// Scale dist from circle center

			if (!rotSetOnce) {
				//wanderAngle = Quaternion.LookRotation (vel, Vector3.forward);	// Initial wander angle is just facing in same direction as enemy is heading		
				wanderAngle = Quaternion.Euler (0, 0, 0);
				angleChange = 0.0f;
				rotSetOnce = true;
			}
			displacement = SetAngle (displacement, wanderAngle).normalized * CIRCLE_RADIUS;		// Set the angle of displacement every frame

			float oldAngle = angleChange;
			//angleChange += Random.Range (-360.0f, 360.0f);
			//angleChange += 90.0f;
			angleChange += (Random.Range (0.0f, 1.0f) * ANGLE_CHANGE - ANGLE_CHANGE * 0.5f);		// Micro-adjustments of angle per frame
			//angleChange = angleChange % 360.0f;
			Debug.Log ("NEW ANGLE: " + angleChange);
			float angleDiff = Utils.Mod (angleChange - oldAngle, 360.0f);

			Debug.Log ("ANGLE DIFF: " + angleDiff);
			wanderAngle = wanderAngle * Quaternion.Euler (0, 0, angleDiff);		// Add a micro-rotation to last rotation
			//mb.transform.rotation = wanderAngle;

			Vector3 wanderForce = (circleCenter + displacement).normalized * 3;			// Create the wander force vector
			mb.GetComponent<Rigidbody>().velocity = wanderForce;			// Now set the wander force
			/*float mag = mb.transform.position.magnitude;

			Vector3 dist = (wanderForce.normalized * mag) - mb.transform.position;		// Find vector difference between target and this
			dist.Normalize ();													// Get unit vector
			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg);	// Angle of rotation around z-axis (pointing upwards)
			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion
			mb.transform.rotation = desiredRotation;*/

			//wanderForce.x = 0;
			//wanderForce.y = 0;
			//mb.transform.rotation = Quaternion.LookRotation (wanderForce, Vector3.forward);

			//Debug.Break ();
			//yield return null;
			yield return new WaitForSeconds (displInterval);
		}
	}

	private Vector3 SetAngle(Vector3 v, Quaternion wanderAngle) {
		float length = v.magnitude;
		float angleX = wanderAngle.eulerAngles.z;
		float angleY = wanderAngle.eulerAngles.y;
		Debug.Log ("ANGLE X: " + angleX);
		Debug.Log ("ANGLE Y: " + angleY);

		float cosX = Mathf.Cos (angleX) * Mathf.Rad2Deg;
		float sinY = Mathf.Sin (angleX) * Mathf.Rad2Deg;

		v.x = cosX * length;
		v.y = sinY * length;	

		return v;
	}

	public void OnDrawGizmos() {
		// Draw wander circle
		Gizmos.color = Color.white;
		if (circleCenter != null) {
			Gizmos.DrawWireSphere(mb.transform.position + circleCenter, CIRCLE_RADIUS);
		}

		// Draw displacement
		Gizmos.color = Color.blue;
		if (displacement != null) {
			Gizmos.DrawRay (mb.transform.position + circleCenter, displacement);
		}
		// Draw circle center
		Gizmos.color = Color.green;
		if (circleCenter != null) {
			Gizmos.DrawRay (mb.transform.position, circleCenter);
		}

		// Draw added force
		Gizmos.color = Color.red;
		if (circleCenter != null) {
			Gizmos.DrawRay (mb.transform.position, circleCenter + displacement);
		}
	}




	public void MoveToPlayer (Ship s) {
		if (mb == null) {
			mb = (MissileBoss) s;
		}

	}	

	public void MoveBackwards (Ship s) {
		if (mb == null) {
			mb = (MissileBoss) s;
		}
	}	

}

