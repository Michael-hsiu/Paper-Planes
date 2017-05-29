using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class MissileSpawnChanceScrObj : UpgradableScriptableObject {

	// Prices for each diff. upgrade?
	public List<int> pricesList = new List<int> {
		// Indexed by level - 1
		2500,		// Lvl 0
		5500,		// Lvl 1
		8000		// Lvl 2

	};

	public List<float> spawnChancesList = new List<float> {
		// Indexed by level - 1
		0.1f,		// Lvl 0
		0.3f,		// Lvl 1
		0.5f		// Lvl 2
	};

	void OnEnable() {
		// Set all the data about this powerup
		powerupName = "Missile Spawn Chance: Tier " + (currLvl + 1);
		powerupPrice = pricesList[0];
		powerupInfo = "Exploding missiles have a <b>" + spawnChancesList[currLvl] + "</b> chance of spawning more missiles.";
		currLvl = 0;
		MAX_LEVEL = pricesList.Count;

		// Maybe write in with JSON here for changeable values?
	}

	public override int UpgradePowerup() {
		HomingMissileScrObj parentPow = (HomingMissileScrObj) parentPowerup;
		if (currLvl <= MAX_LEVEL) {
			parentPow.missileSpawnChance = spawnChancesList [currLvl];	// Sets the new MISSILE SPAWN CHANCE!
			currLvl += 1;		// Increase level of skill

			if (currLvl < MAX_LEVEL) {
				powerupName = "Missile Damage: Tier " + (currLvl + 1);
				powerupPrice = pricesList[currLvl];
				powerupInfo = "Your missiles do <b>" + spawnChancesList[currLvl] + "</b> more damage.";
			}

			return 1;			// Note if purchase is successful
		} else {
			Debug.Log ("ALREADY MAXED OUT " + powerupName + "AT MAX LVL OF " + (currLvl - 1));
			return -1;			// Note that powerup upgrades are already maxed out
		}
	}

	public override int GetPrice() {
		if (currLvl < MAX_LEVEL) {
			powerupPrice = pricesList [currLvl];
			return powerupPrice;
		} else {
			Debug.Log ("ALREADY MAXED OUT " + powerupName + "AT MAX LVL OF " + (currLvl - 1));
			return -1;
		}
	}
}