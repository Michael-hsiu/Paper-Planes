using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissilePowerup : Powerup {

	public HomingMissileScrObj missileData;		// Data about upgrades, etc.
	//public int numMissiles = 5;
	public PlayerShotSpawn missileSpawn;		// Assigned to normal player shotspawn in inspector
	public GameObject missile;			// Assigned in inspector

	void Start() {
		missileSpawn = GameManager.Singleton.normalSS.GetComponent <PlayerShotSpawn>();
	}

	public override void ActivatePower() {
		if (missileSpawn != null) {
			missileSpawn.CreateMissiles (missileData.numMissiles);	// Fire the missiles! [SATISFIES numMissiles]
		}
	}

	// Updates from shop.
	public void UpdateDamage() {
		if (missileData.currDmgLevel < missileData.MAX_LEVEL) {
			missileData.currDmgLevel += 1;		// Increase level of skill
			missileData.damage = missileData.damagesList [missileData.currDmgLevel];	// Vars w/ 'level' are the index vars
		}
	}

	public void UpdateNumMissiles() {
		if (missileData.currNumMissilesLevel < missileData.MAX_LEVEL) {
			missileData.currNumMissilesLevel += 1;		// Increase level of skill
			missileData.numMissiles = missileData.numMissilesList [missileData.currNumMissilesLevel];	// Set the new numMissiles value
		}
	}

	public void UpdateMissileSpawnChance() {
		if (missileData.currMissileSpawnChanceLevel < missileData.MAX_LEVEL) {
			missileData.currMissileSpawnChanceLevel += 1;		// Increase level of skill
			missileData.missileSpawnChance = missileData.missileSpawnChanceList [missileData.currMissileSpawnChanceLevel];
		}
	}
}
