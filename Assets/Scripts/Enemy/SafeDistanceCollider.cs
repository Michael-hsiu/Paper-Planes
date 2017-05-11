using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SafeDistanceCollider : MonoBehaviour {

	public float safeDist = 2.0f;

	void OnTriggerEnter(Collider other) {

		//Debug.Log ("Too close to player!");

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			try {
				GetComponentInParent<RangedShip> ().moveState.Direction = Direction.TooClose;
			} catch (NullReferenceException e) {
				Debug.LogError (e);
				//Debug.Break ();
			}	
		}	
	}

	void OnTriggerExit(Collider other) {

		//Debug.Log ("Too far from player!");

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			try {
				GetComponentInParent<RangedShip> ().moveState.Direction = Direction.Forwards;
			} catch (NullReferenceException e) {
				Debug.LogError (e);
				//Debug.Break ();
			}	
		}	
	}
}
