using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSMManager : MonoBehaviour {

	public GameObject player;

	private static FSMManager instance;
	public static FSMManager Instance {
		get {
			if (instance == null) {
				instance = new FSMManager();
			}
			return instance;
		}
	}

	void Awake() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
	}
}
