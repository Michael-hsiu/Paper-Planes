using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[SelectionBase]
public class MediShip : Ship {

	// Instance vars
	public float buffRange = 5.0f;			// Range that buff works
	//protected float _speed = 2.0f;	
	//protected float _rotationSpeed = 100.0f;
	//protected int _health = 100;
	//protected int _enemyPoints = 100;

	private Vector2 offset = new Vector2(0, 3);


	/** HELPER METHODS */
	protected override void Initialize() {

		// Do normal initalization
		base.Initialize ();

		// Adjust attributes
		//this.Speed = _speed;
		//this.RotationSpeed = _rotationSpeed;
		//this.Health = _health;
		//this.EnemyPoints = _enemyPoints;

	}

	public override void Move () {

		// Move enemy ship up and down
		//this.transform.position = Vector2.Lerp (initialPos - offset, initialPos + offset, (Mathf.Sin(speed * Time.time) + 1.0f) / 2.0f);	// Natural up and down movement

		// Enemy ship turns to face player
		//Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
		//dist.Normalize ();		// Get unit vector

		//float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

		//Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		//transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
	}

	/** GAME LOGIC */

	public void BuffAllies() {

		// Get all colliders in area
		Collider[] hitColliders = Physics.OverlapSphere(transform.position, buffRange);
		List<GameObject> targets = (from c in hitColliders select c.gameObject).ToList();

		// Buff all gameobjects 
		foreach (GameObject go in targets) {

			// Retrieve the script that implements IDamageable
			Ship s = go.GetComponent (typeof(Ship)) as Ship;
			if (s != null) {
				s.isSpeedBuffed = true;		// Speed buff
				if (s is FiringShip) {
					FiringShip fs = (FiringShip) s;
					fs.isFiringBuffed = true;
				}
			}
		}
	}

	/** UNITY CALLBACKS */
	protected override void Start () {

		// Call our overridden initalization method
		Initialize ();

		// Check that we're calling the right Start() method
		Debug.Log("MEDISHIP SHIP START");

	}

	protected override void Update() {

		// Use default movement
		base.Update ();

		BuffAllies ();		// Continue buffing

	}

	public void OnDrawGizmos() {
		Gizmos.color = Color.white;
		Gizmos.DrawWireSphere(transform.position, buffRange);
	}

	/*
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			Destroy (other.gameObject);		// Destroy the shot 
			that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {

				Kill ();
				//Instantiate (explosion, transform.position, transform.rotation);
				//Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}

	// Co-routines
	IEnumerator StartSpawning() {
		float startTime = Time.time;	// Get time this co-routine begins

		// While we're still in our window of time where we spawn ships...
		while (Time.time < startTime + buffDuration) {
			//BuffShips();	// Buff surrounding enemies
			yield return new WaitForSeconds(buffDuration);		// Wait a certain time between spawning
		}

		nextBuff = Time.time + timeUntilNextBuffMode;		// Won't start spawning until certain time has passed
		Debug.Log("nextSpawn: " + nextBuff);
		isBuffing = false;			// Resume normal behavior
	}
	*/
}
