using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveShotSpawn : ShotSpawn {

	public GameObject waveShot;

	public float waveChance = 0.15f;
	public bool waveShotEnabled = false;
	public int waveShotCounter = 0;

	public override void CreateShot(bool isFiringBuffed=false) {

		// The parent should be the player or enemy sprite
		targetRotation = transform.parent.parent.gameObject;		

		// Rotate shotSpawn relative to parent Player
		transform.localRotation = targetRotation.transform.rotation;	

		if (GameManager.Singleton.playerShip.randomVal <= waveChance) {
			try {
				if (gameObject.CompareTag("RightSideSS")) {
					PoolManager.Instance.ReuseObject (waveShot, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation) * Quaternion.Euler(0, 0, 90));
				} else {
					PoolManager.Instance.ReuseObject (waveShot, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation) * Quaternion.Euler(0, 0, -90));
				}
				//Debug.Log("SHOOTING 1");
			} catch (MissingReferenceException e) {
				GameObject shot1 = Instantiate (waveShot, transform.position, transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;
				Debug.Log ("MISSING REFERENCE - wave shot! #1");
			}
		}
	}
		
	public void EnableWaveShot() {
		waveShotEnabled = true;
	}


	public void DisableWaveShot() {
		waveShotEnabled = false;
	}
}