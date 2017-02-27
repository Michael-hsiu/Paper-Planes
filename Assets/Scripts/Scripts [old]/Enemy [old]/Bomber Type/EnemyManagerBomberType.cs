using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManagerBomberType : MonoBehaviour {

	public GameObject explosion;

	private int enemyHealth = 100;
	private int shotDamage = 20;
	private int enemyPoints = 100;

	private GameObject player;
	private Rigidbody rb;

	void Start() {
		rb = GetComponent<Rigidbody> ();	// For use in adjusting velocity
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);	// Get the player
	}

	// Triggers on collision with enemy ship's rigidbody's collider

	/** ENEMY TAKES CARE OF WHAT SHOT DOES TO IT */
	void OnTriggerEnter(Collider other) {

		// If player shot hits us...
		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			Destroy (other.gameObject);		// Destroy the shot that hit us

			enemyHealth -= shotDamage;			// We lost health


			// We'll just explode when hit
			this.gameObject.GetComponent<EnemyMovementBomberType> ().isExploding = true;


			if (enemyHealth <= 0) {
				
			}

			Debug.Log ("ENEMY HEALTH: " + enemyHealth);	// Print message to console */
		}
	}
}
