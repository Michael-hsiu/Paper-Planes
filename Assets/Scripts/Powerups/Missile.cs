using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Missile : PoolObject {

	public GameObject explosion;
	public GameObject target;
	public int damage = 1;
	public float damageRange = 10.0f;
	public float rotationSpeed = 90.0f;
	public float speed = 5.0f;
	public float dmgDelay = 0.1f;

	[SerializeField]
	private bool canDmg = true;		// Helps us register hit delays

	void OnEnable() {
		StopAllCoroutines ();
		FindTarget ();		// Find target as soon we go active
	}

	void Update() {
		Move ();
	}

	public void FindTarget() {
		// Get all colliders in area
		Collider[] hitColliders = Physics.OverlapSphere(transform.position, damageRange);
		List<GameObject> targets = (from c in hitColliders select c.gameObject).ToList();


		// Find the first unmarked enemy ship
		foreach (GameObject go in targets) {
			if (go.GetComponent<Ship> () != null && !((Ship) go.GetComponent<Ship> ().isMarked)) {
				target = go;		// Assign our target to first eligible ship
				break;
			}
		}

		// CASE: more missiles active than enemies; handle by selecting random enemy to target within valid range
		if (target == null) {
			target = Random.Range (0, hitColliders.Length);
		}
	}

	public void Move () {

		// We need to re-assign a target if original target has died
		if (target == null) {
			FindTarget ();
		} else {
			
			Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)
			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
			transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed);		// Move towards the enemy
		}
	}	

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			if (other.gameObject != null) {
				if (canDmg && other.gameObject.GetComponent<IDamageable<int>>() != null) {
					other.gameObject.GetComponent<IDamageable<int>>().Damage(damage);		// Inflict damage
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

		transform.position = Vector3.zero;
		transform.rotation = Quaternion.identity;

		canDmg = true;

		Debug.Log ("MISSILE REUSED!");

		GetComponent<Rigidbody> ().velocity = Vector3.zero;
	}
}
