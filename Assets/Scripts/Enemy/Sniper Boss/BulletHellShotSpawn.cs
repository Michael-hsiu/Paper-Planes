using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellShotSpawn : ShotSpawn
{

    public GameObject bulletHellProjectile;
    public float rotationAngle;
	public float rotationSpeed;

	public float delayBtwnShots;
    //public GameObject targetRotation;   // Reference rotation

    public override void CreateShot(bool isFiringBuffed = false)
    {

        // The parent should be the player or enemy sprite
        //targetRotation = transform.parent.parent.gameObject;        

        // Rotate shotSpawn relative to parent Player
        //transform.localRotation = targetRotation.transform.rotation;    

        PoolManager.Instance.ReuseObject(bulletHellProjectile, transform.position, targetRotation.transform.rotation);
    }

    // Make this into a time-controlled coroutine
    public void Rotate()
    {
		Quaternion desiredRotation = Quaternion.Euler(0, 0, rotationAngle);        // Store rotation as an Euler, then Quaternion
        transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, Time.deltaTime * rotationSpeed);
        
    }

    IEnumerator UseBulletHellAttack(float endTime)
    {
        while (Time.time < endTime)
        {
            // Fire a shot, rotate, and wait
            CreateShot();

            yield return new WaitForSeconds(delayBtwnShots);
        }
    }
}