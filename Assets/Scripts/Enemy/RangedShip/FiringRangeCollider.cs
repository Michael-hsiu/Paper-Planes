using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class FiringRangeCollider : MonoBehaviour {


	void OnTriggerEnter(Collider other) {

		Debug.Log ("Reached firing range from player!");

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			try {
				GetComponentInParent<RangedShip>().firingState.mode = FiringMode.Firing;
			} catch (NullReferenceException e) {
				Debug.LogError (e);
				//Debug.Break ();
			}	
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
