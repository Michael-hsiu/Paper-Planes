using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SniperBossMS : MonoBehaviour, IMoveState {

	// Here, playerUndetected == player is far enough away. Sniper Boss always knows where player is.
	// playerDetected == player is too close. We either back up or use our small explosives.

	public Direction direction = Direction.PlayerUndetected;
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
	public SniperBoss sb;


	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState(Ship s) {
		if (sb == null) {
			sb = (SniperBoss) s;
		}
		if (direction == Direction.PlayerDetected) {
			MoveToPlayer (s);	// Change to be AWAY from player if too close
		} else if (direction == Direction.PlayerUndetected) {
			
		}

	}

	public void MoveToPlayer (Ship s) {
		if (sb == null) {
			sb = (SniperBoss) s;
		}
		if (sb.target != null) {
			Vector3 dist = sb.target.transform.position - sb.transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			sb.transform.rotation = Quaternion.RotateTowards (sb.transform.rotation, desiredRotation, sb.rotationSpeed * Time.deltaTime);	// Rotate the enemy
			
			/** MOVEMENT UPDATE */
			if (!sb.isSpeedBuffed) {
				sb.transform.position = Vector2.MoveTowards (sb.transform.position, sb.target.transform.position, Time.deltaTime * sb.speed);
			} else {
				sb.transform.position = Vector2.MoveTowards (sb.transform.position, sb.target.transform.position, Time.deltaTime * sb.speed * sb.buffedSpeedFactor);
			}
		}
	}	

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}
		
	public void OnDrawGizmosSelected() {

	}

	public void OnDrawGizmos() {
		
	}

	public void MoveBackwards (Ship s) {
		if (sb == null) {
			sb = (SniperBoss) s;
		}
	}	

}

