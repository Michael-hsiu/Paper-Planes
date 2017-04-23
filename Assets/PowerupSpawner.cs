using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerupSpawner : MonoBehaviour {

	public float xBound;
	public float yBound;
	public float spawnDelay = 5.0f;

	public IEnumerator cr1;
	public List<GameObject> powerups = new List<GameObject>();


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
			yield return new WaitForSeconds (spawnDelay);

			// Spawn a random powerup at a random location within bounds of collider
			Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);
			Instantiate (powerups [Random.Range (0, powerups.Count - 1)], spawnLoc, Quaternion.identity);

			Debug.Log ("POWERUP SPAWNED!");
		}
	}

}
