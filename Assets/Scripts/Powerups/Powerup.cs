using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

// API inspired by: https://github.com/antfarmar/Unity-3D-Asteroids/blob/master/Assets/Asteroids/Scripts/Powerups/Powerup.cs
public class Powerup : PoolObject {

	public PowerupScriptableObject powerupData;			// Ref to data container; data about upgrades, etc.

	public PlayerShip player;
	//public List<ShotSpawn> prevSS = new List<ShotSpawn> ();
	public Stack<ShotSpawn> prevSS = new Stack<ShotSpawn> ();
	public float powerDuration = 3.0f;
	public float endTime;
	public float timeObtained;
	protected bool isVisible;
	//protected string id = "";

	void Start() {
		player = GameManager.Singleton.playerShip.GetComponent<PlayerShip> ();
	}

	void Update() {
		if (player == null) {
			player = GameManager.Singleton.playerShip.GetComponent<PlayerShip> ();
		}
	}

	void Spawn() {
		transform.position = Vector3.zero;	// Temp fixed location
		SetVisibility (true);
	}

	void Despawn() {
		SetVisibility (false);
	}

	public virtual void ActivatePower() {

/*		endTime = Time.time + powerDuration;
		timeObtained = Time.time;
		Debug.Log ("POWERUP ACTIVATED!");

		ShotSpawnContainer curr = player.shotSpawnDictionary [PlayerShip.Weapons.LEVEL_ONE];
		PlayerShip.OldShotSpawnsContainer activePowerup = (PlayerShip.OldShotSpawnsContainer) player.shotSpawnStack.Peek ();	// Get the active powerup's shotspawns
		int comp = curr.CompareTo (activePowerup);		// Compare to most recent entry in Stack
		if (comp == 0) {
			// Add full duration
			CancelInvoke ("DeactivatePower");			// Enables powerup duration extension
			Invoke ("DeactivatePower", powerDuration);	// Reset to state before powerup obtained
			endTime = Time.time + powerDuration;		// Record end time of powerup
			Debug.Log("EQUAL POWERUP!");
		} else if (comp == -1) {
			// Deque and add more duration to new (hardcoded to 1/2)
			player.shotSpawnStack.Pop();		// Remove last powerup
			CancelInvoke ("DeactivatePower");			// Enables powerup duration extension
			endTime = endTime + powerDuration * 0.5f;		// Set new end time
			Invoke ("DeactivatePower", endTime);	// Reset to state after extended duration
			Debug.Log("GOT BETTER POWERUP!");
		} else {
			// No duration added from worse powerup (no effect)
			Debug.Log("GOT WORSE POWERUP!");
		}*/
	}


	public virtual void DeactivatePower() {
		//CancelInvoke ("DeactivatePower");			// Just in case we removed a powerup through override
		Debug.Log (String.Format("POWERUP DEACTIVATED AT ENDTIME: {0}", Time.time));
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
			//prevSS.Push(other.GetComponent<PlayerShip>().activeSS);		// Add the previous state
			/*if (player == null) {
				player = other.GetComponent<PlayerShip> ();
			}*/
			//Debug.Log (other.name);
			ActivatePower ();
			HideInScene ();
			//Debug.Log ("PICKED UP POWERUP: " + this.id);	// Print message to console
		}
	}


	/*public void CancelInvoke() {
		CancelInvoke ("DeactivatePower");				// Enables powerup duration extension
	}*/
}

