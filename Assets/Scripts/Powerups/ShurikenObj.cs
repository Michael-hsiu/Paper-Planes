using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenObj : PoolObject {

	public GameObject explosion;
	public float dmg = 20.0f;
	public float rotationFactor = 150.0f;
	private IEnumerator cr;

	void OnEnable() {
		GetComponent<Rigidbody> ().velocity = Vector3.zero;
		cr = CircularRotate ();
		StartCoroutine (cr);	
	}

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			if (other.gameObject != null) {
				other.gameObject.GetComponent<IDamageable<float>>().Damage(dmg);		// Inflict damage
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

	public virtual void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		transform.position = Vector3.zero;
		transform.rotation = Quaternion.identity;
	}
}
