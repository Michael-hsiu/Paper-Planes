using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedCollections;

public class MovingSpawn : MonoBehaviour {

	public float spawnDelay = 2.0f;
	public float spawnRadius = 3.0f;
	public bool startSpawning = true;	// Should be controlled by GameManager
	public EnemyTypeCountsDictionary dict = new EnemyTypeCountsDictionary ();
	public int squadTotal;		// Tracks total # of enemies in squad; when this reaches 0, whole squad has spawned and this spawn can disappear~
	public GameObject player;
	[Range(0,360)]
	public float spawnAngle;

	private IEnumerator cr;
	private int numEnemies = 0;
	private GameObject spawnContainer;
	//private Ship spawnedEnemy;

	void OnEnable() {
		// Initialization / assignments
		player = GameManager.Singleton.playerShip.gameObject;

		// Assign 1 unique squad to this Moving Spawn (may change this so we have 1 moving spawn for ea. spawn per level; they'll be pooled and just be enabled wherever when needed)
		List<EnemySquad> listSquads = GameManager.Singleton.activeLevel.movingEnemySpawn;
		EnemySquad chosenSquad = listSquads [Random.Range (0, listSquads.Count)];

		// Add mapping of each EnemyType to # of each enemy in squad
		foreach (KeyValuePair<EnemyType, int> kv in chosenSquad.enemyCounts) {
			dict.Add(kv.Key, kv.Value);		// Make a copy of the EnemyType and corresponding # of minion spawns, which we will edit
			squadTotal += 1;
		}
	}


	void Start() {
		spawnContainer = new GameObject ("SpawnContainer");		// Create container to hold all spawned enemies
		cr = WaitAndFire(spawnDelay);	// Assign co-routine
		StartCoroutine(cr);				// Begin eternal enemy spawn
	}

	private IEnumerator WaitAndFire(float spawnDelay) {

		while (squadTotal > 0) {

			Vector3 target = player.transform.position;

			if (startSpawning) {

				// Retrieve an enemy from stored dictionary, spawn it, decrement its count, 
				// decrement total count, if count=0 for that enemy, remove its key from dict, cont. until total enemycount=0, then destroy this obj for reuse

				// YOUR CODE HERE

				/*Vector3 randomPos = Utils.RandomPos (transform, spawnRadius);
				Ship spawnedEnemy = (Ship) PoolManager.Instance.ReuseObjectRef(enemy, randomPos, Quaternion.identity);

				Vector3 dist = target - spawnedEnemy.transform.position;
				float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)
				Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

				spawnedEnemy.transform.rotation = desiredRotation;	// Set immediately to face the player (vector logic now expressed thru quaternion)*/

				yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies
			}
			yield return null;
		}
	}
}
