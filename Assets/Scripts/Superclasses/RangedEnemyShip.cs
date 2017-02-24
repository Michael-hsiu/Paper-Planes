using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangedEnemyShip : Ship {


	/** INSTANCE VARS */

	// Attributes unique to RangedEnemyShip
	protected float _speed = 30.0f;	
	protected float _rotationSpeed = 10.0f;
	protected int _health = 400;



	/** HELPER METHODS */
	protected override void DoInitialization() {
		
		// Do normal initalization
		base.DoInitialization ();

		// Adjust attributes
		this.Speed = _speed;
		this.RotationSpeed = _rotationSpeed;
		this.Health = _health;

		// Check that we adjusted attributes correctly
		Debug.Log (this.Speed);
		Debug.Log (this.RotationSpeed);
		Debug.Log (this.Health);
	}



	/** UNITY CALLBACKS */
	protected override void Start () {
		
		// Call our overridden initalization method
		DoInitialization ();

		// Check that we're calling the right Start() method
		Debug.Log("RANGED SHIP START");
		
	}
	
	protected override void Update () {
		base.Update ();
	}
}
