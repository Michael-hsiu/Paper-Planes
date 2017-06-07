using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour {

	public GameObject inputComponent;

	private static InputManager instance;
	public static InputManager Singleton {
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
		inputComponent = GetActiveInput ();
		OnLevelStandbyDisablePlayerInput ();
	}

	void Start() {
		GameManager.Singleton.StartLevelEvent += OnLevelStartEnablePlayerInput;
		GameManager.Singleton.EndLevelEvent += OnLevelStandbyDisablePlayerInput;
	}

	// SUBSCRIBERS aka event handlers
	public void OnLevelStartEnablePlayerInput() {
		inputComponent.SetActive (true);
	}

	public void OnLevelStandbyDisablePlayerInput() {
		inputComponent.SetActive (false);
	}
	// END subscriber list.


	public GameObject GetActiveInput() {
		for (int i = 0; i < transform.childCount; i++) {
			GameObject currChild = transform.GetChild (i).gameObject;
			//Debug.Log ("LOOP ITER: " + i);
			if (currChild.activeSelf) {
				return currChild;
			}
		}
		Debug.Log ("NO INPUTS FOUND");
		return null;
	}

	public InputComponent GetInputComponent() {
		return inputComponent.GetComponent<InputComponent> ();
	}
}
