using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreMultiplierPowerup : Powerup
{

    public override void ActivatePowerup()
    {
        GameManager.Singleton.scoreMultiplier *= 2;		// Scale score multiplier by 2
        UIManager.Singleton.UpdateScoreMultiplier();
        Invoke("DeactivatePower", powerDuration);       // Reset to state before powerup obtained
    }

    public override void DeactivatePowerup()
    {
        int scoreMultiplier = GameManager.Singleton.scoreMultiplier;
        if (scoreMultiplier > 1)
        {
            GameManager.Singleton.scoreMultiplier = scoreMultiplier / 2;
        }
        UIManager.Singleton.UpdateScoreMultiplier();
        //base.DeactivatePowerup();
    }
}
