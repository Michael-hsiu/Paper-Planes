using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShip : FiringShip {

	/** INSTANCE VARS */

	private Rigidbody rb;

	protected float _speed = 2.0f;	
	protected int _shotDamage = 20;


	/** INTERFACE METHODS */

	public override void Damage(int damageTaken) {

		base.Damage (damageTaken);
		Debug.Log ("OLD PLAYER HEALTH: " + GameManager.Singleton.playerHealth);
		GameManager.Singleton.playerHealth -= damageTaken;
		Debug.Log ("NEW PLAYER HEALTH: " + GameManager.Singleton.playerHealth);
		UIManager.Singleton.UpdateHealth ();

	}

	/** UNITY CALLBACKS */

	protected override void Start () {

		this.Speed = _speed;
		this.ShotDamage = _shotDamage;

		Debug.Log ("Player's shotDamage: " + ShotDamage);

		rb = GetComponent<Rigidbody>();
	}

	protected override void Update () {

		// Firing logic
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {

			Debug.Log ("FIRING");
			Fire ();
		}

		// Temp logic for player destruction
		if (GameManager.Singleton.playerHealth <= 0) {
			Instantiate (explosion, transform.position, transform.rotation);
			transform.gameObject.SetActive (false);
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
