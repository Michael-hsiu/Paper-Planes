using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileBossMS : MonoBehaviour, IMoveState {


	public Direction direction;

	// Wander logic
	public float DIST_TO_CIRCLE = 5.0f;	// Distance from circle to player
	public float CIRCLE_RADIUS = 1.0f;		// Radius of circle
	public float ANGLE_CHANGE = 10.0f;		// How many angle changes every frame
	public bool rotSetOnce = false;
	public Quaternion wanderAngle;		// Stores the rotation of each displacement vector

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
		Wander (s);
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	// Based on logic from: https://gamedevelopment.tutsplus.com/tutorials/understanding-steering-behaviors-wander--gamedev-1624
	private void Wander(Ship s) {
		if (mb == null) {
			mb = (MissileBoss) s;
		}
		Vector3 vel = mb.GetComponent<Rigidbody> ().velocity;				// Cache original velocity vector
		Vector3 circleCenter = new Vector3 (vel.x, vel.y, 0).normalized;	// Calc center of circle (normalized)
		Vector3 displacement = circleCenter * CIRCLE_RADIUS;				// Calc displacement
		circleCenter = circleCenter * DIST_TO_CIRCLE;						// Scale dist from circle center

		if (!rotSetOnce) {
			wanderAngle = Quaternion.LookRotation (vel, Vector3.forward);	// Initial wander angle is just facing in same direction as enemy is heading		
			rotSetOnce = true;
		}
		SetAngle (displacement, wanderAngle);		// Set the angle of displacement every frame

		float angleChange = Random.Range (0, 5) * ANGLE_CHANGE - ANGLE_CHANGE * 0.5f;		// Micro-adjustments of angle per frame
		wanderAngle = wanderAngle * Quaternion.Euler (0, 0, angleChange);		// Add a micro-rotation to last rotation

		Vector3 wanderForce = circleCenter + displacement;			// Create the wander force vector
		mb.GetComponent<Rigidbody>().velocity = wanderForce;			// Now set the wander force
		Debug.Log ("VEL CHANGEd");

	}

	private void SetAngle(Vector3 v, Quaternion wanderAngle) {
		float length = v.magnitude;
		float angleX = wanderAngle.eulerAngles.x;
		float angleY = wanderAngle.eulerAngles.y;
		float cosX = Mathf.Cos (angleX) * Mathf.Rad2Deg;
		float sinY = Mathf.Sin (angleY) * Mathf.Rad2Deg;

		v.x = cosX * length;
		v.y = sinY * length;	
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

