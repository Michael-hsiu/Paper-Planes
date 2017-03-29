using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TripMineWeapon : MonoBehaviour {

	public float mineFuse = 3.0f;
	private SpecialWeapons id = SpecialWeapons.TRIPMINES;

	void ActivateWeapon(string id) {
		WeaponsManager.Instance.ActivateWeapon (id);	// Logic should be flipped
	}

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			// Do weapons logic; spawn things
		}
	}

	void SpawnMines() {
		// spawns, radius, rotations, explosions
	}

	IEnumerator BeginCountdown(float mineFuse) {
		yield return new WaitForSeconds (mineFuse);
		// Destroy for reuse by pool
	}
}
