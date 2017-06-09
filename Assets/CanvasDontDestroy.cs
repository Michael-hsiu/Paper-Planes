using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasDontDestroy : MonoBehaviour {

	public static CanvasDontDestroy instance;
	void Awake(){

		DontDestroyOnLoad (this);
		if (instance == null) {
			instance = this;
		} else {
			DestroyImmediate(gameObject);
		}
    }
}
