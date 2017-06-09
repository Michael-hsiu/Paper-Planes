using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManagerDontDestroy : MonoBehaviour {

	public static ManagerDontDestroy instance;
	void Awake(){

		DontDestroyOnLoad (this);
		if (instance == null) {
			instance = this;
		} else {
			DestroyImmediate(gameObject);
		}

  	}
}
