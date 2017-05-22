using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class UpgradableScriptableObject : ScriptableObject {

	// Holds the info of each upgrade for a powerup.
	// Extendable 
	public string powerupName;
	public int powerupPrice;
	public string powerupInfo;

}
