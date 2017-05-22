using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissilePowerup : Powerup {

	public HomingMissileScrObj specPowerupData;
	public PlayerShotSpawn missileSpawn;		// Assigned to normal player shotspawn in inspector
	public GameObject missile;			// Assigned in inspector

	void Start() {
		missileSpawn = GameManager.Singleton.normalSS.GetComponent <PlayerShotSpawn>();
		//specPowerupData = (HomingMissileScrObj) powerupData;
	}

	public override void ActivatePower() {
		if (missileSpawn != null) {
			missileSpawn.CreateMissiles (specPowerupData.numMissiles);	// Fire the missiles! [SATISFIES numMissiles]
		}
	}






	// Perhaps move these methods to the UpgradableScrObj, which will have an abstract Upgrade() method that can be overridden by each of these uniquely.
	// Updates from shop.
	public void UpgradeDamage() {
		if (specPowerupData.currDmgLevel < specPowerupData.MAX_LEVEL) {
			specPowerupData.currDmgLevel += 1;		// Increase level of skill
			specPowerupData.damage = specPowerupData.damagesList [specPowerupData.currDmgLevel];	// Vars w/ 'level' are the index vars
		}
	}

	public void UpgradeNumMissiles() {
		if (specPowerupData.currNumMissilesLevel < specPowerupData.MAX_LEVEL) {
			specPowerupData.currNumMissilesLevel += 1;		// Increase level of skill
			specPowerupData.numMissiles = specPowerupData.numMissilesList [specPowerupData.currNumMissilesLevel];	// Set the new numMissiles value
		}
	}

	public void UpgradeMissileSpawnChance() {
		if (specPowerupData.currMissileSpawnChanceLevel < specPowerupData.MAX_LEVEL) {
			specPowerupData.currMissileSpawnChanceLevel += 1;		// Increase level of skill
			specPowerupData.missileSpawnChance = specPowerupData.missileSpawnChanceList [specPowerupData.currMissileSpawnChanceLevel];
		}
	}
}
