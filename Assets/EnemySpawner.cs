using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

	public float xBound;
	public float yBound;
	public float spawnDelay = 5.0f;				// Delay between enemy spawns.
	public bool spawnEnabled = false;
	public int currLevel = 0;		// This is used from EnemySpawner. Enemies UP TO this index are allowed to be spawned. Reflects same-named value from GameManager.
	public bool bossSpawnEnabled = false;

	// The maximum of each enemy we can have alive at a time. MAY be subject to change as level increases.
	public int MAX_PAWNS = 50;
	public int MAX_RANGED = 15;
	public int MAX_BOMBERS = 20;
	public int MAX_DROPSHIPS = 5;
	public int MAX_MEDICS = 5;
	public int MAX_TURRETS = 10;
	public int MAX_ASSASSINS = 5;
	public int MAX_BOSSES = 2;

	// The number of each mob alive right now.
	// Remember to update with bosses later on.
	public int NUM_PAWNS_ALIVE = 0;
	public int NUM_RANGED_ALIVE = 0;
	public int NUM_BOMBERS_ALIVE = 0;
	public int NUM_DROPSHIPS_ALIVE = 0;
	public int NUM_MEDICS_ALIVE = 0;
	public int NUM_TURRETS_ALIVE = 0;
	public int NUM_ASSASSINS_ALIVE = 0;
	public int NUM_BOSSES_ALIVE = 0;

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
				// Spawn within map range.
				Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);

				// Spawn UP TO current level progression.
				// Use / remove from DICT when MAX_CAP reached. Then remove / reset upon level reset or when enough of the enemy eliminated.
				PoolManager.Instance.ReuseObject (enemyShips [Random.Range (0, currLevel + 1)], spawnLoc, Quaternion.identity);
				Debug.Log ("ENEMY SPAWNED!");

				// Wait a bit before spawning next enemy.
				// We COULD spawn multiple at a time / formations!
				yield return new WaitForSeconds (Random.Range (0, 1.0f));
			}
			yield return null;
		}
	}
}

