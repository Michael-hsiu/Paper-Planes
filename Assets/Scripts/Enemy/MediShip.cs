using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[SelectionBase]
public class MediShip : Ship {

	// Instance vars
	public float buffRange = 5.0f;			// Range that buff works
	public float visibilityDistance = 10.0f;
	public Collider[] hitColliders;
	List<GameObject> currTargets;
	List<GameObject> prevTargets;
	List<GameObject> toDebuff = new List<GameObject>();
	//protected float _speed = 2.0f;	
	//protected float _rotationSpeed = 100.0f;
	//protected int _health = 100;
	//protected int _enemyPoints = 100;

	private Vector2 offset = new Vector2(0, 3);


	/** HELPER METHODS */
	protected override void Initialize() {

		// Do normal initalization
		base.Initialize ();

		// Adjust attributes
		//this.Speed = _speed;
		//this.RotationSpeed = _rotationSpeed;
		//this.Health = _health;
		//this.EnemyPoints = _enemyPoints;

	}

	public override void Move () {
	}

	/** GAME LOGIC */

	public void BuffAllies() {

		// Get all colliders in area
		hitColliders = Physics.OverlapSphere(transform.position, buffRange);
		currTargets = (from c in hitColliders select c.gameObject).ToList();
		if (prevTargets != null) {
			toDebuff = (from go in prevTargets where !currTargets.Contains(go) select go).ToList();		// Get targets that are no longer in buff range
		}

		// Buff all gameobjects 
		foreach (GameObject go in currTargets) {

			// Retrieve the script that implements IDamageable
			Ship s = go.GetComponent (typeof(Ship)) as Ship;
			if (s != null) {
				s.BuffSpeed ();
				//s.isSpeedBuffed = true;		// Speed buff
				if (s is FiringShip) {
					FiringShip fs = (FiringShip) s;
					fs.BuffFiring ();
					//fs.isFiringBuffed = true;
				}
			}
		}

		// Debuff out-of-range allies
		foreach (GameObject go in toDebuff) {

			// Retrieve the script that implements IDamageable
			Ship s = null;
			if (go != null) {
				s = go.GetComponent (typeof(Ship)) as Ship;
			}
			if (s != null) {
				s.DebuffSpeed ();
				//s.isSpeedBuffed = true;		// Speed buff
				if (s is FiringShip) {
					FiringShip fs = (FiringShip) s;
					fs.DebuffFiring ();
					//fs.isFiringBuffed = true;
				}
			}
		}
		prevTargets = currTargets;	// Update list of just-buffed targets
	}

	/** UNITY CALLBACKS */
	protected override void Start () {

		// Call our overridden initalization method
		Initialize ();
		StartCoroutine (SeekHealTarget ());

		// Check that we're calling the right Start() method
		Debug.Log("MEDISHIP SHIP START");

	}

	protected override void Update() {

		// Use default movement
		base.Update ();

		BuffAllies ();		// Continue buffing

	}

	public void OnDrawGizmos() {
		Gizmos.color = Color.white;
		Gizmos.DrawWireSphere(transform.position, buffRange);
	}


	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			Destroy (other.gameObject);		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {

				Kill ();
				//Instantiate (explosion, transform.position, transform.rotation);
				//Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}

	// Co-routines
	IEnumerator SeekHealTarget() {

		while (true) {
			// Get all colliders in area
			hitColliders = Physics.OverlapSphere(transform.position, buffRange);
			currTargets = (from c in hitColliders select c.gameObject).ToList();

			// Find most damaged nearby allied ship
			if (currTargets.Count > 0) {
				Ship mostDamaged = null;
				if (currTargets[0] != null) {
					mostDamaged = currTargets[0].GetComponent (typeof(Ship)) as Ship;
				}
				foreach (GameObject go in currTargets) {
					Ship s = go.GetComponent (typeof(Ship)) as Ship;
					if (s != null) {
						if (s.health < mostDamaged.health) {		// Need to adjust to percentages
							mostDamaged = s;
						}
					}
				}

				// Move to that ally and heal them
				while(mostDamaged.health < 100) {
					MoveToAlly(mostDamaged.gameObject);
					HealAlly (mostDamaged.gameObject);
					yield return new WaitForSeconds(2f);
				}
			}
			yield return null;
		}
	}

	protected void HealAlly(GameObject go) {

		RaycastHit hit;
		Vector3 rayDirection = go.transform.position - transform.position;

		if (Physics.Raycast(transform.position, rayDirection, out hit, visibilityDistance)) {
			if (hit.transform.gameObject == go) {
				Debug.DrawRay(transform.position, rayDirection, Color.red);
				Ship s = go.GetComponent (typeof(Ship)) as Ship;
				s.health += 10;		// Actual healing logic
			}
		}
	}

	protected void MoveToAlly(GameObject target) {
		if (Vector3.Distance(target.transform.position, transform.position) > 3 * Vector2.up.magnitude) {
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
	}
} 
