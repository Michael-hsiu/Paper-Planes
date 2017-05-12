using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StraightMissile : PoolObject {

	// Reset speed on reuse
	// Give a speed boost on use

	public override void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		GetComponent<Rigidbody> ().velocity = Vector3.zero;
		Debug.Log ("STRAIGHT MISSILE RESET");
		GetComponent<Rigidbody> ().AddForce (transform.up * 10);
	}

}
