using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Turret : MonoBehaviour, IDamageable<int>, IKillable {

	/** INSTANCE VARS */

	[Header("References")]
	public GameObject target;
	public GameObject explosion;

	[Space]

	[Header("Properties")]
	public float rotationSpeed = 90.0f;
	public int health = 100;
	public int enemyPoints = 100;

	protected Vector2 initialPos;


	/** PROPERTIES */

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


	/** INTERFACE METHODS */

	public virtual void Damage(int damageTaken) {

		health -= damageTaken;		// We lose health

		if (health <= 0) {			// Check if we died, and if so, destroy us
			Kill ();
		}
	}

	public virtual void Kill() {
		//Destroy (transform.gameObject);		// Destroy our gameobject
		transform.gameObject.SetActive(false);	// "Destroy" our gameobject
		Instantiate(explosion, transform.position, transform.rotation);
	}

}
