using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Missile : PoolObject {

	public HomingMissileScrObj missileData;		// Data about upgrades, etc.
	public GameObject explosion;
	public GameObject target;
	//public int damage = 1;					// Damage vals now stored in ScrObj data container
	public float damageRange = 10.0f;
	public float rotationSpeed = 90.0f;
	public float speed = 5.0f;
	public float dmgDelay = 0.1f;
	public bool seekingTarget = false;
	public bool noEnemies = false;
	public float seekDelay = 0.1f;
	public float randomVal;

	[SerializeField]
	private bool canDmg = true;		// Helps us register hit delays

	void OnEnable() {
		StopAllCoroutines ();
		transform.rotation = Quaternion.identity;
		StartCoroutine(SeekAndMove());		// Find target as soon we go active
	}

	void Update() {
		Move ();
	}

	public void FindTarget() {

		// @ISSUE: Something is breaking here when no enemies are in the map!!!
		try {
			// Get all colliders in area
			Collider[] hitColliders = Physics.OverlapSphere(transform.position, damageRange);
			//Debug.Log ("FIND TARGET 1");
			if (hitColliders.Length == 0) {
				//noEnemies = true;
				Debug.Log ("NO ENEMIES");
			} else {
				List<GameObject> targets = (from c in hitColliders select c.gameObject).ToList();	// Still contains other missiles and ineligible targets

				// Find the first unmarked enemy ship
				foreach (GameObject go in targets) {
					if (go.CompareTag(Constants.EnemyTag) && go.GetComponent<Ship> () != null && !(((Ship) go.GetComponent<Ship> ()).isMarked)) {
						target = go;		// Assign our target to first eligible ship
						((Ship) go.GetComponent<Ship> ()).isMarked = true;	// Ship is now marked as target
						break;
					}
				}

				List<GameObject> validTargets = (from c in targets where c.CompareTag(Constants.EnemyTag) select c.gameObject).ToList();	// Still contains other missiles and ineligible targets

				// CASE: more missiles active than enemies; handle by selecting random enemy to target within valid range
				while (target == null || !target.activeSelf) {
					GameObject go = validTargets[Random.Range (0, validTargets.Count())];
					// Check if it's a valid target, even if already targeted
					if (go != null && go.activeSelf && go.CompareTag(Constants.EnemyTag)) {
						target = go;
					}
				}
			} 
		} catch {
			//Debug.Log ("Find target try-catch!!!");
		}
	}

	IEnumerator SeekAndMove() {
		seekingTarget = true;		// Bool flag

		// Continue process while target is null or if it's inactive (pooled)
		while (target == null || !target.activeSelf) {
			// Seek a new target
			FindTarget ();

			// Determine if we found a target, then either delay or leave loop and reset bool flag
			if (target == null) {
				yield return new WaitForSeconds(seekDelay);
			} else {
				break;
			}
		}
		seekingTarget = false;		// Bool flag
	}

	public void Move () {

		// We need to re-assign a target if original target has died (or is inactive, by object pool)
		if (target == null || !target.activeSelf) {
			// If already looking for new target
			if (seekingTarget) {
				// Just move forward
				//this.GetComponent<Rigidbody> ().AddForce (transform.up * 1);
			} else {
				// Start search for new target
				StartCoroutine(SeekAndMove());
				Debug.Log ("LOOKING FOR TARGET");
			}

		} else if (!seekingTarget) {	// Already found target

			// Code for fixed rotation around z-axis https://forum.unity3d.com/threads/solved-confused-by-slerp-lerp.323462/
			Quaternion newRotation = Quaternion.LookRotation(transform.position - target.transform.position, Vector3.forward);
			newRotation.x = 0;
			newRotation.y = 0;
			transform.rotation = Quaternion.Slerp(transform.rotation, newRotation, Time.deltaTime * rotationSpeed);

			//transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
			//transform.rotation = Quaternion.RotateTowards (Quaternion.Euler(0, 0, tempZ), desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy

			transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed);		// Move towards the enemy
		}
	}	

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			
			if (other.gameObject != null) {
				
				if (canDmg && other.gameObject.GetComponent<IDamageable<int>>() != null) {

					if (((Ship)other.GetComponent<Ship> ()) != null) {
						((Ship)other.GetComponent<Ship> ()).isMarked = false;	// Unmark target ship

					}

					if (((Turret) other.GetComponent<Turret> ()) != null) {
						((Turret) other.GetComponent<Turret> ()).isMarked = false;	// Unmark target turret

					}

					if (other.gameObject.GetComponent<IDamageable<int>> () != null) {
						other.gameObject.GetComponent<IDamageable<int>>().Damage(missileData.damage);		// Inflict damage

						// [SATISFIES spawn new missile chance]
						randomVal = Random.value;
						Debug.Log ("RANDOMVAL" + randomVal);
						if (randomVal < missileData.missileSpawnChance) {
							for (int i = 0; i < 2; i++) {
								PoolManager.Instance.ReuseObject (missileData.missile, transform.position, Quaternion.identity);		// Chance of spawning another missile on missile hit
							}
						}
					}

					Instantiate (explosion, transform.position, Quaternion.identity);
					Debug.Log ("MISSILE EXPLODED!");

					DestroyForReuse ();		// We explode after one hit
				}
			}
		}
	}

	IEnumerator DamageDelay(float dmgDelay) {
		canDmg = false;
		yield return new WaitForSeconds (dmgDelay);
		canDmg = true;
	}

	public override void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		StopAllCoroutines ();

		//transform.rotation = Quaternion.identity;
		canDmg = true;

		//Debug.Log ("MISSILE REUSED!");

		//GetComponent<Rigidbody> ().velocity = Vector3.zero;
	}
}
