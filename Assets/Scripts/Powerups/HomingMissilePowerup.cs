using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissilePowerup : Powerup {

	public int numMissiles = 5;
	public PlayerShotSpawn missileSpawn;		// Assigned to normal player shotspawn in inspector
	public GameObject missile;			// Assigned in inspector

	void Start() {
		missileSpawn = GameManager.Singleton.normalSS.GetComponent <PlayerShotSpawn>();
	}

	public override void ActivatePower() {
		if (missileSpawn != null) {
			missileSpawn.CreateMissiles (numMissiles);	// Fire the missiles!
			//Debug.Log ("MISSILE MANAGER ACCESSED");
		}
		//HomingMissileManager.Instance.CreateMissiles (numMissiles);		// Fire the missiles (this -> HomingMissileManager -> PlayerSS)
	}
}
