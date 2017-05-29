using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenObj : PoolObject {

	public ShurikenScrObj powerupData;		// Data about upgrades, etc.

	public GameObject explosion;
	//public int dmg = 1;
	public float rotationFactor = 300.0f;
	public float dmgDelay = 0.1f;

	public bool canDmg = true;
	//public float lifetime = 5.0f;
	private IEnumerator cr;
	private IEnumerator dd;
	//public int speed = 3;

	void OnEnable() {
		StopAllCoroutines ();
		canDmg = true;
		GetComponent<Rigidbody> ().velocity = Vector3.zero;
		cr = CircularRotate ();
		StartCoroutine (cr);	
	}

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			if (other.gameObject != null) {
				if (canDmg && other.gameObject.GetComponent<IDamageable<int>>() != null) {
					other.gameObject.GetComponent<IDamageable<int>>().Damage(powerupData.damage);		// Inflict damage
					Instantiate (explosion, transform.position, Quaternion.identity);
					dd = DamageDelay(dmgDelay);
					//StartCoroutine (dd);
				}
			}

		// Ricochet logic
		} else if (other.gameObject.CompareTag(Constants.GameBorderTop)) {
			if (other.gameObject != null) {
				Vector3 oldVel = transform.GetComponent<Rigidbody> ().velocity;
				transform.GetComponent<Rigidbody>().velocity = Vector3.Reflect (oldVel, Vector3.up);
			}
		} else if (other.gameObject.CompareTag(Constants.GameBorderSide)) {
			if (other.gameObject != null) {
				Vector3 oldVel = transform.GetComponent<Rigidbody> ().velocity;
				transform.GetComponent<Rigidbody>().velocity = Vector3.Reflect (oldVel, Vector3.right);
			}
		}
	}



	void Update() {
		//Debug.DrawLine(Vector3.zero, transform.GetComponent<Rigidbody> ().velocity, Color.red);	// Displays velocity vectors
	}

	public void FinishExistence() {
		StopCoroutine (cr);
		Instantiate (explosion, transform.position, Quaternion.identity);
		DestroyForReuse();		// Recycle this fab
	}

	IEnumerator CircularRotate() {
		float deathTime = Time.time + powerupData.duration;			// How long the shuriken stays alive
		while (Time.time < deathTime) {
			transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);	// Enemy normally rotates in circle
			yield return null;
		}
		FinishExistence ();
	}

	IEnumerator DamageDelay(float dmgDelay) {
		canDmg = false;
		yield return new WaitForSeconds (dmgDelay);
		canDmg = true;
	}

	public virtual void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		transform.position = Vector3.zero;
		transform.rotation = Quaternion.identity;
	}
}
