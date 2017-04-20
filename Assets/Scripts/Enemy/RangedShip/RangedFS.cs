using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum FiringMode {
	Firing,
	NotFiring
}

public class RangedFS : MonoBehaviour, IMoveState {

	public FiringMode mode = FiringMode.NotFiring;

	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState(Ship s) {
		if (mode == FiringMode.Firing) {
			FireAtPlayer (s);
		}		
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	public void FireAtPlayer (Ship s) {

		RangedShip rs = (RangedShip) s;

		if (!rs.isFiringBuffed) {
			rs.nextFire = Time.time + rs.fireRate;	// Cooldown time for projectile firing
		} else {
			rs.nextFire = Time.time + rs.fireRate / rs.buffedFiringRateFactor;
		}

		// Check for all shotspawns in children
		foreach(Transform t in s.transform) {

			ShotSpawn shotSpawn = t.GetComponent<ShotSpawn> ();	// Get ShotSpawn in children

			if (shotSpawn != null) {
				shotSpawn.CreateShot (rs.isFiringBuffed);	// Fire the shot!
			}
		}
	}	
}
