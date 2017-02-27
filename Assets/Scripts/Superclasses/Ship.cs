using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Ship : MonoBehaviour, IMovement, IDamageable<int>, IKillable {


	/** INSTANCE VARS */

	[Header("References")]
	public GameObject target;
	public GameObject explosion;

	[Space]

	[Header("Properties")]
	public float speed = 1.0f;
	public float rotationSpeed = 90.0f;
	public int health = 100;
	public int enemyPoints = 100;

	protected Vector2 initialPos;


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



	/** INTERFACE METHODS */

	public virtual void Move() {

		/** Default move pattern is to turn and move towards player. */
		Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
		dist.Normalize ();		// Get unit vector

		float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

		Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy

		/** MOVEMENT UPDATE */
		transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed);
	}

	public virtual void Damage(int damageTaken) {

		health -= damageTaken;		// We lose health

		if (health <= 0) {			// Check if we died, and if so, destroy us
			Kill ();
		}
	}

	public virtual void Kill() {
		Destroy (transform.gameObject);		// Destroy our gameobject
	}


	/** HELPER METHODS */

	protected virtual void Initialize() {
		initialPos = new Vector2(transform.position.x, transform.position.y);	// Cache our initial position
		target = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime
	}
		

	/** COLLIDER METHODS */

	// Should update so that Shot contains its own 'damageDealt' var
	/** ENEMY TAKES CARE OF WHAT SHOT DOES TO IT */
	/*void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			Destroy (other.gameObject);		// Destroy the shot that hit us

			enemyHealth -= shotDamage;			// We lost health

			if (enemyHealth <= 0) {
				Instantiate (explosion, transform.position, transform.rotation);
				Destroy (this.gameObject);		// We're dead, so get rid of this object :/
				GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI
				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			Debug.Log ("ENEMY HEALTH: " + enemyHealth);	// Print message to console
		}
	}*/

	/** UNITY CALLBACKS */

	protected virtual void Start () {
	
		Initialize ();

		Debug.Log ("SHIP START");
	}
	
	protected virtual void Update () {
	
		Move ();
	}
}
