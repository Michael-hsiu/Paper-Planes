using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissilePowerup : Powerup {

	public HomingMissileScrObj missileData;		// Data about upgrades, etc.
	public int numMissiles = 5;
	public PlayerShotSpawn missileSpawn;		// Assigned to normal player shotspawn in inspector
	public GameObject missile;			// Assigned in inspector

	void Start() {
		missileSpawn = GameManager.Singleton.normalSS.GetComponent <PlayerShotSpawn>();
	}

	public override void ActivatePower() {
		if (missileSpawn != null) {
			missileSpawn.CreateMissiles (numMissiles);	// Fire the missiles!
		}
	}

	// Updates from shop
	public void UpdateDamage() {
		if (missileData.currDmgLevel < missileData.MAX_LEVEL) {
			missileData.currDmgLevel += 1;		// Increase level of skill
		}
	}

	public void UpdateNumMissiles() {
		if (missileData.currNumMissilesLevel < missileData.MAX_LEVEL) {
			missileData.currNumMissilesLevel += 1;		// Increase level of skill
		}
	}

	public void UpdateMissileSpawnChance() {
		if (missileData.currMissileSpawnChanceLevel < missileData.MAX_LEVEL) {
			missileData.currMissileSpawnChanceLevel += 1;		// Increase level of skill
		}
	}
}
