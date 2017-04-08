using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Missile : PoolObject {

	public GameObject explosion;
	public GameObject player;
	public int dmg = 1;
	public float rotationSpeed = 90.0f;
	public float speed = 5.0f;
	public float dmgDelay = 0.1f;

	[SerializeField]
	private bool canDmg = true;		// Helps us register hit delays

	void OnEnable() {
		OnObjectReuse ();
	}

	void Start() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
	}

	void Update() {
		Move ();
	}

	public void Move () {

		if (player != null) {
			Vector3 dist = player.transform.position - transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) + 180;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
			transform.position = Vector2.MoveTowards (transform.position, player.transform.position, Time.deltaTime * speed);

		}

	}	

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			if (other.gameObject != null) {
				if (canDmg && other.gameObject.GetComponent<IDamageable<int>>() != null) {
					other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);		// Inflict damage
					Instantiate (explosion, transform.position, Quaternion.identity);
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

		GetComponent<Rigidbody> ().velocity = Vector3.zero;
	}
}
