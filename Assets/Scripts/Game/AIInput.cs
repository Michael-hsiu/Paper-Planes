using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AIInput : InputComponent {

	public float speed = 5.0f;

	public override void UpdateInput(PlayerShip player) {

		// Auto-fire
		if (Time.time > player.nextFire) {
			player.Fire ();
		}

		bool axisInput = GameManager.Singleton.axisInput;	// Check if we register hori/vert movement

		// Temp logic for player destruction
		if (GameManager.Singleton.playerHealth <= 0) {
			Instantiate (player.explosion, transform.position, transform.rotation);
			transform.gameObject.SetActive (false);
		}

		// Temp logic for player destruction
		if (GameManager.Singleton.playerHealth <= 0) {
			Instantiate (player.explosion, transform.position, transform.rotation);
			transform.gameObject.SetActive (false);
		}

		if (Input.GetKey(KeyCode.D)) {
			player.transform.Rotate(new Vector3(0, 0, 110) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.A)) {
			player.transform.Rotate(new Vector3(0, 0, -110) * Time.deltaTime);
		}

		if (axisInput) {
			if (Input.GetKey(KeyCode.W)) {
				//player.transform.Translate (Vector2.up * Time.deltaTime * speed);
				player.GetComponent<Rigidbody>().AddRelativeForce(transform.up * speed);
			}

			if (Input.GetKey(KeyCode.S)) {
				//player.transform.Translate (Vector2.down * Time.deltaTime * speed);
				player.GetComponent<Rigidbody>().AddRelativeForce(-transform.up * speed);
			}
		}

		// Check if our speed cap is on (off if we're dashing!!!)
		if (GameManager.Singleton.speedCapped) {
			// Limit player's maximum velocity
			player.GetComponent<Rigidbody>().velocity = Vector3.ClampMagnitude(player.GetComponent<Rigidbody>().velocity, player.maxForward);

			// Comparing squared vector magnitudes
			if (player.GetComponent<Rigidbody>().velocity.sqrMagnitude == Mathf.Pow(player.maxForward, 2)) {
				Debug.Log ("MAX VELOCITY REACHED: " + player.GetComponent<Rigidbody> ().velocity.sqrMagnitude);		// Should be the square of maxForward
			}
		}
	}
}
