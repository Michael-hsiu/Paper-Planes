using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangedEnemyShip : FiringShip {


	/** INSTANCE VARS */

	// Attributes unique to RangedEnemyShip
	protected float _speed = 2.0f;	
	protected float _rotationSpeed = 100.0f;
	protected int _health = 100;
	protected int _shotDamage = 20;
	protected int _enemyPoints = 100;

	private Vector2 offset = new Vector2(0, 3);


	/** HELPER METHODS */
	protected override void Initialize() {
		
		// Do normal initalization
		base.Initialize ();

		// Adjust attributes
		this.Speed = _speed;
		this.RotationSpeed = _rotationSpeed;
		this.Health = _health;
		this.ShotDamage = _shotDamage;
		this.EnemyPoints = _enemyPoints;

		// Check that we adjusted attributes correctly
		Debug.Log (this.Speed);
		Debug.Log (this.RotationSpeed);
		Debug.Log (this.Health);
	}

	public override void Move () {
		
		// Move enemy ship up and down
		this.transform.position = Vector2.Lerp (initialPos - offset, initialPos + offset, (Mathf.Sin(speed * Time.time) + 1.0f) / 2.0f);	// Natural up and down movement


		// Enemy ship turns to face player
		Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
		dist.Normalize ();		// Get unit vector

		float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

		Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
	}		


	/** UNITY CALLBACKS */
	protected override void Start () {
		
		// Call our overridden initalization method
		Initialize ();

		// Check that we're calling the right Start() method
		Debug.Log("RANGED SHIP START");
		
	}

	protected override void Update() {

		// Use default movement
		base.Update ();

		// Basic AI - firing logic
		if (Time.time > nextFire) {

			Debug.Log ("ENEMY FIRING");
			Fire ();
		}
	}


	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			Destroy (other.gameObject);		// Destroy the shot that hit us

			health -= shotDamage;			// We lost health

			if (health <= 0) {
				
				Instantiate (explosion, transform.position, transform.rotation);
				Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}
}
