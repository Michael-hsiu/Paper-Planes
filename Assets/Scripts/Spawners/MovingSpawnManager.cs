using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingSpawnManager : MonoBehaviour {

	public float xBound;
	public float yBound;
	public float spawnDelay = 5.0f;
	public bool spawnEnabled = false;

	public IEnumerator cr1;
	public GameObject movingSpawn;

	private static MovingSpawnManager singleton;
	public static MovingSpawnManager Singleton {
		get {
			if (singleton == null) {
				singleton = new MovingSpawnManager();
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
			while (spawnEnabled) {

				Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);
				Instantiate (movingSpawn, spawnLoc, Quaternion.identity);
				//PoolManager.Instance.ReuseObject (movingSpawn, spawnLoc, Quaternion.identity);

				Debug.Log ("MovingSpawn spawned!");
				yield return new WaitForSeconds (spawnDelay);	// Currently, moving spawns spawn at fixed intervals

			}
			yield return null;
		}
	}

}
