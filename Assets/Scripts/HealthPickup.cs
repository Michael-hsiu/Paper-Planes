using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthPickup : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D other) {
		// Triggers on collision with rigidbody's collider
		if(GameManager.playerHealth < 100 && GameManager.playerHealth > 0) {

			//int missingHealth = 100 - GameManager.playerHealth;
			//int healthToAdd = (missingHealth < 100) ? missingHealth : 100;	// Restore missing HP if <10 missing, otherwise restore 10 HP

			int healthToAdd = 100;

			GameManager.playerHealth += healthToAdd;	// Set new health in GameManager

			Debug.Log ("PLAYER HEALTH: " + GameManager.playerHealth);

			UIManager.Instance.UpdateScore ();	// Update score in UI

			Destroy (this.gameObject);
		}
	}

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}
}
