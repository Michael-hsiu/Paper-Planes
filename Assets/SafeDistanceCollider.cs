using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SafeDistanceCollider : MonoBehaviour {

	public float safeDist = 2.0f;

	void OnTriggerEnter(Collider other) {

		Debug.Log ("Reached safe distance from player!");


		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			try {
				GetComponentInParent<RangedMS> ().direction = Direction.TooClose;
			} catch (NullReferenceException e) {
				Debug.LogError (e);
				//Debug.Break ();
			}	
		}
		
	}
}
