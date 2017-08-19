using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class FiringPowerup : Powerup
{

    // Check active firing powerup. If normal, add 1. If enhanced already, add 1 and extend the time.
    // OnTriggerEnter takes care of destroyForReuse
    public override void ActivatePowerup()
    {

        timeObtained = Time.time;                   // Record time powerup was obtained

        ShotSpawnContainer activePowerup = player.activeShotSpawnContainer; // Get the active powerup's shotspawns
        PlayerShip.Weapons activeWeaponType = activePowerup.firingPowerupID;
        Debug.Log(activeWeaponType);

        // Choose the new list of shotspawns and set the end time for powerup.
        // Case 1 - No firing powerups active.
        if (activeWeaponType.Equals(PlayerShip.Weapons.LEVEL_ONE))
        {

            player.SetWeapons((PlayerShip.Weapons)(PlayerShip.Weapons.LEVEL_ONE + 1), this);        // Set weapons

            endTime = timeObtained + powerDuration;                 // Calculate end time of powerup
            player.firingPowerupExpirationTime = endTime;                   // Record new end time

        }

        // Case 2 - A firing powerup that is not the best powerup is active.
        else if (activeWeaponType < PlayerShip.Weapons.LEVEL_SIX)
        {

            player.SetWeapons((PlayerShip.Weapons)(activePowerup.firingPowerupID + 1), this);       // Improve weapons

            float remainingTime = player.firingPowerupExpirationTime - timeObtained;		// May nerf the saved duration
            endTime = timeObtained + remainingTime + powerDuration * 1.0f;		// Calculate new end time
            player.firingPowerupExpirationTime = endTime;                               // Record new end time

        }

        // Case 3 - The best available powerup is active.
        else
        {

            player.SetWeapons((PlayerShip.Weapons)(activePowerup.firingPowerupID), this);     // This method takes care of cancelling invoke

            float remainingTime = player.firingPowerupExpirationTime - timeObtained;        // May nerf the saved duration
            endTime = timeObtained + remainingTime + powerDuration;						// Set new end time
            player.firingPowerupExpirationTime = endTime;               // Record new end time	
        }

        Debug.Log("ENDTIME: " + endTime);
        Debug.Log("EXPIRE_TIME: " + player.firingPowerupExpirationTime);
        Invoke("DeactivatePowerup", player.firingPowerupExpirationTime - timeObtained);       // Reset to state before powerup obtained

        // End destroy routine
        base.ActivatePowerup();
    }

    public override void DeactivatePowerup()
    {
        // ONLY dequeue if we know that there's a 2nd ShotSpawnContainer object on top of the one for Normal ShotSpawns.
        player.DeactivateFiringPowerup();
        base.DeactivatePowerup();
    }
}
