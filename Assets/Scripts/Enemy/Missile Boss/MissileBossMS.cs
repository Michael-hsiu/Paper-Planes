using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileBossMS : MonoBehaviour, IMoveState {


	public Direction direction;

	// Wander logic
	public float DIST_TO_CIRCLE = 5.0f;	// Distance from circle to player
	public float CIRCLE_RADIUS = 1.0f;		// Radius of circle
	public Quaternion wanderAngle = null;		// Stores the rotation of each displacement vector

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
		MoveToPlayer (s);
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	private void Wander(Ship s) {
		if (mb == null) {
			mb = (MissileBoss) s;
		}
		Vector3 vel = mb.GetComponent<Rigidbody> ().velocity;
		Vector3 circleCenter = new Vector3 (vel.x, vel.y, 0).normalized;	// Calc center of circle
		Vector3 displacement = circleCenter * CIRCLE_RADIUS;				// Calc displacement
		circleCenter = circleCenter * DIST_TO_CIRCLE;						// Scale dist from circle center

		if (wanderAngle == null) {
			wanderAngle = Quaternion.LookRotation (vel, Vector3.forward);	// Initial wander angle is just facing in same direction as enemy is heading		
		}
		SetAngle (displacement, wanderAngle);


	}

	private void SetAngle(Vector3 v, Quaternion wanderAngle) {
		float length = v.magnitude;
		v.x = Mathf.Cos (wanderAngle) * length;
		v.y = Mathf.Sin (wanderAngle) * length;	
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

