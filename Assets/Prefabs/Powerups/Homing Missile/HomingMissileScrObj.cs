using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;

[CreateAssetMenu]
public class HomingMissileScrObj : PowerupScriptableObject {

	// Homing Missile Powerup holds a reference to this SO; changes this SO if a powerup is upgraded.

	// Status vars w/ default values for ref (un-upgraded)
	public int damage = 40;						// Overwrite from JSON
	public int numMissiles = 4;					// Overwrite from JSON
	public float missileSpawnChance = 0.0f;		// Overwrite from JSON
	public GameObject missile;		// Missile fab

	public readonly string damageStr = "HMSOdamageStr";
	public readonly string numMissilesStr = "HMSOnumMissiles";
	public readonly string missileSpawnChanceStr = "HMSOmissileSpawnChanceStr";

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

		//LoadJSON ();
		//SaveJSON ();
	}

	public override void LoadSavedData() {
		PlayerPrefs.DeleteAll ();			// Un-comment to save player progress
		damage = PlayerPrefs.HasKey (damageStr) ? PlayerPrefs.GetInt (damageStr) : 40;
		numMissiles = PlayerPrefs.HasKey (numMissilesStr) ? PlayerPrefs.GetInt (numMissilesStr) : 4;
		missileSpawnChance = PlayerPrefs.HasKey (missileSpawnChanceStr) ? PlayerPrefs.GetFloat (missileSpawnChanceStr) : 0.0f;
	}

	// ONLY this level needs to be serialized. Every other ScrObj it references is ok as is, are just data containers.
	// Reference: https://www.youtube.com/watch?v=7AgdALFE758
	/*public void SaveJSON() {
		string newJSON = JsonUtility.ToJson (this);
		string fileName = Path.Combine (Application.persistentDataPath, (this.name + ".json"));

		// Check if JSON for this scrObj already exists
		if (File.Exists (fileName)) {
			File.Delete (fileName);
		}

		// Write the new JSON
		File.WriteAllText (fileName, newJSON);
		Debug.Log (this.GetType () + " saved to " + fileName);
	}

	public void LoadJSON() {
		string fileName = Path.Combine (Application.persistentDataPath, (this.name + ".json"));


		try {
			// Check if JSON for this scrObj already exists
			if (File.Exists (fileName)) {
				string jsonText = File.ReadAllText (fileName);
				Debug.Log (jsonText);
				JsonUtility.FromJsonOverwrite (fileName, this);
				Debug.Log ("SUCCESSFULLY OVERRIDING JSON for " + this.name);
			} else {
				Debug.Log ("NO JSON EXISTS FOR " + this.name);
			}
		} catch (Exception e) {
			Debug.Log (e);
		}

	}*/
}
