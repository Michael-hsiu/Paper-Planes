using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHelperBomberType : MonoBehaviour {

	/** INSTANCE VARS */
	private GameObject player;


	/** UNITY CALLBACKS */

	void Start () {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);	// Find the player
	}


	void OnTriggerEnter2D(Collider2D other) {
		
		// If our AoE collider touches the player...
		if (other.gameObject.CompareTag (Constants.PlayerTag)) {

			GetComponentInParent<Rigidbody>().velocity = Vector3.zero; 	// We stop moving, precautionary measure
			GetComponentInParent<BomberShip>().isExploding = true;		// Tell parent to start explosion protocol

		}
	}
}
