using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberCollisionHelper : MonoBehaviour {


	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {

			GetComponentInParent<Rigidbody>().velocity = Vector3.zero; 	// We stop moving, precautionary measure

			if (GetComponentInParent<BomberShip>() != null) {
				GetComponentInParent<BomberShip>().isExploding = true;		// Tell parent to start explosion protocol

			}
		}

		/*if (other.CompareTag(Constants.PlayerShot)) {
			// Naive way of ignoring collisions with player shots; could also use layer-based collisions
			// This actually doesn't work; now using layer-based collision system
			//Physics.IgnoreCollision (other.GetComponent<Collider> (), GetComponent<Collider> ());
			Debug.Log ("PLAYER SHOT COLLISION REGISTERED");
			return;
		} */

	}

	/*void OnTriggerStay2D(Collider2D other) {

		// If our AoE collider touches the player...
		if (other.gameObject.CompareTag (Constants.PlayerColliders)) {

			GetComponentInParent<Rigidbody>().velocity = Vector3.zero; 	// We stop moving, precautionary measure

			if (GetComponentInParent<BomberShip>() != null) {
				GetComponentInParent<BomberShip>().isExploding = true;		// Tell parent to start explosion protocol

			}
		}
	}*/
}
