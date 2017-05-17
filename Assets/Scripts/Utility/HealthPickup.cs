using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthPickup : PoolObject {

	public int healthAmnt = 100;

	void OnTriggerEnter(Collider other) {
		// Triggers on collision with rigidbody's collider

		if(/*GameManager.playerHealth < 100 && */other.gameObject.CompareTag (Constants.PlayerTag) && GameManager.Singleton.playerHealth > 0) {

			//int missingHealth = 100 - GameManager.playerHealth;
			//int healthToAdd = (missingHealth < 100) ? missingHealth : 100;	// Restore missing HP if <10 missing, otherwise restore 10 HP

			GameManager.Singleton.playerHealth += healthAmnt;	// Set new health in GameManager

			//Debug.Log ("PLAYER HEALTH: " + GameManager.playerHealth);

			UIManager.Singleton.UpdateHealth();	// Update health in UI

			DestroyForReuse ();
			//Destroy (this.gameObject);		// Remove one-time healthpack item
			//Debug.Log ("HEALTH PACK PICKED UP!");	// Print message to console
		}
	}
}
