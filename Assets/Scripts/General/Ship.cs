﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Ship : AbstractShip, IMovement, IDamageable<int>, IKillable {


	/** INSTANCE VARS */

	public GameObject target;
	public GameObject explosion;
	public float moveFactor;
	public float speed = 1.0f;
	public float rotationSpeed = 90.0f;
	public int health = 100;
	public int enemyPoints = 100;
	public bool isSpeedBuffed = false;
	public float buffedSpeedFactor = 10.0f;
	public bool isMarked = false;

	public Vector2 initialPos;


	/** INTERFACE METHODS */

	public virtual void Move() {

		// Default move pattern is to turn and move towards player.
		Vector3 dist = target.transform.position - transform.position;		// Find vector difference between target and this
		dist.Normalize ();													// Get unit vector
		float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)
		Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		if (!isSpeedBuffed) {
			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
			transform.position = Vector2.MoveTowards (transform.position, target.transform.position, speed * Time.deltaTime);
		} else {
			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * buffedSpeedFactor * Time.deltaTime);	// Rotate the enemy
			transform.position = Vector2.MoveTowards (transform.position, target.transform.position, speed * buffedSpeedFactor * Time.deltaTime);
		}
	}

	public virtual void Damage(int damageTaken) {

		health -= damageTaken;		// We lose health
		if (this.health <= 0) {
			Kill ();
			Debug.Log ("Killed via projectile weapon");
		}
	}

	public virtual void Kill() {
		//Destroy (transform.gameObject);		// Destroy our gameobject
		//transform.gameObject.SetActive(false);	// "Destroy" our gameobject
		DestroyForReuse ();
		Instantiate(explosion, transform.position, transform.rotation);
	}


	/** HELPER METHODS */

	protected virtual void Initialize() {
		initialPos = new Vector2(transform.position.x, transform.position.y);	// Cache our initial position
		target = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime
	}

	public void BuffSpeed() {
		this.isSpeedBuffed = true;
	}

	public void DebuffSpeed() {
		this.isSpeedBuffed = false;
	}


	/** UNITY CALLBACKS */

	protected virtual void Start () {
		Initialize ();
		Debug.Log ("SHIP START");
	}

	protected virtual void Update () {
		Move ();
	}


	/** PROPERTIES */

	public float Speed { 
		get { return speed; } 
		set { speed = value; } 
	}

	public float RotationSpeed { 
		get { return rotationSpeed; } 
		set { rotationSpeed = value; } 
	}

	public int Health { 
		get { return health; } 
		set { health = value; } 
	}

	public int EnemyPoints { 
		get { return enemyPoints; } 
		set { enemyPoints = value; } 
	}
}