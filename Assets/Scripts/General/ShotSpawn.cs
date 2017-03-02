using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShotSpawn : MonoBehaviour {


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

		// Create the shote
		FiringShip firingShip = targetRotation.transform.GetComponent<IFires>() as FiringShip;		// We know that it'll be a firingship

		GameObject shot = Instantiate (firingShip.shot, transform.position, 
			transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;

	}

}