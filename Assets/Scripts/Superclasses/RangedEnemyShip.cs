using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangedEnemyShip : FiringShip {


	/** INSTANCE VARS */

	// Attributes unique to RangedEnemyShip
	protected float _speed = 30.0f;	
	protected float _rotationSpeed = 10.0f;
	protected int _health = 400;
	protected int _shotDamage = 20;
	protected int _enemyPoints = 100;


	/** HELPER METHODS */
	protected override void Initialize() {
		
		// Do normal initalization
		base.Initialize ();

		// Adjust attributes
		this.Speed = _speed;
		this.RotationSpeed = _rotationSpeed;
		this.Health = _health;
		this.ShotDamage = _shotDamage;
		this.EnemyPoints = _enemyPoints;

		// Check that we adjusted attributes correctly
		Debug.Log (this.Speed);
		Debug.Log (this.RotationSpeed);
		Debug.Log (this.Health);
	}
		

	/** UNITY CALLBACKS */
	protected override void Start () {
		
		// Call our overridden initalization method
		Initialize ();

		// Check that we're calling the right Start() method
		Debug.Log("RANGED SHIP START");
		
	}

	protected override void Update() {

		// Use default movement
		base.Update ();

	}

	protected virtual void FixedUpdate () {

		// Basic AI - fires constantly
		Fire ();
	}
}
