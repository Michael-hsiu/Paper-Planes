using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveShotSpawn : ShotSpawn {

	public GameObject waveShot;
	public GameObject straightMissile;

	public bool waveShotEnabled = false;
	public int waveShotCounter = 0;

	public override void CreateShot(bool isFiringBuffed=false) {

		// The parent should be the player or enemy sprite
		targetRotation = transform.parent.parent.gameObject;		

		// Rotate shotSpawn relative to parent Player
		transform.localRotation = targetRotation.transform.rotation;	

		if (gameObject.CompareTag("RightSideSS")) {
			PoolManager.Instance.ReuseObject (waveShot, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation) * Quaternion.Euler(0, 0, 90));
		} else {
			PoolManager.Instance.ReuseObject (waveShot, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation) * Quaternion.Euler(0, 0, -90));
		}
	}

	// This is for front-facing missiles
	public void CreateFrontMissiles() {
		// The parent should be the player or enemy sprite
		targetRotation = transform.parent.parent.gameObject;		

		// Rotate shotSpawn relative to parent Player
		transform.localRotation = targetRotation.transform.rotation;	

		PoolManager.Instance.ReuseObject (straightMissile, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation));
	}

	public void EnableWaveShot() {
		waveShotEnabled = true;
	}


	public void DisableWaveShot() {
		waveShotEnabled = false;
	}
}