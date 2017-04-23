using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum FiringMode {
	Firing,
	NotFiring
}

public class RangedFS : MonoBehaviour, IMoveState {

	public FiringMode mode = FiringMode.NotFiring;
	public RangedShip rs;

	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState(Ship s) {

		if (rs == null) {
			rs = (RangedShip) s;
		}
		bool playerOnDashCooldown = GameManager.Singleton.onDashCooldown;

		// If player is dashing, use math to check if player is too far from us.
		if (playerOnDashCooldown) {
			if (Utils.SquaredEuclideanDistance(rs.gameObject, rs.target.gameObject) > rs.sqFireDist) {
				Debug.Log ("PLAYER TOO FAR AWAY TO FIRE!");
				mode = FiringMode.NotFiring;
			} else {
				mode = FiringMode.Firing;
			}
		}


		// Apply method based on player direction
		if (mode == FiringMode.Firing) {
			FireAtPlayer (rs);
		}		
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	public void FireAtPlayer (Ship s) {

		if (rs == null) {
			rs = (RangedShip) s;
		}

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
