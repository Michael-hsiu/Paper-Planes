using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderHelper : MonoBehaviour {

	public GameObject explosion;

	void OnTriggerEnter2D(Collider2D other) {
		//Debug.Log ("COLLISION HERE");
		if (other.gameObject.CompareTag(Constants.PlayerTag)) {
			Instantiate (explosion, transform.position, transform.rotation);
			Destroy (transform.parent.gameObject);
		}
	}
}
