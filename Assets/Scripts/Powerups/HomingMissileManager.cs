using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissileManager : MonoBehaviour {

	public GameObject missileSpawn;		// Assigned to normal player shotspawn in inspector
	public int numMissiles = 5;
	static HomingMissileManager _instance;
	public static HomingMissileManager Instance {
		get {
			if (_instance == null) {
				_instance = FindObjectOfType<HomingMissileManager> ();
			}
			return _instance;
		}
	}

	public void CreateMissiles() {
		if (missileSpawn.GetComponent<PlayerShotSpawn>() != null) {
			missileSpawn.GetComponent<PlayerShotSpawn>().CreateMissiles (numMissiles);	// Fire the missile!
		}
	}
}
