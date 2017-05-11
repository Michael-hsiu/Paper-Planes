using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PawnFS : MonoBehaviour, IFireState {

	public FiringMode mode = FiringMode.NotFiring;
	public FiringMode Mode {
		get
		{
			return mode;
		}
		set
		{
			mode = value;
		}
	}
	public PawnShip ps;

	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState(Ship s) {

		if (ps == null) {
			ps = (PawnShip) s;
		}
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	public void FireAtPlayer (Ship s) {

		if (ps == null) {
			ps = (PawnShip) s;
		}
	}	
}

