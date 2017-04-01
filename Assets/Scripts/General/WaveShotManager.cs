using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveShotManager : MonoBehaviour {

	public List<GameObject> waveSpawns = new List<GameObject>();
	public bool waveShotEnabled = false;
	public float randomVal;

	public bool WaveShotEnabled {
		get
		{
			return waveShotEnabled;
		}
		set
		{
			waveShotEnabled = value;
		}
	}

	static WaveShotManager _instance;

	public static WaveShotManager Instance {
		get {
			if (_instance == null) {
				_instance = FindObjectOfType<WaveShotManager> ();
			}
			return _instance;
		}
	}


	public void CreateWaveShots() {
		if (waveShotEnabled) {
			randomVal = Random.value;		// Set the random value
			foreach(GameObject go in waveSpawns) {
				if (go.GetComponent<ShotSpawn>() != null) {
					go.GetComponent<ShotSpawn>().CreateShot ();	// Fire the shot!
				}
			}
		}
	}
}
