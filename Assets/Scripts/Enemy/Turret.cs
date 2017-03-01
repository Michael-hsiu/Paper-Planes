using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Turret : MonoBehaviour, IMovement, IFires, IDamageable<int>, IKillable {

	/** INSTANCE VARS */

	[Header("References")]
	public GameObject target;
	public GameObject explosion;

	[Space]

	[Header("Properties")]
	public float rotationSpeed = 90.0f;
	public int health = 100;
	public int enemyPoints = 100;

	[Space]

	[Header("Shot References")]
	public GameObject shot;
	public Transform shotSpawn;

	[Space]

	[Header("Shot Properties")]
	public int shotDamage = 10;
	public float fireRate = .1f;
	public float nextFire;

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

	public int ShotDamage { 
		get { return shotDamage; } 
		set { shotDamage = value; } 
	}

	public float FireRate { 
		get { return fireRate; } 
		set { fireRate = value; } 
	}


	/** INTERFACE METHODS */

	public virtual void Move() {

		/** Default move pattern is to turn and move towards player. */
		Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
		dist.Normalize ();		// Get unit vector

		float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

		Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy

	}

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

	public virtual void Fire() {

		nextFire = Time.time + fireRate;	// Cooldown time for projectile firing

		// Check for all shotspawns in children
		foreach(Transform s in transform) {

			TurretShotSpawn shotSpawn = s.GetComponent<TurretShotSpawn> ();	// Get ShotSpawn in children

			if (shotSpawn != null) {
				shotSpawn.CreateShot ();	// Fire the shot!
			}
		}

	}

	/** GAME LOGIC */

	protected virtual void Initialize() {
		initialPos = new Vector2(transform.position.x, transform.position.y);	// Cache our initial position
		target = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime
	}



	/** UNITY CALLBACKS */

	protected virtual void Start () {

		Initialize ();

		Debug.Log ("TURRET START");
	}

	protected virtual void Update () {

		Move ();
		
		if (Time.time > nextFire) {

			Fire ();
		}
	}
}
