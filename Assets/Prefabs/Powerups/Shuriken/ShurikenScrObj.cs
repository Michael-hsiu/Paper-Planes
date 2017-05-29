using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class ShurikenScrObj : PowerupScriptableObject {

	// Homing Missile Powerup holds a reference to this SO; changes this SO if a powerup is upgraded.
	// Upgrades: damage, duration, spawn chance

	// Status vars w/ default values for ref (un-upgraded)
	public int damage = 40;		// [SATISFIES damage increase]
	public float duration = 5.0f;
	public float shurikenSpawnChance = 0.0f;	// Chance of spawning another shuriken upon shuriken death
	public GameObject shuriken;		// Missile fab

	// Info for Shop
	// This needs to be changed, since this scrObj doesn't need to hold this info, each ENHANCEMENT needs to hold this info.
	// So we need to store a list of PowerupScrObj that hold the info of each enhancement.
	// We instantiate a new Shop Slot for each entry in our list.
	void OnEnable() {
		foreach (UpgradableScriptableObject so in upgradeList) {
			so.parentPowerup = this;
		}
			
		// Temporary reset logic before JSON / player progress saving
		damage = 40;
		duration = 5.0f;
		shurikenSpawnChance = 0.0f;
	}
}
