using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PowerupScriptableObject : ScriptableObject {

	// The list of possible upgrades
	public List<UpgradableScriptableObject> upgradeList;		// The problem for JSON since it can't be serialized with JSONUtility

	//public abstract void SaveJSON();	// Save player progress / serialize ScrObj in a JSON using built-in JSONUtility

}
