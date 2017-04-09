using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissileManager : MonoBehaviour {

	public GameObject missileSpawn;		// Assigned to normal player shotspawn in inspector
	public GameObject missile;			// Assigned in inspector
	public GameObject player;
	static HomingMissileManager _instance;
	public static HomingMissileManager Instance {
		get {
			if (_instance == null) {
				_instance = FindObjectOfType<HomingMissileManager> ();
			}
			return _instance;
		}
	}

	void Start() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
	}

	public void CreateMissiles(int numMissiles) {
		if (missileSpawn.GetComponent<PlayerShotSpawn>() != null) {
			missileSpawn.GetComponent<PlayerShotSpawn>().CreateMissiles (numMissiles);	// Fire the missiles!
			Debug.Log ("MISSILE MANAGER ACCESSED");
		}
	}
}
