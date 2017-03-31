using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenObj : PoolObject {

	public GameObject explosion;
	public int dmg = 5;
	public float rotationFactor = 300.0f;
	public float dmgDelay = 0.1f;
	private IEnumerator cr;
	private IEnumerator dd;
	[SerializeField]
	private bool canDmg = true;

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
					other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);		// Inflict damage
					Instantiate (explosion, transform.position, Quaternion.identity);
					dd = DamageDelay(dmgDelay);
					StartCoroutine (dd);
				}
			}
		}
	}

	public void FinishExistence() {
		StopCoroutine (cr);
		Instantiate (explosion, transform.position, Quaternion.identity);
		DestroyForReuse();		// Recycle this fab
	}

	IEnumerator CircularRotate() {
		while (true) {
			transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);	// Enemy normally rotates in circle
			yield return null;
		}
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
