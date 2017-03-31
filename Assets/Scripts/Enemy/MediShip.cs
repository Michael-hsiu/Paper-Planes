using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[SelectionBase]
public class MediShip : Ship {

	#region Variables
	public float buffRange = 5.0f;			// Range that buff works
	public float healRange = 15.0f;
	public float followDistance = 4.0f;		// How far away from heal target MediShip will stay away
	public Collider[] hitColliders;
	List<GameObject> currTargets;
	List<GameObject> prevTargets;
	List<GameObject> toDebuff = new List<GameObject>();

	private Vector2 offset = new Vector2(0, 3);
	#endregion

	#region Unity lifecycle
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

		Gizmos.color = Color.blue;
		Gizmos.DrawWireSphere(transform.position, healRange);
	}
	#endregion

	#region Game Logic
	protected override void Initialize() {
		base.Initialize ();
	}

	public override void Move () {
		// Move logic in other fxns
	}

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {

				Kill ();

				GameManager.Singleton.UpdateScore (enemyPoints);	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}

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
			if (s != null && !go.CompareTag(Constants.PlayerTag)) {
				s.BuffSpeed ();
				if (s is FiringShip) {
					FiringShip fs = (FiringShip) s;
					fs.BuffFiring ();
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
				if (s is FiringShip) {
					FiringShip fs = (FiringShip) s;
					fs.DebuffFiring ();
				}
			}
		}
		prevTargets = currTargets;	// Update list of just-buffed targets
  

	}

	protected void HealAlly(GameObject go) {

		RaycastHit hit;
		Vector3 rayDirection = go.transform.position - transform.position;

		if (Physics.Raycast(transform.position, rayDirection, out hit, followDistance)) {	// Can only heal when nearby
			if (hit.transform.gameObject == go) {
				Debug.DrawRay(transform.position, rayDirection, Color.red);
				Ship s = go.GetComponent (typeof(Ship)) as Ship;

				if (s.health < 100) {
					s.health += 4;		// Actual healing logic
				}
			}
		}
	}

	protected void MoveToAlly(GameObject target) {

		// Default move pattern is to turn and move towards player.
		Vector3 dist = target.transform.position - transform.position;		// Find vector difference between target and this
		dist.Normalize ();													// Get unit vector
		float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)
		Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		if (!isSpeedBuffed) {
			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
			if (Vector3.Distance (target.transform.position, transform.position) > followDistance * Vector2.up.magnitude) {
				transform.position = Vector2.MoveTowards (transform.position, target.transform.position, speed * Time.deltaTime);

			}
		} else {
			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * buffedSpeedFactor * Time.deltaTime);	// Rotate the enemy
			if (Vector3.Distance (target.transform.position, transform.position) > followDistance * Vector2.up.magnitude) {
				transform.position = Vector2.MoveTowards (transform.position, target.transform.position, speed * buffedSpeedFactor* Time.deltaTime);
			}
		}
	}
		
	IEnumerator SeekHealTarget() {

		while (true) {
			// Get all colliders in area
			hitColliders = Physics.OverlapSphere(transform.position, healRange);
			currTargets = (from c in hitColliders select c.gameObject).ToList();

			// Find most damaged nearby allied ship
			if (currTargets.Count > 0) {
				Debug.Log ("TARGETS");
				Ship mostDamaged = null;
				if (currTargets[0] != null) {
					mostDamaged = currTargets[0].GetComponent (typeof(Ship)) as Ship;
				}
				foreach (GameObject go in currTargets) {
					Ship s = go.GetComponent (typeof(Ship)) as Ship;
					if (s != null) {
						if (mostDamaged == null) {
							mostDamaged = s;
						} else if (s.health < mostDamaged.health) {		// Need to adjust to percentages
							mostDamaged = s;
						}
					}
				}

				// Move to that ally and heal them
				while(mostDamaged.health < 100) {
				//while(GameObject.FindGameObjectWithTag(Constants.PlayerTag).GetComponent<Ship>().health < 100) {
					if (mostDamaged != null) {
						MoveToAlly(mostDamaged.gameObject);
						HealAlly (mostDamaged.gameObject);
						//MoveToAlly(GameObject.FindGameObjectWithTag(Constants.PlayerTag));
						//HealAlly (GameObject.FindGameObjectWithTag(Constants.PlayerTag));
						yield return null;
					} else {
						break;
					}

				}
			}
			yield return null;
		}
	}
	#endregion
} 	
