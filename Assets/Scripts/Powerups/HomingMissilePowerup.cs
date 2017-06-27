using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomingMissilePowerup : Powerup
{

    public PlayerShotSpawn missileSpawn;        // Assigned to normal player shotspawn in inspector
    public GameObject missile;          // Assigned in inspector

    //private HomingMissileScrObj specPowerupData;

    void Start()
    {
        missileSpawn = GameManager.Singleton.normalSS.GetComponent<PlayerShotSpawn>();
        //specPowerupData = (HomingMissileScrObj) powerupData;
    }

    public override void ActivatePower()
    {
        //Debug.Log (((HomingMissileScrObj) powerupData).numMissiles + "MISSILES TO CREATE");
        missileSpawn.CreateMissiles(((HomingMissileScrObj)powerupData).numMissiles);    // Fire the missiles! [SATISFIES numMissiles]
    }
}
