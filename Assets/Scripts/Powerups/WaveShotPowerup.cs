using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveShotPowerup : Powerup
{
    public override void ActivatePower()
    {
        if (GameManager.Singleton.playerShip.waveShotEnabled)
        {
            if (GameManager.Singleton.playerShip.waveShotPowerup != null)
            {
                endTime = GameManager.Singleton.playerShip.waveShotPowerup.endTime + powerDuration;						// Record extended powerup time
                GameManager.Singleton.playerShip.waveShotPowerup.CancelInvoke("DeactivatePower");       // Prevent old wave shot from de-activating powerup early
                Debug.Log("INVOKE CANCEL");
                //Debug.Break();
            }
            // This doesn't work, since each powerup obj has its own script, but we may implement shot-related powerups differently to avoid this problem
            //CancelInvoke("DeactivatePower");                        // Enables powerup duration extension
        }
        else
        {
            endTime = Time.time + powerDuration;
            Debug.Log("NO TIME EXTENSION");
        }
        float remainingTime = endTime - Time.time;
        Invoke("DeactivatePower", remainingTime);                 // Powerup deactivation call

        Debug.Log("NEW ENDTIME: " + endTime);
        GameManager.Singleton.playerShip.waveShotEnabled = true;
        GameManager.Singleton.playerShip.waveShotPowerup = this;
        GameManager.Singleton.playerShip.activePowerups.Enqueue(this);      // Register all powerups
    }

    public override void DeactivatePower()
    {
        //if (Time.time > GameManager.Singleton.playerShip.waveShotPowerup.endTime || GameManager.Singleton.playerShip.isResetting)
        //{
        GameManager.Singleton.playerShip.waveShotEnabled = false;
        Debug.Log("ENDED AT: " + Time.time);
        //}
        //Debug.Break();
    }
}
