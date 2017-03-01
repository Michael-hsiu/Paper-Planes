using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PawnShip : Ship {

	/** INSTANCE VARS */

	// Attributes unique to PawnShip
	protected float _speed = 1.0f;	
	protected float _rotationSpeed = 90.0f;
	protected int _health = 20;
	protected int _enemyPoints = 25;


	/** HELPER METHODS */
	protected override void Initialize() {

		// Do normal initalization
		base.Initialize ();

		// Adjust attributes
		this.Speed = _speed;
		this.RotationSpeed = _rotationSpeed;
		this.Health = _health;
		this.EnemyPoints = _enemyPoints;

	}

	public override void Move () {
		
		if (target != null) {
			Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) + 180;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy

			/** MOVEMENT UPDATE */
			transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed);
				
		}

	}	

	/** UNITY CALLBACKS */

	protected override void Start () {

		// Call our overridden initalization method
		Initialize ();

		// Check that we're calling the right Start() method
		Debug.Log("PAWN SHIP START");

	}

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			Destroy (other.gameObject);		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {
				
				Instantiate (explosion, transform.position, transform.rotation);
				Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("PAWN KILLED! Obtained: " + enemyPoints + "points!");
			}
		}
	}
}
