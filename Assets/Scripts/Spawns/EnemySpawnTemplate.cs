using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnTemplate : MonoBehaviour {

	public GameObject enemy;
	public float spawnDelay = 3.0f;
	//public int maxEnemies = 100;	// Could be capped per lvl
	public float spawnRadius = 3.0f;
	public bool startSpawning = true;	// Should be controlled by GameManager

	private IEnumerator cr;
	private int numEnemies = 0;
	private GameObject spawnContainer;
	//private Ship spawnedEnemy;

	void Start() {
		spawnContainer = new GameObject ("SpawnContainer");		// Create container to hold all spawned enemies
		cr = WaitAndFire(spawnDelay);	// Assign co-routine
		StartCoroutine(cr);				// Begin eternal enemy spawn
	}

	private IEnumerator WaitAndFire(float spawnDelay) {

		while (true) {
		//while (numEnemies < maxEnemies) {
			
			//GameObject spawnedEnemy = Instantiate (enemy, transform.position, Quaternion.identity);	// Instantiate an enemy prefab
			if (startSpawning) {
				
				Vector3 randomPos = Utils.RandomPos (transform, spawnRadius);
				Ship spawnedEnemy = (Ship) PoolManager.Instance.ReuseObjectRef(enemy, randomPos, Quaternion.identity);
				IEnumerator cr = StartDash (spawnedEnemy);
				StartCoroutine (cr);
				//spawnedEnemy.transform.parent = spawnContainer.transform;		// Set parent of spawned enemies to parent container
				//spawnedEnemy.name = spawnedEnemy.GetInstanceID () + " " + numEnemies;

				numEnemies += 1;	// Increment number of enemies this spawn has created

				//print ("Enemy # " + numEnemies + " spawned!");

				yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies
			}
			yield return null;
		}
	}

	IEnumerator StartDash(Ship ship) {

		//GameManager.Singleton.onDashCooldown = true;
		Debug.Log ("STARTED DASH COROUTINE");

		Vector3 savedVelocity = ship.GetComponent<Rigidbody> ().velocity;		// Store velocity pre-dash

		Vector3 forceToAdd = ship.transform.up;		// Starting force, to be incremented every fixedUpdate

		ship.gameObject.GetComponent<Collider>().enabled = false;		// Can't be hit when dashing

		ship.GetComponent<Rigidbody> ().velocity = ship.transform.up;

		while (Time.time < 1.0f) {
			ship.GetComponent<Rigidbody> ().velocity *= 1.01f;


			//forceToAdd += new Vector3 (forceToAdd.x * 1.001f, forceToAdd.y * 1.001f, forceToAdd.z * 1.001f);
			//player.GetComponent < Rigidbody> ().AddForce (forceToAdd);	// Push player forward for dash (may make this increase over time)
			Debug.Log ("DASH ACTIVE!!!");
			yield return new WaitForFixedUpdate ();
		}

		Debug.Log ("DASH ENDED!");

		yield return new WaitForSeconds (0.15f);		// Short delay for player to re-orient after dash

		ship.GetComponent<Rigidbody> ().velocity = savedVelocity;		// Return to pre-dash velocity
		ship.gameObject.GetComponent<Collider>().enabled = true;		// Can now be hit after dashing

		//ship.dashStarted = false;		// Player is no longer dashing

		//GameManager.Singleton.isDashing = false;
		//GameManager.Singleton.onDashCooldown = false;
		//GameManager.Singleton.speedCapped = true;
		yield return new WaitForSeconds (0.1f);
		//GameManager.Singleton.onDashCooldown = false;

	}
}
