using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// API inspired by: https://github.com/antfarmar/Unity-3D-Asteroids/blob/master/Assets/Asteroids/Scripts/Powerups/Powerup.cs
public class Powerup : MonoBehaviour {

	private float powerDuration = 10f;
	private bool isVisible;
	private string id = "";

	void Spawn() {
		transform.position = Vector3.zero;	// Temp fixed location
		SetVisibility (true);
	}

	void Despawn() {
		SetVisibility (false);
	}

	void ActivatePower() {
		CancelInvoke ("DeactivatePower");			// Enables powerup duration extension
		Invoke ("DeactivatePower", powerDuration);	// Reset to state before powerup obtained
	}

	void DeactivatePower() {
		Debug.Log ("POWERUP DEACTIVATED: " + id);
	}

	void ShowInScene() {
		Spawn();
		SetVisibility(true);
	}

	void HideInScene() {
		Despawn();
		SetVisibility(false);
	}

	void SetVisibility(bool isVisible) {
		this.isVisible = isVisible;
		gameObject.GetComponent<Renderer>().enabled = this.isVisible;
		gameObject.GetComponent<Collider>().enabled = this.isVisible;
	}
		
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			ActivatePower ();
			HideInScene ();
			Debug.Log ("PICKED UP POWERUP: " + this.id);	// Print message to console
		}
	}

	void Start () {
		HideInScene ();
	}


