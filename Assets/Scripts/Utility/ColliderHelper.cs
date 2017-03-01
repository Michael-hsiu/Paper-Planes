using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderHelper : MonoBehaviour {

	public GameObject explosion;

	void OnTriggerEnter2D(Collider2D other) {

		Debug.Log ("COLLISION HERE. Other was: " + other.gameObject.name);

		if (other.gameObject.CompareTag(Constants.PlayerTag)) {

			Debug.Log ("INNER REACHED!");
			
			Instantiate (explosion, transform.position, transform.rotation);
			Destroy (transform.parent.gameObject);

		}
	}
}
