using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnTemplate : MonoBehaviour {

	public GameObject enemy;
	public float spawnDelay = 3.0f;
	//public int maxEnemies = 100;	// Could be capped per lvl
	public float spawnRadius = 3.0f;
	public bool startSpawning = true;	// Should be controlled by GameManager

	[Range(0,360)]
	public float spawnAngle;

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
			GameObject player = GameManager.Singleton.playerShip.gameObject;
			if (startSpawning) {
				
				Vector3 randomPos = Utils.RandomPos (transform, spawnRadius);
				Ship spawnedEnemy = (Ship) PoolManager.Instance.ReuseObjectRef(enemy, randomPos, Quaternion.identity);

				//spawnedEnemy.transform.LookAt (GameManager.Singleton.playerShip.gameObject.transform, Vector3.forward);	// Start off pointing towards the player
				//Vector3 target = new Vector3 (player.transform.rotation.x, player.transform.rotation.y, 0);
				Vector3 target = player.transform.position;
				Quaternion newRot = Quaternion.LookRotation ((target - spawnedEnemy.transform.position).normalized);
				newRot.x = 0;
				newRot.y = 0;
				spawnedEnemy.transform.rotation = newRot;	// Set immediately to face the player (vector logic now expressed thru quaternion)

				//spawnedEnemy.transform.rotation = Quaternion.Euler(0, 0, spawnedEnemy.transform.rotation.z);

				//spawnedEnemy.transform.rotation *= Quaternion.Euler (0, 0, Random.Range(0,360));	// Small offset from the player

				//spawnedEnemy.transform.parent = spawnContainer.transform;		// Set parent of spawned enemies to parent container
				//spawnedEnemy.name = spawnedEnemy.GetInstanceID () + " " + numEnemies;

				numEnemies += 1;	// Increment number of enemies this spawn has created

				//print ("Enemy # " + numEnemies + " spawned!");

				yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies
			}
			yield return null;
		}
	}
}
