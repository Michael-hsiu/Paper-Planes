using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class MissileDamageScrObj : UpgradableScriptableObject {

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
		
	void OnEnable() {
		// Set all the data about this powerup
		//PlayerPrefs.DeleteAll ();
		id = this.name + "currLvl";
		currLvl = PlayerPrefs.HasKey (id) ? PlayerPrefs.GetInt (id) : 0;
		Debug.Log (this.name + " CURR LVL: " + currLvl);

		// Update fields based on 'currLvl'
		if (currLvl == MAX_LEVEL) {
			powerupName = "Missile Damage: Tier MAX";		// Currently at max lvl
			powerupPrice = pricesList[currLvl - 1];		// Currently at max lvl, so use maximum price
			powerupInfo = "Your missiles do <b>" + damagesList[currLvl - 1] + "</b> damage.";

		} else {
			powerupName = "Missile Damage: Tier " + (currLvl + 1);
			powerupPrice = pricesList[currLvl];
			powerupInfo = "Your missiles do <b>" + damagesList[currLvl] + "</b> damage.";
		}
		MAX_LEVEL = pricesList.Count;
	}

	public override int UpgradePowerup() {
		HomingMissileScrObj parentPow = (HomingMissileScrObj) parentPowerup;
		if (currLvl <= MAX_LEVEL) {
			parentPow.damage = damagesList [currLvl];	// Vars w/ 'level' are the index vars

			currLvl += 1;		// Increase level of skill
			PlayerPrefs.SetInt (id, currLvl);

			if (currLvl < MAX_LEVEL) {
				powerupName = "Missile Damage: Tier " + (currLvl + 1);
				powerupPrice = pricesList[currLvl];
				powerupInfo = "Your missiles do <b>" + damagesList[currLvl] + "</b> damage.";
				//parentPow.SaveJSON ();
			}

			return 1;			// Note if purchase is successful
		} else {
			Debug.Log ("ALREADY MAXED OUT " + powerupName + "AT MAX LVL OF " + currLvl);
			return -1;			// Note that powerup upgrades are already maxed out
		}
	}

	public override int GetPrice() {
		if (currLvl < MAX_LEVEL) {
			//powerupPrice = pricesList [currLvl];
			return powerupPrice;
		} else {
			Debug.Log ("ALREADY MAXED OUT " + powerupName + "AT MAX LVL OF " + (currLvl - 1));
			return -1;
		}
	}
}
