using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class TriFirePowerup : Powerup {

	private string id = "TriFirePowerup";

	public override void ActivatePower() {

		//endTime = Time.time + powerDuration;
		timeObtained = Time.time;

		Debug.Log ("POWERUP ACTIVATED!: " + id);	// Identify powerup

		PlayerShip.OldShotSpawnsContainer curr = player.shotSpawnDictionary [PlayerShip.Weapons.LEVEL_TWO];
		PlayerShip.OldShotSpawnsContainer activePowerup = (PlayerShip.OldShotSpawnsContainer) player.activeShotSpawn.Peek ();	// Get the active powerup's shotspawns

		int comp = curr.CompareTo (activePowerup);		// Compare to most recent entry in Stack

		if (!activePowerup.WeaponID.Equals(PlayerShip.Weapons.LEVEL_ONE)) {
			if (comp == 0) {
				// [POWERUPS EQUAL] Add full duration
				CancelInvoke ("DeactivatePower");			// Enables powerup duration extension
				Invoke ("DeactivatePower", (PlayerShip.OldShotSpawnsContainer.powerupExpirationTime - Time.time) + powerDuration);	// Reset to state before powerup obtained

				Debug.Log("REMAINING TIME: " + (PlayerShip.OldShotSpawnsContainer.powerupExpirationTime - Time.time));

				endTime = Time.time + (PlayerShip.OldShotSpawnsContainer.powerupExpirationTime - Time.time) + powerDuration;		// Record end time of powerup
				PlayerShip.OldShotSpawnsContainer.powerupExpirationTime = endTime;						// Record new end time

				Debug.Log("EQUAL POWERUP!");
			} else if (comp == 1) {
				// [NEW POWERUP BETTER] Deque and add more duration to new (hardcoded to 1/2)
				player.RemovePowerup();							// Remove last powerup
				player.SetWeapons (PlayerShip.Weapons.LEVEL_TWO, this);		// Set weapons

				float remainingTime = PlayerShip.OldShotSpawnsContainer.powerupExpirationTime - Time.time;
				Debug.Log("REMAINING TIME: " + remainingTime);
				Debug.Log(String.Format("ID: {0}, ENDTIME: {1}", id, PlayerShip.OldShotSpawnsContainer.powerupExpirationTime));		// Test to see if we're starting this new powerup at correct time

				endTime = PlayerShip.OldShotSpawnsContainer.powerupExpirationTime + powerDuration * 0.5f;		// Set new end time
				PlayerShip.OldShotSpawnsContainer.powerupExpirationTime = endTime;						// Record new end time

				Debug.Log ("ENDTIME: " + endTime);

				activePowerup.activePowerup.CancelInvoke ("DeactivatePower");	// Stop the other power from deactivating (hence popping the better powerup)
				CancelInvoke ("DeactivatePower");								// Enables powerup duration extension
				Invoke ("DeactivatePower", endTime - Time.time);				// Reset to state after extended duration

				Debug.Log(String.Format("ID: {0}, REMAININGTIME2: {1} ; ENDTIME: {2}", id, (endTime - Time.time), endTime));

				Debug.Log("GOT BETTER POWERUP!");
			} else {
				// [OLD POWERUP BETTER] No duration added from worse powerup (no effect)
				Debug.Log("GOT WORSE POWERUP!");
			}
		} else {
			// [NO POWERUPS ACTIVE] so just add new powerup!
			player.SetWeapons (PlayerShip.Weapons.LEVEL_TWO, this);	// Set weapons

			endTime = Time.time + powerDuration;
			PlayerShip.OldShotSpawnsContainer.powerupExpirationTime = endTime;		// Set end time

			PlayerShip.OldShotSpawnsContainer activePowerup2 = (PlayerShip.OldShotSpawnsContainer) player.activeShotSpawn.Peek ();	// Get the active powerup's shotspawns
			activePowerup2.activePowerup = this;

			CancelInvoke ("DeactivatePower");			// Enables powerup duration extension
			Invoke ("DeactivatePower", powerDuration);	// Reset to state before powerup obtained

			Debug.Log("GOT FIRST POWERUP (NONE ACTIVE PRIOR)!");
		}
		Debug.Log (String.Format("{0} POWERUP ACTIVATED @: " + Time.time, id));	// Identify powerup

	}

	public override void DeactivatePower() {

		//player.activeSS = prevSS;

		// Unprotected deque op
		if (!player.activeShotSpawn.Peek ().WeaponID.Equals (PlayerShip.Weapons.LEVEL_ONE)) {
			player.activeShotSpawn.Pop ();
		}
		base.DeactivatePower ();
	}
}
