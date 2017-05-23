using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class UpgradableScriptableObject : ScriptableObject {

	// Holds the info of each upgrade for a powerup.
	// Extendable 
	public string powerupName;
	public int powerupPrice;
	public string powerupInfo;
	public int currLvl;
	public int MAX_LEVEL;	// Should go in UpgradableScrObj

	public PowerupScriptableObject parentPowerup;		// So each Upgrade knows which powerup it's upgrading

	// Overridden 
	public abstract int UpgradePowerup();
	public abstract int GetPrice();
}
