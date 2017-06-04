using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

	public float xBound;
	public float yBound;
	public float spawnDelay = 5.0f;				// Delay between enemy spawns.
	public bool spawnEnabled = false;
	public float currLevel = 0;		// This is used from EnemySpawner. Enemies UP TO this index are allowed to be spawned. Reflects same-named value from GameManager.

	// The maximum of each enemy we can have alive at a time. MAY be subject to change as level increases.
	public int MAX_PAWNS = 50;
	public int MAX_RANGED = 15;
	public int MAX_BOMBERS = 20;
	public int MAX_DROPSHIPS = 5;
	public int MAX_MEDICS = 5;
	public int MAX_TURRETS = 10;
	public int MAX_ASSASSINS = 5;

	public IEnumerator enemySpawnRoutine;

	public List<GameObject> enemyShips = new List<GameObject> ();


	void Start() {
		Vector3 boxSize = GetComponent<BoxCollider> ().size;
		xBound = boxSize.x / 2;
		yBound = boxSize.y / 2;

		enemySpawnRoutine = StartSpawningEnemies ();
		StartCoroutine (enemySpawnRoutine);
	}

	// Increase the number of total enemies that can be spawned, and how many of each.
	public void IncreaseLevel() {
		currLevel += 1;
	}

	IEnumerator StartSpawningEnemies() {

		while (true) {
			while (spawnEnabled) {
				// [TEST] spawn ships.
				Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);
				PoolManager.Instance.ReuseObject (enemyShips [Random.Range (0, enemyShips.Count)], spawnLoc, Quaternion.identity);
				Debug.Log ("ENEMY SPAWNED!");
				yield return new WaitForSeconds (Random.Range (0, 3.0f));
			}
			yield return null;
		}
	}
}

