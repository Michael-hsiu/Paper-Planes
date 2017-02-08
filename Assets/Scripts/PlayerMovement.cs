using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {

	public float speed = 1;


	private Rigidbody2D rb;

	void Start() {
		rb = GetComponent<Rigidbody2D> ();
	}

	void Update() {

		if (Input.GetKey(KeyCode.D)) {
			rb.AddForce(Vector2.right * speed);
		}

		if (Input.GetKey(KeyCode.A)) {
			rb.AddForce(Vector2.left * speed);
		}

		if (Input.GetKey(KeyCode.W)) {
			rb.AddForce(Vector2.up * speed);
		}

		if (Input.GetKey(KeyCode.S)) {
			rb.AddForce(Vector2.down * speed);
		}


		/*if (Input.GetKey(KeyCode.D)) {
			transform.Translate (Vector2.right * speed);
		}

		if (Input.GetKey(KeyCode.A)) {
			transform.Translate (Vector2.left * speed);
		}

		if (Input.GetKey(KeyCode.W)) {
			transform.Translate (Vector2.up * speed);
		}

		if (Input.GetKey(KeyCode.S)) {
			transform.Translate (Vector2.down * speed);
		}*/


		/** OTHER WAYS OF MOVING PLAYER */
		//transform.position += Vector3.right * speed;
		//rb.AddForce(Vector3.right);
	}
}