using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberFS : MonoBehaviour, IFireState {

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
	public BomberFS bs;


	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState() {
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	public void ExplodeNearPlayer (Ship s) {
		
	}	
}
