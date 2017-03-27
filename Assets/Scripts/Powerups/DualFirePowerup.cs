using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DualFirePowerup : Powerup {

	public override void ActivatePower() {
		PlayerShip.SSContainer curr = player.ssDict [id];
		PlayerShip.SSContainer activePowerup = (PlayerShip.SSContainer) player.activeSS.Peek ();	// Get the active powerup's shotspawns
		bool comp = curr.compareTo (activePowerup);		// Compare to most recent entry in Stack
		if (comp == 0) {
			// [POWERUPS EQUAL] Add full duration
			CancelInvoke ("DeactivatePower");			// Enables powerup duration extension
			Invoke ("DeactivatePower", powerDuration);	// Reset to state before powerup obtained
			endTime = Time.time + powerDuration;		// Record end time of powerup
		} else if (comp == -1) {
			// [NEW POWERUP BETTER] Deque and add more duration to new (hardcoded to 1/2)
			player.RemovePowerup();							// Remove last powerup
			player.SetWeapons (PlayerShip.Weapons.DUAL);	// Set weapons
			endTime = endTime + powerDuration * 0.5f;		// Set new end time
			CancelInvoke ("DeactivatePower");				// Enables powerup duration extension
			Invoke ("DeactivatePower", endTime - Time.time);	// Reset to state after extended duration
		} else {
			// [OLD POWERUP BETTER] No duration added from worse powerup (no effect)
		}
		//base.ActivatePower ();
	}

	public override void DeactivatePower() {

		//player.activeSS = prevSS;

		// Unprotected deque op
		player.activeSS.Pop();
		base.DeactivatePower ();
	}
}
