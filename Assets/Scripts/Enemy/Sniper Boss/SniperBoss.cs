using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class SniperBoss : Ship, IEnemy {

	// Spec:

	// Turn to player
	// Teleports to random pt far from player
	// Charges + fires laser in arc
	// Scatters small explosives

	#region Variables
	public float sqDist = 100.0f;		// Distance at which it starts backing away from player
	public bool isAtking = false;		// Desc. if boss is attacking

	#endregion


	#region Unity Life Cycle
	protected override void Start() {
		
		Initialize ();		// Assigns target

		moveState = GetComponent<IMoveState>();

	}
	#endregion

	#region Game Logic
	// Logic for firing missiles, with delay btwn each, for a certain pd of time

	public override void Move() {
		moveState.UpdateState (this);
	}

	void OnTriggerEnter(Collider other) {
	}


	// This is how far away we can detect the player and take measures to atk player
	public void OnDrawGizmosSelected() {

	}

	#endregion

}
