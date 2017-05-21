using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissileScrObj : ScriptableObject {

	// Homing Missile Powerup holds a reference to this SO; changes this SO if a powerup is upgraded.
	public int numMissiles = 5;
	public int damage = 50;
	public GameObject missile;		// May change to reproducing missile?

	// 3 categories of upgrades...
	public int currDmgLevel = 0;		// 1) Damage...
	public int currNumMissilesLevel = 0;	// 2) Num missiles spawned...
	public int currMissileSpawnChanceLevel = 0;		// and 3) Chance of a missile spawning more missiles
	public int MAX_LEVEL = 2;

	public List<int> damages = new List<int> {
		// Indexed by level - 1
		50,		// Lvl 0
		55,		// Lvl 1
		60		// Lvl 2

	};

	public List<int> numMissilesList = new List<int> {
		// Indexed by level - 1
		5,		// Lvl 0
		6,		// Lvl 1
		7		// Lvl 2
	};

	public List<int> missileSpawnChanceList = new List<int> {
		// Indexed by level - 1
		0,		// Lvl 0
		0.1,		// Lvl 1
		0.15		// Lvl 2
	};

}
