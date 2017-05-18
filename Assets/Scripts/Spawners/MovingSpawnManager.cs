using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MovingSpawnManager : MonoBehaviour {

	public float xBound;
	public float yBound;
	public float movingSpawnDelay = 5.0f;
	public float promoAreaSpawnDelay = 10.0f;
	public bool spawnEnabled = false;
	public Text spawnTimerText;
	public float toMovingSpawnTime;
	public float toPromoAreaSpawnTime;

	public IEnumerator cr1;
	public GameObject movingSpawn;
	public GameObject promoArea;

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
					movingSpawnDelay = Random.Range (15.0f, 30.0f);		// Spawns can occur anywhere from every 15 s to every 30 s
					toMovingSpawnTime = Time.time + movingSpawnDelay;
					yield return new WaitForSeconds (movingSpawnDelay);	// Currently, moving spawns spawn at fixed intervals
				}

				// Piggybacking this manager to facilitate Promo Area spawns
				if (GameManager.Singleton.activeLevel.movingEnemySpawn != null && GameManager.Singleton.activeLevel.movingEnemySpawn.Count != 0) {

					Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);
					Instantiate (promoArea, spawnLoc, Quaternion.identity);
					//PoolManager.Instance.ReuseObject (movingSpawn, spawnLoc, Quaternion.identity);

					Debug.Log ("PromoArea spawned!");
					promoAreaSpawnDelay = Random.Range (20.0f, 35.0f);		// Spawns can occur anywhere from every 15 s to every 30 s
					toPromoAreaSpawnTime = Time.time + promoAreaSpawnDelay;
					yield return new WaitForSeconds (promoAreaSpawnDelay);	// Currently,promo areas spawn at random intervals
				}

				yield return null;

			}
			yield return null;
		}
	}

	void UpdateSpawnTimer() {
		if (GameManager.Singleton.lvlActive && GameManager.Singleton.activeLevel.movingEnemySpawn.Count != 0) {
			spawnTimerText.text = "Spawn Timer: " + (toMovingSpawnTime - Time.time);
		} else {
			spawnTimerText.text = "Spawn Timer: N/A";
		}
	}

	void Update() {
		UpdateSpawnTimer ();
	}

}
