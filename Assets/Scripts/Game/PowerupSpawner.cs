using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerupSpawner : MonoBehaviour {

	public float xBound;
	public float yBound;
	public float spawnDelay = 5.0f;
	public bool spawnEnabled = false;
	public int numPowerupsSpawned = 0;

	public IEnumerator cr1;
	public List<GameObject> powerups = new List<GameObject>();

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
	}


	void Start() {
		Vector3 boxSize = GetComponent<BoxCollider> ().size;
		xBound = boxSize.x / 2;
		yBound = boxSize.y / 2;

		cr1 = StartSpawning ();
		StartCoroutine (cr1);
	}

	IEnumerator StartSpawning() {
		// Keep true while in current round
		while (true) {			

			// Spawn a fixed # of powerups at the beginning of every lvl
			while (numPowerupsSpawned <= 5 && spawnEnabled) {
				//yield return new WaitForSeconds (spawnDelay);

				// Spawn a random powerup at a random location within bounds of collider
				Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);
				PoolManager.Instance.ReuseObject (powerups [Random.Range (0, powerups.Count)], spawnLoc, Quaternion.identity);
				numPowerupsSpawned += 1;
				//Instantiate (powerups [Random.Range (0, powerups.Count)], spawnLoc, Quaternion.identity);

				Debug.Log ("POWERUP SPAWNED!");
			}
			if (!spawnEnabled) {
				numPowerupsSpawned = 0;		// Reset after each lvl
			}
			yield return null;
		}
	}

}
