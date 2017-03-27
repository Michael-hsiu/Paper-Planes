using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// API inspired by: https://github.com/antfarmar/Unity-3D-Asteroids/blob/master/Assets/Asteroids/Scripts/Powerups/Powerup.cs
public class Powerup : MonoBehaviour {

	public PlayerShip player;
	//public List<ShotSpawn> prevSS = new List<ShotSpawn> ();
	public Stack<ShotSpawn> prevSS = new Stack<ShotSpawn> ();
	private float powerDuration = 10.0f;
	private bool isVisible;
	protected string id = "";

	void Spawn() {
		transform.position = Vector3.zero;	// Temp fixed location
		SetVisibility (true);
	}

	void Despawn() {
		SetVisibility (false);
	}

	public virtual void ActivatePower() {
		CancelInvoke ("DeactivatePower");			// Enables powerup duration extension
		Invoke ("DeactivatePower", powerDuration);	// Reset to state before powerup obtained
	}

	public virtual void DeactivatePower() {
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
			prevSS.Push(other.GetComponent<PlayerShip>().activeSS);		// Add the previous state
			if (player == null) {
				player = other.GetComponent<PlayerShip> ();
			}
			ActivatePower ();
			HideInScene ();
			Debug.Log ("PICKED UP POWERUP: " + this.id);	// Print message to console
		}
	}

	void Start () {
		//HideInScene ();		// Powerups start out hidden
	}

}

