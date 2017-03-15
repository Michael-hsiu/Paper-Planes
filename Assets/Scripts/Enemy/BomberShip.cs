using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BomberShip : Ship {

	// Instance variables
	//protected float _speed = 1.0f;	
	//protected float _rotationSpeed = 100.0f;
	//protected int _health = 100;
	//protected int _enemyPoints = 100;


	public int explosionDamage = 50;
	public float explosionDelay = 3.0f;
	public float damageRange = 7.0f;
	public float rotationFactor = 150.0f;
	public bool isExploding = false;
	public bool explosionActive = false;

	private Rigidbody rb;


	// Helper methods
	protected override void Initialize() {

		// Do normal initalization
		base.Initialize ();
		//HP_MAX = health;

		// Adjust attributes
		//this.Speed = _speed;
		//this.RotationSpeed = _rotationSpeed;
		//this.Health = _health;
		//this.EnemyPoints = _enemyPoints;

		rb = GetComponent<Rigidbody> ();	// For use in adjusting velocity
	}

	public override void Move () {

		/** MOVEMENT UPDATE */
		if (isExploding) {

			transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);	// Rotate the enemy MUCH FASTER; needs adjustment
			rotationFactor += 5.0f;		// Could maybe use lerp for incremeneting exponentially

			// If co-routine not running
			if (!explosionActive) {
				//Debug.Log ("STARTED COROUTINE");
				StartCoroutine(BeginExplosion());
			}

			return;		// Break out of method

		} else {
			
			/** ROTATION UPDATE */

			// Enemy ship turns to face player
			Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);	// Enemy normally rotates in circle

			/** MOVEMENT UPDATE */
			transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed);

		}

	}		


	/** UNITY CALLBACKS */
	protected override void Start () {

		// Call our overridden initalization method
		Initialize ();

		// Check that we're calling the right Start() method
		//Debug.Log("BOMBER SHIP START");

	}

	protected override void Update() {

		// Use default movement
		base.Update ();

	}

	// For shots
	protected void OnTriggerEnter(Collider other) {

		// If player shot hits us...
		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			Destroy (other.gameObject);		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			// If the enemy stays far enough away and kills us...
			if (health <= 0 && !isExploding) {
				
				Instantiate (explosion, transform.position, transform.rotation);
				Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("BOMBER ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console */
		}
	}


	/** CO-ROUTINES */

	IEnumerator BeginExplosion() {

		// Set this to have only one co-routine running
		explosionActive = true;

		//Debug.Log ("EXPLOSION COUNTDOWN BEGINS!");

		yield return new WaitForSeconds(explosionDelay);	 // Wait for a few seconds while beeping animation plays

		// Get all colliders in area
		Collider[] hitColliders = Physics.OverlapSphere(transform.position, damageRange);


		//List<GameObject> targets = new List<GameObject> ();
		List<GameObject> targets = (from c in hitColliders select c.gameObject).ToList();


		/*// Add the gameobjects connected to colliders
		foreach (Collider c in hitColliders) {
			targets.Add (c.gameObject);
		} 

		foreach(GameObject go in targets) {
			Debug.Log ("Target: " + go);
		}*/

		// Damage all gameobjects 
		foreach (GameObject go in targets) {
			
			// Retrieve the script that implements IDamageable
			IDamageable<int> i = go.GetComponent (typeof(IDamageable<int>)) as IDamageable<int>;
			if (i != null) {
				i.Damage(explosionDamage);
			}
		}

		Kill ();		// We're dead, so hide this object!
		Instantiate (explosion, transform.position, transform.rotation);	// Explode! 

	}
}
