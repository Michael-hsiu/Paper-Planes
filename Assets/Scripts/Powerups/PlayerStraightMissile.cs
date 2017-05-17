using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStraightMissile : PoolObject {

	public float thrust;		// Force multiplier
	public int missileDmg = 20;	// Damage missile does to enemy
	public GameObject explosion;

	public override void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		GetComponent<Rigidbody> ().velocity = Vector3.zero;
		Debug.Log ("PLAYER STRAIGHT MISSILE RESET");
		GetComponent<Rigidbody> ().AddForce (transform.up * thrust);
	}

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {

			if (other.gameObject != null) {

				if (other.gameObject.GetComponent<IDamageable<int>>() != null) {

					if (other.gameObject.GetComponent<IDamageable<int>>() != null) {
						other.gameObject.GetComponent<IDamageable<int>>().Damage (missileDmg);
					}

					Instantiate (explosion, transform.position, Quaternion.identity);
					//Debug.Log ("STRAIGHT MISSILE EXPLODED!");

					DestroyForReuse ();		// We explode after one hit
				}
			}
		}
	}

}
