using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class FiringPowerup : Powerup 
{

	// Check active firing powerup. If normal, add 1. If enhanced already, add 1 and extend the time.
	public override void ActivatePower ()
	{

		timeObtained = Time.time;					// Record time powerup was obtained
	
		PlayerShip.OldShotSpawnsContainer activePowerup = (PlayerShip.OldShotSpawnsContainer) (player.activeShotSpawn.Peek ());	// Get the active powerup's shotspawns
		PlayerShip.Weapons activeWeaponType = activePowerup.WeaponID;
		Debug.Log(activeWeaponType);
		// Choose the new list of shotspawns and set the end time for powerup.

		// Case 1 - No firing powerups active.
		if (activeWeaponType.Equals (PlayerShip.Weapons.LEVEL_ONE)) {

			player.SetWeapons ((PlayerShip.Weapons) (PlayerShip.Weapons.LEVEL_ONE + 1), this);		// Set weapons

			endTime = timeObtained + powerDuration;									// Record end time of powerup
			PlayerShip.OldShotSpawnsContainer.powerupExpirationTime = endTime;					// Record new end time

		} 

		// Case 2 - A firing powerup that is not the best powerup is active.
		else if (activeWeaponType < PlayerShip.Weapons.LEVEL_FOUR) {

			//activePowerup.activePowerup.CancelInvoke ("DeactivatePower");		// We're going to set a new deactivation call!
			player.RemovePowerup ();														// Remove last powerup so we can push a better one (stack under-the-hood)
			player.SetWeapons ((PlayerShip.Weapons) (activePowerup.WeaponID + 1), this);		// Improve weapons

			float remainingTime = PlayerShip.OldShotSpawnsContainer.powerupExpirationTime - timeObtained;		// May nerf the saved duration
			endTime = timeObtained + remainingTime + powerDuration * 0.5f;		// Set new end time
			PlayerShip.OldShotSpawnsContainer.powerupExpirationTime = endTime;				// Record new end time
		
		} 

		// Case 3 - The best available powerup is active.
		else {

			//activePowerup.activePowerup.CancelInvoke ("DeactivatePower");		// We're going to set a new deactivation call!

			float remainingTime = PlayerShip.OldShotSpawnsContainer.powerupExpirationTime - timeObtained;		// May nerf the saved duration
			endTime = timeObtained + remainingTime + powerDuration;						// Set new end time
			PlayerShip.OldShotSpawnsContainer.powerupExpirationTime = endTime;				// Record new end time	
		}

		Invoke ("DeactivatePower", endTime);		// Reset to state before powerup obtained

	}

	public override void DeactivatePower() 
	{
		// ONLY dequeue if we know that there's a 2nd ShotSpawnContainer object on top of the one for Normal ShotSpawns.
		if (player.activeShotSpawn.Count > 1 && !player.activeShotSpawn.Peek ().WeaponID.Equals (PlayerShip.Weapons.LEVEL_ONE)) 
		{
			player.activeShotSpawn.Pop ();
		}
		base.DeactivatePower ();
	}
}
