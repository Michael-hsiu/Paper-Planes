using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShotSpawn : ShotSpawn
{

    [Range(0.0f, 360.0f)] public float firingAngle = 0.0f;
    public int ultiShotInterval = 5;
    public int waveShotInterval = 5;
    public int shotCounter = 0;
    public int waveShotCounter = 0;
    public bool ultimateShotEnabled = false;
    public bool waveShotEnabled = false;
    //public bool multShotEnabled = false;

    [Header("PREFABS")]
    public GameObject shot;
    public GameObject fasterShot;
    public GameObject ultimateShot;
    public GameObject waveShot;
    public GameObject missile;


    //public GameObject targetRotation;
    //public bool multiFire = false;

    public override void CreateShot(bool isFiringBuffed = false)
    {

        targetRotation = GameManager.Singleton.playerShip.gameObject;      // The parent should be the player or enemy sprite

        // This may need to change for MOBILE
        transform.localRotation = targetRotation.transform.rotation;             // Rotate shotSpawn relative to parent Player

        // Case 1 - Fire ultimate shot at the specified interval.
        if (shotCounter == ultiShotInterval)
        {

            PoolManager.Instance.ReuseObject(ultimateShot, transform.position, transform.rotation * Quaternion.Inverse(targetRotation.transform.rotation));
            shotCounter = 0;

        }

        // Case 2 - Fire a normal shot at specified angle.
        else
        {
            PoolManager.Instance.ReuseObject(shot, transform.position, transform.rotation * Quaternion.Inverse(
                        Quaternion.Euler(new Vector3(
                                targetRotation.transform.localEulerAngles.x,
                                targetRotation.transform.localEulerAngles.y,
                                targetRotation.transform.localEulerAngles.z + firingAngle))));
        }

        shotCounter += 1;   // Increment shot count

    }

    // This is for homing missiles
    public void CreateMissiles(int numMissiles)
    {

        // The parent should be the player or enemy sprite
        targetRotation = transform.parent.parent.gameObject;

        // Rotate shotSpawn relative to parent Player
        transform.localRotation = targetRotation.transform.rotation;

        // Logic for firing multiple missiles in many directions
        while (numMissiles > 0)
        {
            Vector3 randomRot = RandomRotation();
            Missile m = (Missile)PoolManager.Instance.ReuseObjectRef(missile, transform.position, Quaternion.Euler(randomRot) * Quaternion.Inverse(targetRotation.transform.rotation));
            //m.GetComponent<Rigidbody> ().AddForce(randomRot * 20);		// Random propulsion in semicircular range (0-180deg)
            numMissiles -= 1;
        }
    }

    public Vector3 RandomRotation()
    {

        // The parent should be the player or enemy sprite
        targetRotation = transform.parent.parent.gameObject;

        // Get Euler repr of parent gameobject
        Vector3 pos = targetRotation.transform.position;

        float angle = Random.Range(0, 180); // Missiles will only spread in a semicircle in front of player

        Vector3 result = new Vector3(1 * Mathf.Sin(angle * Mathf.Deg2Rad), 1 * Mathf.Cos(angle * Mathf.Deg2Rad), pos.z).normalized;
        return result;

    }

    public void EnableUltimateShot()
    {
        ultimateShotEnabled = true;
    }

    public void DisableUltimateShot()
    {
        ultimateShotEnabled = false;
    }

    public void EnableWaveShot()
    {
        waveShotEnabled = true;
    }

    public void DisableWaveShot()
    {
        waveShotEnabled = false;
    }
}