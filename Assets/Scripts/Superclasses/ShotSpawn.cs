using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShotSpawn : MonoBehaviour {


	/** INSTANCE VARS */

	[Header("References")]
	public GameObject targetRotation;


	/** HELPER METHODS */

	public void CreateShot() {
		targetRotation = transform.parent;		// The parent should be the player or enemy sprite
		transform.localRotation = targetRotation.transform.rotation;	// Rotate shotSpawn relative to parent Player

		Instantiate (targetRotation.transform.GetComponent<FiringShip>().shot, transform.position, 
						transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation));
	}
}
