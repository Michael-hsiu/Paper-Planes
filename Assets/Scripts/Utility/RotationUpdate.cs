using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationUpdate : MonoBehaviour {

	public GameObject targetRotation;

	// Update is called once per frame
	void Update () {
		transform.localRotation = targetRotation.transform.rotation;	// Rotate shotSpawn relative to parent Player
		//Debug.Log(transform.rotation.z);
		/* 
		GameObject targetRotation = shotSpawn.transform.parent;	// This should be the Player
		shotSpawn.transform.localRotation = targetRotation.transform.rotation;	// Update shotSpawn rotation to align with parent
		*/
	}
}
