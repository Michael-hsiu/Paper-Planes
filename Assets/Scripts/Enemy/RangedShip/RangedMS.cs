using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Direction {
	Forwards,
	Idle,
	Backwards,
	TooClose

}

public class RangedMS : MonoBehaviour, IMoveState {

	public Direction direction;
	public RangedShip rs;

	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState(Ship s) {
		if (direction == Direction.Forwards) {
			MoveToPlayer (s);
		} else if (direction == Direction.TooClose) {
			MoveBackwards (s);
		}
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	public void MoveToPlayer (Ship s) {

		if (rs == null) {
			rs = (RangedShip) s;
		}

		if (rs.target != null) {
			Vector3 dist = rs.target.transform.position - rs.transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			rs.transform.rotation = Quaternion.RotateTowards (rs.transform.rotation, desiredRotation, rs.rotationSpeed * Time.deltaTime);	// Rotate the enemy

			/** MOVEMENT UPDATE */
			if (!rs.isSpeedBuffed) {
				rs.transform.position = Vector2.MoveTowards (rs.transform.position, rs.target.transform.position, Time.deltaTime * rs.speed);
			} else {
				rs.transform.position = Vector2.MoveTowards (rs.transform.position, rs.target.transform.position, Time.deltaTime * rs.speed * rs.buffedSpeedFactor);

			}	
		} 
	}	

	public void MoveBackwards (Ship s) {

		if (rs == null) {
			rs = (RangedShip) s;
		}

		if (rs.target != null) {
			Vector3 dist = rs.target.transform.position - rs.transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			rs.transform.rotation = Quaternion.RotateTowards (rs.transform.rotation, desiredRotation, rs.rotationSpeed * Time.deltaTime);	// Rotate the enemy

			/** MOVEMENT UPDATE */
			if (!rs.isSpeedBuffed) {
				rs.transform.position = Vector2.MoveTowards (rs.transform.position, -rs.target.transform.position, Time.deltaTime * rs.speed);
			} else {
				rs.transform.position = Vector2.MoveTowards (rs.transform.position, -rs.target.transform.position, Time.deltaTime * rs.speed * rs.buffedSpeedFactor);

			}	
		} 
	}	

}
