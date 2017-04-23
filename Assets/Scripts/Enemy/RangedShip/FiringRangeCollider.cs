using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class FiringRangeCollider : MonoBehaviour {

	public bool targetInRange;

	void OnTriggerEnter(Collider other) {

		Debug.Log ("Reached firing range from player!");

		// Either-or: either trigger processes, or Euclidean calc processes
		if (other.gameObject.CompareTag (Constants.PlayerTag) /* && !GameManager.Singleton.onDashCooldown*/) {
			try {
				GetComponentInParent<RangedShip>().firingState.mode = FiringMode.Firing;
			} catch (NullReferenceException e) {
				Debug.LogError (e);
				//Debug.Break ();
			}	
		}
	}

	void Update() {
		targetInRange = false;
	}

	void OnTriggerStay(Collider other) {
		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			targetInRange = true;
		}
	}

	void OnTriggerExit(Collider other) {
		Debug.Log ("Leaving firing range from player!");

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			try {
				GetComponentInParent<RangedShip>().firingState.mode = FiringMode.NotFiring;
			} catch (NullReferenceException e) {
				Debug.LogError (e);
				//Debug.Break ();
			}	
		}
	}

}
