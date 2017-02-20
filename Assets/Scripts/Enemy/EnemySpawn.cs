using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawn : MonoBehaviour {

	// In this example we show how to invoke a coroutine and 
	// continue executing the function in parallel.

	public GameObject enemy;
	public float spawnDelay = 3.0f;
	public int maxEnemies = 100;

	private IEnumerator coroutine;
	private int numEnemies = 0;

	void Start() {
		coroutine = WaitAndFire(spawnDelay);	// Assign co-routine
		StartCoroutine(coroutine);	// Begin eternal enemy spawn
	}

	private IEnumerator WaitAndFire(float spawnDelay) {
		while (numEnemies < maxEnemies) {
			Instantiate (enemy, transform.position, Quaternion.identity);	// Instantiate an enemy prefab
			numEnemies += 1;	// Increment number of enemies this spawn has created

			print ("Enemy # " + numEnemies + " spawned!");

			yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies
		}
	}
}
