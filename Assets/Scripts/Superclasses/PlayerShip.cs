using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShip : FiringShip {

	/** INSTANCE VARS */

	private Rigidbody2D rb;
	protected float _speed = 4.0f;	


	/** UNITY CALLBACKS */

	protected override void Start () {

		this.Speed = _speed;
		rb = GetComponent<Rigidbody2D>();
	}

	protected override void Update () {

		// Firing logic
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {

			Debug.Log ("FIRING");
			Fire ();
		}

		// Check for user input
		CheckForInput ();

	}
		
	private void CheckForInput() {
		
		if (Input.GetKey(KeyCode.D)) {
			transform.Rotate(new Vector3(0, 0, 90) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.A)) {
			transform.Rotate(new Vector3(0, 0, -90) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.W)) {
			rb.AddForce(transform.up * speed);
		}

		if (Input.GetKey(KeyCode.S)) {
			rb.AddForce(-transform.up * speed);
		}
	}
}