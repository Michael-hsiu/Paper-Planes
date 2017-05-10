using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MovingSpawnManager : MonoBehaviour {

	public float xBound;
	public float yBound;
	public float spawnDelay = 5.0f;
	public bool spawnEnabled = false;
	public Text spawnTimerText;
	public float toSpawnTime;

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

				if (GameManager.Singleton.activeLevel.movingEnemySpawn != null && GameManager.Singleton.activeLevel.movingEnemySpawn.Count != 0) {

					Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);
					Instantiate (movingSpawn, spawnLoc, Quaternion.identity);
					//PoolManager.Instance.ReuseObject (movingSpawn, spawnLoc, Quaternion.identity);

					Debug.Log ("MovingSpawn spawned!");
					spawnDelay = Random.Range (15.0f, 30.0f);		// Spawns can occur anywhere from every 15 s to every 30 s
					toSpawnTime = Time.time + spawnDelay;
					yield return new WaitForSeconds (spawnDelay);	// Currently, moving spawns spawn at fixed intervals
				}
				yield return null;

			}
			yield return null;
		}
	}

	void UpdateSpawnTimer() {
		if (GameManager.Singleton.lvlActive && GameManager.Singleton.activeLevel.movingEnemySpawn.Count != 0) {
			spawnTimerText.text = "Spawn Timer: " + (toSpawnTime - Time.time);
		} else {
			spawnTimerText.text = "N/A";
		}
	}

	void Update() {
		UpdateSpawnTimer ();
	}

}
