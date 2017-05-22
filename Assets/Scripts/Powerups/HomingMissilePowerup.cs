using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissilePowerup : Powerup {

	public HomingMissileScrObj powerupData;		// Data about upgrades, etc. HIDES THE POWERUP CLASS FIELD OF SAME NAME!
	//public int numMissiles = 5;
	public PlayerShotSpawn missileSpawn;		// Assigned to normal player shotspawn in inspector
	public GameObject missile;			// Assigned in inspector

	void Start() {
		missileSpawn = GameManager.Singleton.normalSS.GetComponent <PlayerShotSpawn>();
	}

	public override void ActivatePower() {
		if (missileSpawn != null) {
			missileSpawn.CreateMissiles (powerupData.numMissiles);	// Fire the missiles! [SATISFIES numMissiles]
		}
	}

	// Updates from shop.
	public void UpdateDamage() {
		if (powerupData.currDmgLevel < powerupData.MAX_LEVEL) {
			powerupData.currDmgLevel += 1;		// Increase level of skill
			powerupData.damage = powerupData.damagesList [powerupData.currDmgLevel];	// Vars w/ 'level' are the index vars
		}
	}

	public void UpdateNumMissiles() {
		if (powerupData.currNumMissilesLevel < powerupData.MAX_LEVEL) {
			powerupData.currNumMissilesLevel += 1;		// Increase level of skill
			powerupData.numMissiles = powerupData.numMissilesList [powerupData.currNumMissilesLevel];	// Set the new numMissiles value
		}
	}

	public void UpdateMissileSpawnChance() {
		if (powerupData.currMissileSpawnChanceLevel < powerupData.MAX_LEVEL) {
			powerupData.currMissileSpawnChanceLevel += 1;		// Increase level of skill
			powerupData.missileSpawnChance = powerupData.missileSpawnChanceList [powerupData.currMissileSpawnChanceLevel];
		}
	}
}
