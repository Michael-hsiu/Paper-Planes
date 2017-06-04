using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerupSpawner : MonoBehaviour {

	public float xBoundLeft;
	public float xBoundRight;
	public float yBoundLeft;
	public float yBoundRight;

	public float spawnDelay = 5.0f;
	public bool spawnEnabled = false;
	public int numPowerupsSpawned = 0;

	public IEnumerator powerupSpawnRoutine;
	public IEnumerator cr2;

	public List<GameObject> powerups = new List<GameObject>();
	public List<GameObject> enemyShips = new List<GameObject> ();

	private static PowerupSpawner singleton;
	public static PowerupSpawner Singleton {
		get {
			if (singleton == null) {
				singleton = new PowerupSpawner();
			}
			return singleton;
		}
	}

	void Awake() {
		if (singleton == null) {
			singleton = this;

		} else {
			DestroyImmediate(this);
		}
		// Set variables
		Vector3 boxSize = GetComponent<BoxCollider> ().size;

		xBoundLeft = gameObject.transform.position.x - (boxSize.x / 2);
		xBoundRight = gameObject.transform.position.x + (boxSize.x / 2);

		yBoundLeft = gameObject.transform.position.y - (boxSize.y / 2);
		yBoundRight = gameObject.transform.position.y + (boxSize.y / 2);
	}


	void Start() {

		// Subscribe to events
		GameManager.Singleton.StartLevelEvent += OnLevelStartEnablePowerupSpawners;

		// Start routines
		powerupSpawnRoutine = StartSpawningPowerups ();
		StartCoroutine (powerupSpawnRoutine);

	}

	public void OnLevelStartEnablePowerupSpawners() {
		// TODO: add new powerups every lvl
		spawnEnabled = true;

	}

	// Called from ENEMY KILL
	public void SpawnPowerupDrop(Vector3 pos) {
		PoolManager.Instance.ReuseObject (powerups [Random.Range (0, powerups.Count)], pos, Quaternion.identity);
	}

	IEnumerator StartSpawningPowerups() {
		// Keep true while in current round
		while (true) {			

			// Spawn a fixed # of powerups at the beginning of every lvl
			while (/*numPowerupsSpawned <= 5 &&*/ spawnEnabled) {
				//yield return new WaitForSeconds (spawnDelay);

				// Spawn a random powerup at a random location within bounds of collider
				Vector3 spawnLoc = new Vector3 (Random.Range (xBoundLeft, xBoundRight), Random.Range (yBoundLeft, yBoundRight), 0);
				PoolManager.Instance.ReuseObject (powerups [Random.Range (0, powerups.Count)], spawnLoc, Quaternion.identity);
				//Debug.Log ("POWERUP SPAWNED!");
				yield return new WaitForSeconds (Random.Range (0, 3.0f));
				//numPowerupsSpawned += 1;
				//Instantiate (powerups [Random.Range (0, powerups.Count)], spawnLoc, Quaternion.identity);
			}
/*			if (!spawnEnabled) {
				numPowerupsSpawned = 0;		// Reset after each lvl
			}*/
			yield return null;
		}
	}


}
