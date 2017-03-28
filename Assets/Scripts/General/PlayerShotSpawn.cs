using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShotSpawn : ShotSpawn {

	public GameObject shot;
	public GameObject fasterShot;
	public GameObject ultimateShot;
	public GameObject waveShot;

	public bool ultimateShotEnabled = false;
	public bool waveShotEnabled = false;
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
			PoolManager.Instance.ReuseObject (ultimateShot, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation));
			//GameObject shot1 = Instantiate (ultimateShot, transform.position, transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;
			shotCounter = 0;
		} else {
			PoolManager.Instance.ReuseObject (shot, transform.position, transform.rotation * Quaternion.Inverse (targetRotation.transform.rotation));
			//GameObject shot1 = Instantiate (shot, transform.position, transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation)) as GameObject;
		}
		// Straight shot

		shotCounter += 1;	// Increment shot count

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