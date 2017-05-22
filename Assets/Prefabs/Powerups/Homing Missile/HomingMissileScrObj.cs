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
	public int currDmgLevel = 0;		// 1) Damage...
	public int currNumMissilesLevel = 0;	// 2) Num missiles spawned...
	public int currMissileSpawnChanceLevel = 0;		// and 3) Chance of a missile spawning more missiles

	public int MAX_LEVEL = 2;	// Should go in UpgradableScrObj

	// Info for Shop
	// This needs to be changed, since this scrObj doesn't need to hold this info, each ENHANCEMENT needs to hold this info.
	// So we need to store a list of PowerupScrObj that hold the info of each enhancement.
	// We instantiate a new Shop Slot for each entry in our list.
	void OnEnable() {
		/*powerupName = "Homing Missiles";		// May need to be generalized to be "HM Damage", "HM Spawn Chance", etc.
		powerupPrice = 2000;
		powerupInfo = "Upgrade the damage of homing missiles.";		// Also needs to be generalized.*/
	}

	// Prices for each diff. upgrade?
	public List<int> pricesList = new List<int> {
		// Indexed by level - 1
		2000,		// Lvl 0
		4000,		// Lvl 1
		8000		// Lvl 2

	};

	public List<int> damagesList = new List<int> {
		// Indexed by level - 1
		50,		// Lvl 0
		55,		// Lvl 1
		60		// Lvl 2

	};

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
