using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class ShurikenDurationScrObj : UpgradableScriptableObject {

	// Prices for each diff. upgrade?
	public List<int> pricesList = new List<int> {
		// Indexed by level - 1
		2000,		// Lvl 0
		4000,		// Lvl 1
		8000		// Lvl 2

	};

	public List<float> durationList = new List<float> {
		// Indexed by level - 1
		5.0f,		// Lvl 0
		5.5f,		// Lvl 1
		6.0f		// Lvl 2

	};

	void OnEnable() {
		// Set all the data about this powerup
		currLvl = 0;
		powerupName = "Shuriken Duration: Tier " + (currLvl + 1);
		powerupPrice = pricesList[0];		// Default price is lvl 1 price
		powerupInfo = "A shuriken lasts for <b>" + durationList[currLvl] + "</b> seconds.";
		MAX_LEVEL = pricesList.Count;
	}

	public override int UpgradePowerup() {
		ShurikenScrObj parentPow = (ShurikenScrObj) parentPowerup;
		if (currLvl <= MAX_LEVEL) {
			parentPow.duration = durationList [currLvl];	// Vars w/ 'level' are the index vars
			currLvl += 1;		// Increase level of skill

			if (currLvl < MAX_LEVEL) {
				powerupName = "Shuriken Duration: Tier " + (currLvl + 1);
				powerupPrice = pricesList[currLvl];
				powerupInfo = "A shuriken lasts for <b>" + durationList[currLvl] + "</b> seconds.";
			}

			return 1;			// Note if purchase is successful
		} else {
			Debug.Log ("ALREADY MAXED OUT " + powerupName + " AT MAX LVL OF " + currLvl);
			return -1;			// Note that powerup upgrades are already maxed out
		}
	}

	public override int GetPrice() {
		if (currLvl < MAX_LEVEL) {
			//powerupPrice = pricesList [currLvl];
			return powerupPrice;
		} else {
			Debug.Log ("ALREADY MAXED OUT " + powerupName + " AT MAX LVL OF " + (currLvl - 1));
			return -1;
		}
	}
}
