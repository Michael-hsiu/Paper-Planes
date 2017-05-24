using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontDestroy : MonoBehaviour {

	public static DontDestroy instance;
	public string id;

	void Awake() {
		
		DontDestroyOnLoad (this);


	}

	void Start() {
		// This prevents GO duplication. Alternatively, as found online,
		// could put Managers / persistent UI / other into a loading / splash
		// screen that players can't return to, preventing duplication.
		if (instance == null) {
			instance = this;
		} else {
			Destroy (this.gameObject);
		}
	}
}
