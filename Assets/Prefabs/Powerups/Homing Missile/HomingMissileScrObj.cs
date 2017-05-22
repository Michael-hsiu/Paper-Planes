using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class HomingMissileScrObj : PowerupScriptableObject {

	// Homing Missile Powerup holds a reference to this SO; changes this SO if a powerup is upgraded.

	// Status vars
	public int damage = 50;		// [SATISFIES damage increase]
	public int numMissiles = 5;
	public float missileSpawnChance = 0f;
	public GameObject missile;		// Missile fab

	// 3 categories of upgrades...
	// Index vars
	//public int currDmgLevel = 0;		// 1) Damage...
	//public int currNumMissilesLevel = 0;	// 2) Num missiles spawned...
	//public int currMissileSpawnChanceLevel = 0;		// and 3) Chance of a missile spawning more missiles


	// Info for Shop
	// This needs to be changed, since this scrObj doesn't need to hold this info, each ENHANCEMENT needs to hold this info.
	// So we need to store a list of PowerupScrObj that hold the info of each enhancement.
	// We instantiate a new Shop Slot for each entry in our list.
	void OnEnable() {
		foreach (UpgradableScriptableObject so in upgradeList) {
			so.parentPowerup = this;
		}
		/*powerupName = "Homing Missiles";		// May need to be generalized to be "HM Damage", "HM Spawn Chance", etc.
		powerupPrice = 2000;
		powerupInfo = "Upgrade the damage of homing missiles.";		// Also needs to be generalized.*/
	}





	public List<int> numMissilesList = new List<int> {
		// Indexed by level - 1
		5,		// Lvl 0
		6,		// Lvl 1
		7		// Lvl 2
	};

	public List<float> missileSpawnChanceList = new List<float> {
		// Indexed by level - 1
		0f,		// Lvl 0
		0.1f,		// Lvl 1
		0.15f		// Lvl 2
	};

}
