using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberCollisionHelper : MonoBehaviour {


	void OnTriggerEnter2D(Collider2D other) {

		// If our AoE collider touches the player...
		if (other.gameObject.CompareTag (Constants.PlayerTag)) {

			GetComponentInParent<Rigidbody>().velocity = Vector3.zero; 	// We stop moving, precautionary measure

			if (GetComponentInParent<BomberShip>() != null) {
				GetComponentInParent<BomberShip>().isExploding = true;		// Tell parent to start explosion protocol

			}
		}
	}
}
