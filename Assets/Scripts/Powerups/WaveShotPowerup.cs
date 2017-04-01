using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveShotPowerup : Powerup {

	public override void ActivatePower() {
		if (WaveShotManager.Instance.WaveShotEnabled) {
			endTime = endTime + powerDuration;						// Record extended powerup time

			// This doesn't work, since each powerup obj has its own script, but we may implement shot-related powerups differently to avoid this problem
			CancelInvoke ("DeactivatePower");						// Enables powerup duration extension
			Invoke ("DeactivatePower", endTime - Time.time);					// Extend powerup time
		}
		WaveShotManager.Instance.WaveShotEnabled = true;
		endTime = Time.time + powerDuration;
		Invoke ("DeactivatePower", powerDuration);	// Prime the deactivation call
	}

	public override void DeactivatePower() {
		WaveShotManager.Instance.WaveShotEnabled = false;
	}
}
