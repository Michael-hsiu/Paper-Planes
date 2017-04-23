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
		if (Time.time > player.nextFire && !player.rushStarted && !player.dashStarted) {
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


		// Standard inputs
		// Can't turn whilst dashing
		if (Input.GetKey(KeyCode.D) && !player.dashStarted) {
			player.transform.Rotate(new Vector3(0, 0, 110) * Time.deltaTime);
		}

		// Can't turn whilst dashing
		if (Input.GetKey(KeyCode.A) && !player.dashStarted) {
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


		// Powerup input keys
		if (Input.GetKey(KeyCode.G)) {		// Use Dash powerup
			if (GameManager.Singleton.dashes > 0 && !player.rushStarted) {
				Dash (player);
				Debug.Log ("DASH KEY REGISTERED!");
			}
		}

		if (Input.GetKey(KeyCode.H)) {		// Use Burst Rush powerup
			if (GameManager.Singleton.rushes.Count > 0 && !player.dashStarted) {
				player.rushStarted = true;		// To make sure we can't activate 2 at a time
				GameManager.Singleton.rushes.Dequeue ().TriggerCharge (player);	// Get the FIFO rush powerup; tell it to activate a rush!!!
				Debug.Log ("RUSH KEY REGISTERED!");
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

	// Dash powerup for player
	void Dash(PlayerShip player) {

		if (!player.dashStarted) {		// Makes sure we only have 1 dash at a time
			
			GameManager.Singleton.isDashing = true;
			GameManager.Singleton.speedCapped = false;
			GameManager.Singleton.dashes -= 1;
			UIManager.Singleton.UpdateDashText (GameManager.Singleton.dashes);

			player.dashStarted = true;		// Only 1 dash at a time
			player.dashEndTime = Time.time + player.dashDuration;		// Set end time for dash

			// Start dash co-routine
			if (cr1 != null) {
				StopCoroutine (cr1);
			}
			cr1 = StartDash (player);
			StartCoroutine (cr1);

		}
	}

	IEnumerator StartDash(PlayerShip player) {

		GameManager.Singleton.onDashCooldown = true;
		Debug.Log ("STARTED DASH COROUTINE");


		savedVelocity = player.GetComponent<Rigidbody> ().velocity;		// Store velocity pre-dash

		Vector3 forceToAdd = player.transform.up;		// Starting force, to be incremented every fixedUpdate

		player.gameObject.GetComponent<Collider>().enabled = false;		// Can't be hit when dashing

		player.GetComponent<Rigidbody> ().velocity = player.transform.up;

		while (Time.time < player.dashEndTime) {
			//if (player.GetComponent<Rigidbody>().velocity < )
			//player.GetComponent<Rigidbody> ().velocity *= 1.3f;

			player.GetComponent<Rigidbody> ().velocity *= 1.4f;
		

			//forceToAdd += new Vector3 (forceToAdd.x * 1.001f, forceToAdd.y * 1.001f, forceToAdd.z * 1.001f);
			//player.GetComponent < Rigidbody> ().AddForce (forceToAdd);	// Push player forward for dash (may make this increase over time)
			Debug.Log ("DASH ACTIVE!!!");
			yield return new WaitForFixedUpdate ();
		}

		Debug.Log ("DASH ENDED!");

		yield return new WaitForSeconds (0.1f);		// Short delay for player to re-orient after dash

		player.dashStarted = false;		// Player is no longer dashing


		player.gameObject.GetComponent<Collider>().enabled = true;		// Can now be hit after dashing
		player.GetComponent<Rigidbody> ().velocity = savedVelocity;		// Return to pre-dash velocity

		GameManager.Singleton.isDashing = false;
		GameManager.Singleton.onDashCooldown = false;

		GameManager.Singleton.speedCapped = true;

		yield return new WaitForSeconds (0.1f);
		GameManager.Singleton.onDashCooldown = false;

	}

	//IEnumerator OnDashCoolDown() {
				
	//}

}
