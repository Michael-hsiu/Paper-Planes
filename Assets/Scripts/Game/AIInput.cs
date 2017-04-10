using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Dash components modelled after: http://answers.unity3d.com/questions/892955/dashing-mechanic-using-rigidbodyaddforce.html
public class AIInput : InputComponent {

	public float speed = 5.0f;

	public Vector2 savedVelocity;
	//public DashState dashState;		// Stores current dash state

	public IEnumerator cr1;

	//public enum DashState { Ready, Dashing, Cooldown}

	// Called during PlayerShip's FixedUpdate()
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
		} else if (GameManager.Singleton.isDashing) {
			//Debug.Log ("GETS TO ISDASHING");
			if (!player.dashStarted) {

				player.dashStarted = true;		// Only 1 dash at a time
				player.dashEndTime = Time.time + player.dashDuration;		// Set end time for dash

				// Start dash co-routine
				cr1 = StartDash (player);
				StartCoroutine (cr1);
				Debug.Log ("STARTED COROUTINE");

			}
		}

	}

	IEnumerator StartDash(PlayerShip player) {

		savedVelocity = player.GetComponent<Rigidbody> ().velocity;		// Store velocity pre-dash
		Debug.Log ("INITIAL: " + player.dashStarted);
		Debug.Log ("ENDING: " + player.dashStarted);

		while (Time.time < player.dashEndTime) {
			player.GetComponent < Rigidbody> ().AddForce (player.transform.up * player.thrust);	// Push player forward for dash (may make this increase over time)
			Debug.Log ("DASH ACTIVE!!!");
			yield return new WaitForFixedUpdate ();
		}

		Debug.Log ("DASH ENDED!");
		player.GetComponent<Rigidbody> ().velocity = savedVelocity;		// Return to pre-dash velocity
	}
}
