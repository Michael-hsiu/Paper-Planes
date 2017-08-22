using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissilePowerup : Powerup
{

    public int numMissiles = 8;
    public int numSuperMissiles = 16;
    public PlayerShotSpawn missileSpawn;        // Assigned to normal player shotspawn in inspector
    public GameObject missile;          // Assigned in inspector

    //private HomingMissileScrObj specPowerupData;

    public override void Start()
    {
        missileSpawn = GameManager.Singleton.normalSS.GetComponent<PlayerShotSpawn>();
        base.Start();
        //specPowerupData = (HomingMissileScrObj) powerupData;
    }

    public override void ActivatePowerup()
    {
        //Debug.Log (((HomingMissileScrObj) powerupData).numMissiles + "MISSILES TO CREATE");
        //GameManager.Singleton.numPowerupsCollected += 1;
        //missileSpawn.CreateMissiles(((HomingMissileScrObj)powerupData).numMissiles);    // Fire the missiles! [SATISFIES numMissiles]
        if (isSuperPowerup)
        {
            missileSpawn.CreateMissiles(numSuperMissiles);    // Fire the Super # missiles!
        }
        else
        {
            missileSpawn.CreateMissiles(numMissiles);    // Fire the missiles! [SATISFIES numMissiles]
        }
        base.ActivatePowerup();
    }
}
