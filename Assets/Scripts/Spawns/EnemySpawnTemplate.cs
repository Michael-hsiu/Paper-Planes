using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnTemplate : MonoBehaviour {

	// In this example we show how to invoke a coroutine and 
	// continue executing the function in parallel.

	public GameObject enemy;
	public float spawnDelay = 3.0f;
	public int maxEnemies = 100;

	private IEnumerator coroutine;
	private int numEnemies = 0;
	private GameObject spawnContainer;

	void Start() {
		spawnContainer = new GameObject ("SpawnContainer");		// Create container to hold all spawned enemies
		coroutine = WaitAndFire(spawnDelay);	// Assign co-routine
		StartCoroutine(coroutine);	// Begin eternal enemy spawn
	}

	private IEnumerator WaitAndFire(float spawnDelay) {
		while (numEnemies < maxEnemies) {
			//GameObject spawnedEnemy = Instantiate (enemy, transform.position, Quaternion.identity);	// Instantiate an enemy prefab
			Ship spawnedEnemy = (Ship) PoolManager.Instance.ReuseObjectRef(enemy, transform.position, Quaternion.identity);
			spawnedEnemy.transform.parent = spawnContainer.transform;		// Set parent of spawned enemies to parent container
				
			numEnemies += 1;	// Increment number of enemies this spawn has created

			print ("Enemy # " + numEnemies + " spawned!");

			yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies

		}
	}
}
