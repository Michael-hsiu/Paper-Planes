using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PawnMS : MonoBehaviour, IMoveState {

	public Direction direction;
	public PawnShip ps;

	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState(Ship s) {
		if (ps == null) {
			ps = (PawnShip) s;
		}
		MoveToPlayer (s);
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	public void MoveToPlayer (Ship s) {
		if (ps == null) {
			ps = (PawnShip) s;
		}
		if (ps.target != null) {
			Vector3 dist = ps.target.transform.position - ps.transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) + 180;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			ps.transform.rotation = Quaternion.RotateTowards (ps.transform.rotation, desiredRotation, ps.rotationSpeed * Time.deltaTime);	// Rotate the enemy

			/** MOVEMENT UPDATE */
			if (!ps.isSpeedBuffed) {
				ps.transform.position = Vector2.MoveTowards (ps.transform.position, ps.target.transform.position, Time.deltaTime * ps.speed);
			} else {
				ps.transform.position = Vector2.MoveTowards (ps.transform.position, ps.target.transform.position, Time.deltaTime * ps.speed * ps.buffedSpeedFactor);
			}
		}
	}	
}

