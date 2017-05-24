using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnersDontDestroy : MonoBehaviour {

	public static SpawnersDontDestroy instance;
	void Awake(){

		DontDestroyOnLoad (this);
		if (instance == null) {
			instance = this;
		} else {
			DestroyImmediate(gameObject);
		}
	}
}
