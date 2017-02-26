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
	public float fireRate = 0.3f;
	public float nextFire;


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
		if (Time.time > nextFire) {
			
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing

			// Check for all shotspawns in children
			foreach(ShotSpawn s in transform) {
				s.CreateShot ();	// Fire the shot!
			}
		}
	}
}
