using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EngineUpdate : MonoBehaviour {

	public Transform playerTransform;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.rotation = playerTransform.rotation;
		transform.position = new Vector3 (playerTransform.position.x, playerTransform.position.y  - 1.5f, playerTransform.position.z);
	}
}
