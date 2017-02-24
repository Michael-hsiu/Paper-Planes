using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnCappedTemplate : MonoBehaviour {

	public GameObject enemy;
	public float spawnDelay = 3.0f;		// Time between spawns
	public int maxEnemies = 5;			// Max number of enemies alive at a time

	private IEnumerator coroutine;
	private int numEnemies = 0;
	private GameObject spawnContainer;

	void Start() {
		spawnContainer = new GameObject ("SpawnContainerCapped");		// Create container to hold all spawned enemies
		coroutine = WaitAndSpawn(spawnDelay);	// Assign co-routine
		StartCoroutine(coroutine);	// Begin eternal enemy spawn
	}

	private IEnumerator WaitAndSpawn(float spawnDelay) {
		
		while (true) {
			int fillSize = calcContainerLength ();		// Get current number of living enemies
			print ("Spawn Container Length: " + fillSize);

			// Spawn enemy if we have fewer than max amnt
			if (fillSize < maxEnemies) {
				GameObject spawnedEnemy = Instantiate (enemy, transform.position, Quaternion.identity);	// Instantiate an enemy prefab
				spawnedEnemy.transform.parent = spawnContainer.transform;		// Set parent of spawned enemies to parent container

				numEnemies += 1;	// Increment number of enemies this spawn has created

				//print ("Enemy # " + numEnemies + " spawned!");

			}

			yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies or checking again

		}
	}

	// Calculates number of living enemies
	private int calcContainerLength() {
		int count = 0;
		foreach (Transform t in spawnContainer.transform) {		// Iterate through Spawn Container
			if (t.gameObject.CompareTag(Constants.EnemyTag)) {	// Check for matches with Enemy tag (1 level of depth)
				count += 1;		// Increment count
			}
		}
		return count;
	}
}
