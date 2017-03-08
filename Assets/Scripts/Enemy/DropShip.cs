using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropShip : Ship {


	/** INSTANCE VARS */

	[Header("References")]
	public GameObject shipToSpawn;

	public float timeUntilNextSpawnMode = 3.0f;
	public float spawnModeDuration = 5.0f;
	public float timeBetweenSpawns = 0.3f;
	public bool isSpawning = false;

	// Attributes unique to DropShip
	protected float _speed = 2.0f;	
	protected float _rotationSpeed = 100.0f;
	protected int _health = 100;
	protected int _enemyPoints = 100;

	private Vector2 offset = new Vector2(0, 3);
	[SerializeField]
	private float nextSpawn;


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

		if (!isSpawning) {
			// Move enemy ship up and down
			this.transform.position = Vector2.Lerp (initialPos - offset, initialPos + offset, (Mathf.Sin(speed * Time.time) + 1.0f) / 2.0f);	// Natural up and down movement
		}
			
		// Enemy ship turns to face player
		//Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
		//dist.Normalize ();		// Get unit vector

		//float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

		//Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		//transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
	}

	/** GAME LOGIC */

	public virtual void SpawnShip() {

		nextSpawn = Time.time + timeUntilNextSpawnMode;	// Cooldown time between spawns (constant for now)

		// Check for all spawners in children
		foreach(Transform s in transform) {

			ShotSpawn shotSpawn = s.GetComponent<ShotSpawn> ();	// Get ShotSpawn in children

			if (shotSpawn != null) {
				shotSpawn.CreateShot ();	// Fire the shot!
			}
		}
	}


	/** UNITY CALLBACKS */
	protected override void Start () {

		// Call our overridden initalization method
		Initialize ();

		// Check that we're calling the right Start() method
		Debug.Log("DROPSHIP SHIP START");

	}

	protected override void Update() {

		// Use default movement
		base.Update ();

		// Check for spawning
		if (Time.time > nextSpawn && !isSpawning) {
			isSpawning = true;
			StopAllCoroutines ();
			StartCoroutine (StartSpawning ());
		}

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

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}

	/** CO-ROUTINES */
	IEnumerator StartSpawning() {
		float startTime = Time.time;	// Get time this co-routine begins
		GameObject spawnedEnemy;

		while (Time.time > startTime + spawnModeDuration) {
			SpawnShip();	// Instantiate an enemy
			yield return new WaitForSeconds(timeBetweenSpawns);		// Wait a certain time between spawning
		}

		nextSpawn += timeUntilNextSpawnMode;		// Won't start spawning until certain time has passed
		isSpawning = false;			// Resume normal behavior
	}
}
