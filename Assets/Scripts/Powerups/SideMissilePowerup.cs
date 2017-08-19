using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SideMissilePowerup : Powerup {

	public override void ActivatePowerup() {
		if (GameManager.Singleton.playerShip.sideMissileEnabled) {
			endTime = endTime + powerDuration;						// Record extended powerup time

			// This doesn't work, since each powerup obj has its own script, but we may implement shot-related powerups differently to avoid this problem
			CancelInvoke ("DeactivatePower");						// Enables powerup duration extension
			Invoke ("DeactivatePower", endTime - Time.time);					// Extend powerup time
		}
		GameManager.Singleton.playerShip.sideMissileEnabled = true;
		endTime = Time.time + powerDuration;
		Invoke ("DeactivatePower", powerDuration);	// Prime the deactivation call
	}

	public override void DeactivatePowerup() {
		GameManager.Singleton.playerShip.sideMissileEnabled = false;
	}
}
