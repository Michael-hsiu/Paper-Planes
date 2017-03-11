using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class FiringShip : Ship, IFires {

	/** INSTANCE VARS */

	[Header("Shot References")]
	public GameObject shot;
	public Transform shotSpawn;

	[Space]

	[Header("Shot Properties")]
	public int shotDamage = 10;
	public float fireRate = .1f;
	public float nextFire;
	public float fireRateMultiplier = 1.0f;


	/** PROPERTIES */

	public int ShotDamage { 
		get { return shotDamage; } 
		set { shotDamage = value; } 
	}

	public float FireRate { 
		get { return fireRate; } 
		set { fireRate = value; } 
	}


	/** GAME LOGIC */

	public virtual void Fire() {

		nextFire = Time.time + fireRate;	// Cooldown time for projectile firing

		// Check for all shotspawns in children
		foreach(Transform s in transform) {

			ShotSpawn shotSpawn = s.GetComponent<ShotSpawn> ();	// Get ShotSpawn in children

			if (shotSpawn != null) {
				shotSpawn.CreateShot ();	// Fire the shot!
			}
		}

	}
}
