using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShip : FiringShip {


	/** UNITY CALLBACKS */

	protected override void Update () {

		// Firing logic
		if (/*Input.GetButton ("Fire1") && */Time.time > nextFire) {

			Debug.Log ("FIRING");
			Fire ();
		}

	}
}