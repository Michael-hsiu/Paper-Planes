using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangedMS : MonoBehaviour, IMoveState {

	public Direction direction;
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
	public RangedShip rangedShip;

    void Start() {
        rangedShip = GetComponent<RangedShip>();
    }

	public void EnterState () {

	}

	public void ExitState() {

	}

	public void UpdateState() {

		bool playerOnDashCooldown = GameManager.Singleton.onDashCooldown;

		// If player is dashing, use math to check if player is too far from us.
		if (playerOnDashCooldown) {
			if (Utils.SquaredEuclideanDistance(rangedShip.gameObject, rangedShip.target.gameObject) > rangedShip.sqMoveDist) {
				direction = Direction.Forwards;
			} else {
				direction = Direction.TooClose;
			}
		}

		// Apply method based on player direction
		if (direction == Direction.Forwards) {
			MoveToPlayer ();
		} else if (direction == Direction.TooClose) {
			MoveBackwards ();
		}
	}
       
	public void MoveToPlayer () {

		if (rangedShip.target != null) {
			Vector3 dist = rangedShip.target.transform.position - rangedShip.transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			rangedShip.transform.rotation = Quaternion.RotateTowards (rangedShip.transform.rotation, desiredRotation, rangedShip.rotationSpeed * Time.deltaTime);	// Rotate the enemy

			/** MOVEMENT UPDATE */
			if (!rangedShip.isSpeedBuffed) {
				rangedShip.transform.position = Vector2.MoveTowards (rangedShip.transform.position, rangedShip.target.transform.position, Time.deltaTime * rangedShip.speed);
			} else {
				rangedShip.transform.position = Vector2.MoveTowards (rangedShip.transform.position, rangedShip.target.transform.position, Time.deltaTime * rangedShip.speed * rangedShip.buffedSpeedFactor);

			}	
		}
	}	

	public void MoveBackwards () {
      
		if (rangedShip.target != null) {
			Vector3 dist = rangedShip.target.transform.position - rangedShip.transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			rangedShip.transform.rotation = Quaternion.RotateTowards (rangedShip.transform.rotation, desiredRotation, rangedShip.rotationSpeed * Time.deltaTime);	// Rotate the enemy

			/** MOVEMENT UPDATE */
			if (!rangedShip.isSpeedBuffed) {
				rangedShip.transform.position = Vector2.MoveTowards (rangedShip.transform.position, -rangedShip.target.transform.position, Time.deltaTime * rangedShip.speed);
			} else {
				rangedShip.transform.position = Vector2.MoveTowards (rangedShip.transform.position, -rangedShip.target.transform.position, Time.deltaTime * rangedShip.speed * rangedShip.buffedSpeedFactor);

			}	
		} 
	}	

}
