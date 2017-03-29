using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangedShip : FiringShip {

	public float offsetY = 3.0f;

	#region Unity Life Cycle
	protected override void Start () {

		// Call our overridden initalization method
		Initialize ();

		// Check that we're calling the right Start() method
		//Debug.Log("RANGED SHIP START");

	}

	protected override void Update() {

		// Use default movement
		base.Update ();

		// Basic AI - firing logic
		if (Time.time > nextFire) {
			Fire ();
		}
	}
	#endregion

	#region Game Logic
	protected override void Initialize() {
		// Do normal initalization
		base.Initialize ();
	}

	public override void Move () {
		
		// Move enemy ship up and down
		this.transform.position = Vector2.Lerp (initialPos - new Vector2(0, offsetY), initialPos + new Vector2(0, offsetY), (Mathf.Sin(speed * Time.time) + 1.0f) / 2.0f);	// Natural up and down movement


		// Enemy ship turns to face player
		Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
		dist.Normalize ();		// Get unit vector

		float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

		Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
	}		

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {

				Instantiate (explosion, transform.position, transform.rotation);
				Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.UpdateScore (enemyPoints);	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}
	#endregion
}
