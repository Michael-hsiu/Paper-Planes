using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnTemplate : MonoBehaviour {

	public GameObject enemy;
	public float spawnDelay = 3.0f;
	//public int maxEnemies = 100;	// Could be capped per lvl
	public float spawnRadius = 3.0f;

	private IEnumerator cr;
	private int numEnemies = 0;
	private GameObject spawnContainer;
	private Ship spawnedEnemy;

	void Start() {
		spawnContainer = new GameObject ("SpawnContainer");		// Create container to hold all spawned enemies
		cr = WaitAndFire(spawnDelay);	// Assign co-routine
		StartCoroutine(cr);				// Begin eternal enemy spawn
	}

	private IEnumerator WaitAndFire(float spawnDelay) {

		while (true) {
		//while (numEnemies < maxEnemies) {
			
			//GameObject spawnedEnemy = Instantiate (enemy, transform.position, Quaternion.identity);	// Instantiate an enemy prefab

			Vector3 randomPos = Utils.RandomPos (transform, spawnRadius);

			spawnedEnemy = (Ship) PoolManager.Instance.ReuseObjectRef(enemy, randomPos, Quaternion.identity);
			spawnedEnemy.transform.parent = spawnContainer.transform;		// Set parent of spawned enemies to parent container
			spawnedEnemy.name = spawnedEnemy.GetInstanceID () + " " + numEnemies;
				
			numEnemies += 1;	// Increment number of enemies this spawn has created

			print ("Enemy # " + numEnemies + " spawned!");

			yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies

		}
	}


}
