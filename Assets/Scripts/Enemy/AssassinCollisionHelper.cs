using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssassinCollisionHelper : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D other) {

		// If our AoE collider touches the player...
		if (other.gameObject.CompareTag (Constants.PlayerColliders)) {

			GetComponentInParent<Rigidbody>().velocity = Vector3.zero; 	// We stop moving, precautionary measure

			if (GetComponentInParent<AssassinShip>() != null && !GetComponentInParent<AssassinShip>().onStandby) {
				GetComponentInParent<AssassinShip>().startTargeting = true;

			}
		}
	}
}