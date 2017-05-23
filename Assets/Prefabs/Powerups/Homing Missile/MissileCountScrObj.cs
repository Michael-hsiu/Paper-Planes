using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class MissileCountScrObj : UpgradableScriptableObject {

	// Prices for each diff. upgrade?
	public List<int> pricesList = new List<int> {
		// Indexed by level - 1
		1000,		// Lvl 0
		3000,		// Lvl 1
		5000		// Lvl 2

	};

	public List<int> numMissilesList = new List<int> {
		// Indexed by level - 1
		5,		// Lvl 0
		6,		// Lvl 1
		7		// Lvl 2
	};

	void OnEnable() {
		// Set all the data about this powerup
		powerupName = "Missile Count";
		powerupPrice = pricesList[0];
		powerupInfo = "DESCRIPTION FOR MISSILE COUNT";
		currLvl = 0;
		MAX_LEVEL = pricesList.Count;
	}

	public override void UpgradePowerup() {
		HomingMissileScrObj parentPow = (HomingMissileScrObj) parentPowerup;
		if (currLvl < MAX_LEVEL) {
			currLvl += 1;		// Increase level of skill
			parentPow.numMissiles = numMissilesList [currLvl];	// Set the new numMissiles value
		} else {
			Debug.Log ("ALREADY MAXED OUT " + powerupName + "AT MAX LVL OF " + currLvl);
		}
	}
}
