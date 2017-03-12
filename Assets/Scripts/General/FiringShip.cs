using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class FiringShip : Ship, IFires {

	/** INSTANCE VARS */

	public GameObject shot;
	public GameObject fasterShot;
	public Transform shotSpawn;
	public int shotDamage = 10;
	public float fireRate = .1f;
	public float nextFire;
	public float buffedFiringRateFactor = 2.0f;
	public bool isFiringBuffed = false;


	/** GAME LOGIC */

	public virtual void Fire() {

		if (!isFiringBuffed) {
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing
		} else {
			nextFire = Time.time + fireRate / buffedFiringRateFactor;
		}

		// Check for all shotspawns in children
		foreach(Transform s in transform) {

			ShotSpawn shotSpawn = s.GetComponent<ShotSpawn> ();	// Get ShotSpawn in children

			if (shotSpawn != null) {
				shotSpawn.CreateShot (isFiringBuffed);	// Fire the shot!
			}
		}

	}

	public void BuffFiring() {
		this.isFiringBuffed = true;
	}

	public void DebuffFiring() {
		this.isFiringBuffed = false;
	}

		

	/** PROPERTIES */

	public int ShotDamage { 
		get { return shotDamage; } 
		set { shotDamage = value; } 
	}

	public float FireRate { 
		get { return fireRate; } 
		set { fireRate = value; } 
	}
}
