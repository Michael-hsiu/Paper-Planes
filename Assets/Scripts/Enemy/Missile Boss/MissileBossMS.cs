using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileBossMS : MonoBehaviour, IMoveState {


	public Direction direction;
	public Direction Direction {
		get
		{
			return direction;
		}
		set
		{
			direction = value;
		}
	}
	public MissileBoss mb;

	public void EnterState (Ship s) {

	}

	public void ExitState(Ship s) {

	}

	public void UpdateState(Ship s) {
		MoveToPlayer (s);
	}

	// Adjusts direction as needed
	private void CheckEnv(Ship s) {
		GameObject player = s.gameObject;
	}

	public void MoveToPlayer (Ship s) {
		if (mb == null) {
			mb = (BomberShip) s;
		}

	}	

	public void MoveBackwards (Ship s) {

	}	

}

