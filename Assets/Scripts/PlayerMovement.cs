using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {

	public float speed = 10;

	private Rigidbody2D rb;


	void Start() {
		rb = GetComponent<Rigidbody2D> ();
	}

	void Update() {


		//transform.Rotate(new Vector3(0, 0, 40) * Time.deltaTime);

		if (Input.GetKey(KeyCode.D)) {
			transform.Rotate(new Vector3(0, 0, -50) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.A)) {
			//rb.AddForce(Vector2.left * speed);
			transform.Rotate(new Vector3(0, 0, 50) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.W)) {
			//transform.Translate(0, speed * Time.deltaTime, 0);
			//rb.AddForce(Vector2.up * speed);
			//rb.AddForce(new Vector2(transform.position.x + 1, transform.position.y + 1) * speed);
			rb.AddForce(transform.up * speed);
		}

		if (Input.GetKey(KeyCode.S)) {
			//rb.AddForce(Vector2.down * speed);
			//rb.AddForce(-transform.forward * speed * Time.deltaTime);
			//transform.Translate(0, -speed * Time.deltaTime, 0);
			rb.AddForce(-transform.up * speed);
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