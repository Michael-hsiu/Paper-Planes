﻿using System.Collections;
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
		currLvl = 0;
		powerupName = "Missile Count: Tier " + (currLvl + 1);
		powerupPrice = pricesList[0];		// Default price is lvl 1 price
		powerupInfo = "Spawn a total of <b>" + numMissilesList[currLvl] + "</b> at a time.";
		MAX_LEVEL = pricesList.Count;

		// Maybe write in with JSON here for changeable values?
	}

	public override int UpgradePowerup() {
		HomingMissileScrObj parentPow = (HomingMissileScrObj) parentPowerup;
		if (currLvl <= MAX_LEVEL) {
			parentPow.numMissiles = numMissilesList [currLvl];	// Set the new numMissiles value
			currLvl += 1;		// Increase level of skill

			if (currLvl < MAX_LEVEL) {
				powerupName = "Missile Count: Tier " + (currLvl + 1);
				powerupPrice = pricesList[currLvl];
				powerupInfo = "Spawn a total of <b>" + numMissilesList[currLvl] + "</b> at a time.";
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
