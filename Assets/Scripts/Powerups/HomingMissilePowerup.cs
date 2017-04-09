using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissilePowerup : Powerup {

	public int numMissiles = 5;

	public override void ActivatePower() {

		HomingMissileManager.Instance.CreateMissiles (numMissiles);		// Fire the missiles (this -> HomingMissileManager -> PlayerSS)
	}
}
