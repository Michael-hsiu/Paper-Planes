using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	public Vector3 offset;

	void Awake() {
		DontDestroyOnLoad (this);
	}

	void Start() {
		offset = transform.position - GameManager.Singleton.playerShip.transform.position;
	}

	void LateUpdate() {
		transform.position = GameManager.Singleton.playerShip.gameObject.transform.position + offset;		// Camera follows the player
	}

}
