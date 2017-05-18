using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShotSpawn : ShotSpawn {

	public GameObject shot;
	public GameObject fasterShot;
	public GameObject ultimateShot;
	public GameObject waveShot;
	public GameObject missile;

	public bool ultimateShotEnabled = false;
	public bool waveShotEnabled = false;
	public bool multShotEnabled = false;
	public int ultiShotInterval = 5;
	public int waveShotInterval = 5;
	public int shotCounter = 0;
	public int waveShotCounter = 0;

	//public GameObject targetRotation;
	//public bool multiFire = false;

	public override void CreateShot(bool isFiringBuffed=false) {

		// The parent should be the player or enemy sprite
		targetRotation = transform.parent.parent.gameObject;		

		// Rotate shotSpawn relative to parent Player
		transform.localRotation = targetRotation.transform.rotation;	

		if (shotCounter == ultiShotInterval) {
			try {
				PoolManager.Instance.ReuseObject (ultimateShot, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation));
				//GameObject shot1 = Instantiate (ultimateShot, transform.position, transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;
				shotCounter = 0;
			} catch (MissingReferenceException e) {
				GameObject shot1 = Instantiate (ultimateShot, transform.position, transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;
				shotCounter = 0;
				Debug.Log ("MISSING REFERENCE - ulti shot!");
			}
		} else {
			try {
				PoolManager.Instance.ReuseObject (shot, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation));
				if (multShotEnabled) {
					// Left angled
					PoolManager.Instance.ReuseObject (shot, transform.position,transform.rotation * Quaternion.Inverse(Quaternion.Euler(new Vector3(targetRotation.transform.localEulerAngles.x, targetRotation.transform.localEulerAngles.y, targetRotation.transform.localEulerAngles.z - 5))));
					//GameObject shot2 = Instantiate (firingShip.fasterShot, transform.position,transform.rotation * Quaternion.Inverse(Quaternion.Euler(new Vector3(targetRotation.transform.localEulerAngles.x, targetRotation.transform.localEulerAngles.y, targetRotation.transform.localEulerAngles.z - 10)))) as GameObject;

					// Right angled
					PoolManager.Instance.ReuseObject (shot, transform.position,transform.rotation * Quaternion.Inverse(Quaternion.Euler(new Vector3(targetRotation.transform.localEulerAngles.x, targetRotation.transform.localEulerAngles.y, targetRotation.transform.localEulerAngles.z + 5))));
					//GameObject shot3 = Instantiate (firingShip.fasterShot, transform.position, transform.rotation * Quaternion.Inverse(Quaternion.Euler(new Vector3(targetRotation.transform.localEulerAngles.x, targetRotation.transform.localEulerAngles.y, targetRotation.transform.localEulerAngles.z + 10)))) as GameObject;

				}
			} catch (MissingReferenceException e) {
				GameObject shot1 = Instantiate (shot, transform.position, transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;
				Debug.Log ("MISSING REFERENCE - normal shot!");
			}
			//GameObject shot1 = Instantiate (shot, transform.position, transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;
		}

		shotCounter += 1;	// Increment shot count

	}

	// This is for homing missiles
	public void CreateMissiles(int numMissiles) {

		// The parent should be the player or enemy sprite
		targetRotation = transform.parent.parent.gameObject;		

		// Rotate shotSpawn relative to parent Player
		transform.localRotation = targetRotation.transform.rotation;	

		// Logic for firing multiple missiles in many directions
		while (numMissiles > 0) {
			Vector3 randomRot = RandomRotation ();
			Missile m = (Missile) PoolManager.Instance.ReuseObjectRef(missile, transform.position, Quaternion.Euler(randomRot) * Quaternion.Inverse (targetRotation.transform.rotation));
			//m.GetComponent<Rigidbody> ().AddForce(randomRot * 20);		// Random propulsion in semicircular range (0-180deg)
			numMissiles -= 1;
		}
	}



	public Vector3 RandomRotation() {

		// The parent should be the player or enemy sprite
		targetRotation = transform.parent.parent.gameObject;	

		// Get Euler repr of parent gameobject
		Vector3 pos = targetRotation.transform.position;

		float angle = Random.Range (0, 180);	// Missiles will only spread in a semicircle in front of player

		Vector3 result = new Vector3(1 * Mathf.Sin(angle * Mathf.Deg2Rad), 1 * Mathf.Cos(angle * Mathf.Deg2Rad), pos.z).normalized;
		return result;

	}

	public void EnableUltimateShot() {
		ultimateShotEnabled = true;
	}


	public void DisableUltimateShot() {
		ultimateShotEnabled = false;
	}

	public void EnableWaveShot() {
		waveShotEnabled = true;
	}


	public void DisableWaveShot() {
		waveShotEnabled = false;
	}
}