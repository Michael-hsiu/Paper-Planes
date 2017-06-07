using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EMPWaveShotSPawn : ShotSpawn {

    public GameObject waveShot;
    //public GameObject targetRotation;   // Target rotation for shooting EMP wave

    public bool waveShotEnabled = false;
    public int waveShotCounter = 0;

    public override void CreateShot(bool isFiringBuffed=false) {

        // The parent should be the player or enemy sprite
        //targetRotation = transform.parent.parent.gameObject;        

        // Rotate shotSpawn relative to parent Player
        //transform.localRotation = targetRotation.transform.rotation;    

        PoolManager.Instance.ReuseObject (waveShot, transform.position, targetRotation.transform.rotation);
    }
}