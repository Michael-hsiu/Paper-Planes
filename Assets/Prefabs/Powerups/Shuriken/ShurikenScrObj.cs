using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class ShurikenScrObj : PowerupScriptableObject {

	// Upgrades: damage, duration, growth chance

	// Status vars w/ default values for ref (un-upgraded)
	public int damage = 40;		// [SATISFIES damage increase]
	public float duration = 5.0f;
	public int damageBoundary = 100;
	public float sizeMultiplier = 1.0f;	// Chance of spawning another shuriken upon shuriken death
	public GameObject shuriken;		// Missile fab

	public readonly string damageStr = "SSOdamageStr";
	public readonly string durationStr = "SSOnumMissiles";
	public readonly string shurikenSizeStr = "SSOshurikenSizeStr";

	// Info for Shop
	// This needs to be changed, since this scrObj doesn't need to hold this info, each ENHANCEMENT needs to hold this info.
	// So we need to store a list of PowerupScrObj that hold the info of each enhancement.
	// We instantiate a new Shop Slot for each entry in our list.
	void OnEnable() {
		foreach (UpgradableScriptableObject so in upgradeList) {
			so.parentPowerup = this;
		}

		// Load existing prefs if exist
		LoadSavedData ();
	}

	public override void LoadSavedData() {
		//PlayerPrefs.DeleteAll ();			// Un-comment to save player progress
		damage = PlayerPrefs.HasKey (damageStr) ? PlayerPrefs.GetInt (damageStr) : 40;
		duration = PlayerPrefs.HasKey (durationStr) ? PlayerPrefs.GetFloat (durationStr) : 30.0f;
		sizeMultiplier = PlayerPrefs.HasKey (shurikenSizeStr) ? PlayerPrefs.GetFloat (shurikenSizeStr) : 1.0f;
	}
}
