using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StraightMissile : PoolObject {

	public float thrust;		// Force multiplier
	public int missileDmg = 20;	// Damage missile does to player
	public GameObject explosion;

	// Reset speed on reuse
	// Give a speed boost on use

	public override void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		GetComponent<Rigidbody> ().velocity = Vector3.zero;
		Debug.Log ("STRAIGHT MISSILE RESET");
		GetComponent<Rigidbody> ().AddForce (transform.up * thrust);
	}

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {

			if (other.gameObject != null) {

				if (other.gameObject.GetComponent<IDamageable<int>>() != null) {

					if (((Ship) other.GetComponent<PlayerShip> ()) != null) {
						((Ship) other.GetComponent<PlayerShip> ()).Damage (missileDmg);
					}

					Instantiate (explosion, transform.position, Quaternion.identity);
					//Debug.Log ("STRAIGHT MISSILE EXPLODED!");

					DestroyForReuse ();		// We explode after one hit
				}
			}
		}
	}

}
