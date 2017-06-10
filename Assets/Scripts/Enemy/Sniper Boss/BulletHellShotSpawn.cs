using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellShotSpawn : ShotSpawn
{

    public GameObject bulletHellProjectile;
	//public GameObject targetRotation;   // Reference rotation

	public override void CreateShot(bool isFiringBuffed = false)
	{

		// The parent should be the player or enemy sprite
		//targetRotation = transform.parent.parent.gameObject;        

		// Rotate shotSpawn relative to parent Player
		//transform.localRotation = targetRotation.transform.rotation;    

		PoolManager.Instance.ReuseObject(bulletHellProjectile, transform.position, targetRotation.transform.rotation);
	}
}