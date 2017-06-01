using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropShip : Ship {


	#region Variables
	public GameObject shipToSpawn;

	public float timeUntilNextSpawnMode = 10.0f;		// Time between when a ship leaves spawn mode and can re-enter spawn mode
	public float spawnModeDuration = 5.0f;			// How long spawn mode will last
	public float timeBetweenSpawns = 1.0f;			// Time between when 1 unit spawns and next unit spawns
	public int deathSpawnCount = 5;					// Number of mobs spawned on death
	public bool isSpawning = false;					// Tracks if ship is in spawn mode

	private Vector2 offset = new Vector2(0, 3);
	public float nextSpawn;
	#endregion

	#region Unity Life Cycle
	/** UNITY CALLBACKS */
	protected override void Start () {

		// Call our overridden initalization method
		//Initialize ();
		base.Start ();
		enemyType = EnemyType.DropShip;
		nextSpawn = 5.0f;		// Only enter spawn mode at least 5 sec after we are created

		// Check that we're calling the right Start() method
		Debug.Log("DROPSHIP SHIP START");

	}

	protected override void Update() {

		// Use default movement
		base.Update ();

		//Debug.Log ("isSpawning: " + isSpawning);
		//Debug.Log("TIME.TIME: " + Time.time + ", " + "NEXTSPAWN: " + nextSpawn);
		// Check for spawning
		if (Time.time > nextSpawn && !isSpawning) {
			isSpawning = true;
			StopAllCoroutines ();
			StartCoroutine (StartSpawning ());
		}

	}
	#endregion

	#region Game Logic
/*	protected override void Initialize() {
		base.Initialize ();		// Normal initialize

	}*/

	public override void Kill () {
		Debug.Log ("KILL CALLED");

		for (int i = 0; i < deathSpawnCount; i++) {
			SpawnShip ();
			Debug.Log ("DEATH SPAWN");
		}

		base.Kill ();


	}

	public override void Move () {

		if (!isSpawning) {
			// Move enemy ship up and down
			this.transform.position = Vector2.Lerp (initialPos - offset, initialPos + offset, (Mathf.Sin(speed * Time.time) + 1.0f) / 2.0f);	// Natural up and down movement
		}			
	}

	/** GAME LOGIC */

	public virtual void SpawnShip() {

		//Instantiate (shipToSpawn, transform.position, Quaternion.identity);	// Instantiate an enemy prefab

		// Check for all spawners in children
		foreach(Transform s in transform) {

			DropShipSpawn shipSpawn = s.GetComponent<DropShipSpawn> () as DropShipSpawn;

			if (shipSpawn != null) {
				shipSpawn.Spawn ();	// Fire the shot!
			}
		}
	}

	public void DeactivateGuns() {
		foreach(Transform s in transform) {
			Turret turret = s.GetComponent<Turret> () as Turret;	// Get ShotSpawn in children

			if (turret != null) {
				turret.DeactivateGuns();	// Fire the shot!
			}
		}
	}

	public void ActivateGuns() {
		foreach(Transform s in transform) {
			Turret turret= s.GetComponent<Turret> () as Turret;	// Get ShotSpawn in children

			if (turret != null) {
				turret.ActivateGuns();	// Fire the shot!
			}
		}
	}





	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us

			Damage(GameManager.Singleton.playerDamage);			// We lost health
			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}

	/** CO-ROUTINES */
	IEnumerator StartSpawning() {
		float startTime = Time.time;	// Get time this co-routine begins
		ActivateGuns();					// Guns are on when spawning

		// While we're still in our window of time where we spawn ships...
		while (Time.time < startTime + spawnModeDuration) {
			SpawnShip();	// Instantiate an enemy
			yield return new WaitForSeconds(timeBetweenSpawns);		// Wait a certain time between spawning
		}

		nextSpawn = Time.time + timeUntilNextSpawnMode;		// Won't start spawning until certain time has passed
		//Debug.Log("nextSpawn: " + nextSpawn);
		isSpawning = false;			// Resume normal behavior
		DeactivateGuns();			// Guns are off when not spawning
	}
	#endregion
}
