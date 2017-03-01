using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurretShotSpawn : MonoBehaviour {


	/** INSTANCE VARS */

	[Header("References")]
	public GameObject targetRotation;
	private GameObject shotContainer;


	/** HELPER METHODS */

	public void CreateShot() {

		// The parent should be the player or enemy sprite
		targetRotation = transform.parent.gameObject;		

		// Rotate shotSpawn relative to parent Player
		transform.localRotation = targetRotation.transform.rotation;	

		// Create the shot
		GameObject shot = Instantiate (targetRotation.transform.GetComponent<Turret>().shot, transform.position, 
			transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;

	}
}