using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mine : PoolObject {

	public GameObject explosion;
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
			other.gameObject.GetComponent<IKillable>().Kill();
			Explode ();
		}
	}

	public void Explode() {
		StopCoroutine (cr);
		Instantiate (explosion, transform.position, Quaternion.identity);
		DestroyForReuse();		// Recycle this fab
	}

	IEnumerator CircularRotate() {
		while (true) {
			transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);	// Enemy normally rotates in circle
			//GetComponent<Rigidbody> ().AddForce (transform.forward * 100);		// Outwards radiating movement
			//Debug.Log(transform.forward);
			yield return null;
		}
	}

	public virtual void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		transform.position = Vector3.zero;
		transform.rotation = Quaternion.identity;
		//StartCoroutine (cr);
	}
}
