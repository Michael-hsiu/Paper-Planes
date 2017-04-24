using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

public class PawnShip : Ship {



	#region Unity Life Cycle
	protected override void Start () {
		// Call our overridden initalization method
		Initialize ();
		//Debug.Log("PAWN SHIP START");

	}
	#endregion

	#region Game Logic

	public override void Move () {
		
		if (target != null) {
			Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) + 180;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy

			/** MOVEMENT UPDATE */
			if (!isSpeedBuffed) {
				transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed);
			} else {
				transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed * buffedSpeedFactor);

			}
				
		}

	}	
		
	void OnTriggerEnter(Collider other) {

		// Handle collisions with player shots
		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {
				
				Instantiate (explosion, transform.position, transform.rotation);
				DestroyForReuse ();

				//Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.UpdateScore (enemyPoints);
				//GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("PAWN KILLED! Obtained: " + enemyPoints + "points!");
			}

		// Handle collisions with player
		} else if (other.gameObject.CompareTag(Constants.PlayerTag)) {

			Debug.Log ("INNER REACHED!");

			Instantiate (explosion, transform.position, transform.rotation);
			DestroyForReuse ();
			//Destroy (transform.gameObject);

		}
	}

	#endregion
}
