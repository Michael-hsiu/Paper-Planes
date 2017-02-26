using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShip : FiringShip {



	/** UNITY CALLBACKS */

	protected override void Update () {

		Debug.Log ("FIRING");
		// Check for all shotspawns in children
		foreach(Transform s in transform) {
			if (s.GetComponent<ShotSpawn>() != null) {
				s.GetComponent<ShotSpawn>().CreateShot ();	// Fire the shot!
			}
		}
		/*if (Input.GetButton ("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing
			Fire ();
		}*/
	}
}