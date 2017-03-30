using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mine : PoolObject {

	public GameObject explosion;
	public float rotationFactor = 150.0f;

	void Start() {
		StartCoroutine (CircularRotate ());	
	}

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			other.gameObject.GetComponent<IKillable>().Kill();
			Explode ();
		}
	}

	public void Explode() {
		Instantiate (explosion, transform.position, Quaternion.identity);
		Destroy (this.gameObject);		// Recycle this fab
	}

	IEnumerator CircularRotate() {
		while (true) {
			transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);	// Enemy normally rotates in circle
			yield return null;
		}
	}
}
