using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShotSpawn : ShotSpawn {

	public GameObject shot;
	public GameObject fasterShot;

	//public GameObject targetRotation;
	//public bool multiFire = false;

	public override void CreateShot(bool isFiringBuffed=false) {

		// The parent should be the player or enemy sprite
		targetRotation = transform.parent.parent.gameObject;		

		// Rotate shotSpawn relative to parent Player
		transform.localRotation = targetRotation.transform.rotation;	

		if (!isFiringBuffed) {
			// Straight shot
			GameObject shot1 = Instantiate (shot, transform.position, 
				transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;

			if (multiFire) {
				// Left angled
				GameObject shot2 = Instantiate (shot, transform.position, 
					transform.rotation * Quaternion.Inverse(Quaternion.Euler(new Vector3(targetRotation.transform.localEulerAngles.x, targetRotation.transform.localEulerAngles.y, targetRotation.transform.localEulerAngles.z - 10)))) as GameObject;

				// Right angled
				GameObject shot3 = Instantiate (shot, transform.position, 
					transform.rotation * Quaternion.Inverse(Quaternion.Euler(new Vector3(targetRotation.transform.localEulerAngles.x, targetRotation.transform.localEulerAngles.y, targetRotation.transform.localEulerAngles.z + 10)))) as GameObject;

			}
		} else {
			// Straight shot
			GameObject shot1 = Instantiate (fasterShot, transform.position, 
				transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;

			if (multiFire) {
				// Left angled
				GameObject shot2 = Instantiate (fasterShot, transform.position, 
					transform.rotation * Quaternion.Inverse(Quaternion.Euler(new Vector3(targetRotation.transform.localEulerAngles.x, targetRotation.transform.localEulerAngles.y, targetRotation.transform.localEulerAngles.z - 10)))) as GameObject;

				// Right angled
				GameObject shot3 = Instantiate (fasterShot, transform.position, 
					transform.rotation * Quaternion.Inverse(Quaternion.Euler(new Vector3(targetRotation.transform.localEulerAngles.x, targetRotation.transform.localEulerAngles.y, targetRotation.transform.localEulerAngles.z + 10)))) as GameObject;

			}
		}
	}
}