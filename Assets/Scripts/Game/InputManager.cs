using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour {

	private static InputManager instance;
	public static InputManager Instance {
		get {
			if (instance == null) {
				instance = new InputManager();
			}
			return instance;
		}
	}

	void Awake() {
		if (instance == null) {
			instance = this;
		} else {
			DestroyImmediate(this);
		}
	}

	public InputComponent GetActiveInput() {
		//Debug.Log ("CHILDCOUNT: " + transform.childCount);
		for (int i = 0; i < transform.childCount; i++) {
			GameObject currChild = transform.GetChild (i).gameObject;
			//Debug.Log ("LOOP ITER: " + i);
			if (currChild.activeSelf) {
				return currChild.GetComponent<InputComponent> ();
			}
		}
		Debug.Log ("NO INPUTS FOUND");
		return null;
	}

}
