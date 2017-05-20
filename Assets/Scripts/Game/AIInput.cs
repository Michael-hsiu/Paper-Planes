using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using CnControls;	// Mobile joystick package prefab

// Dash components modelled after: http://answers.unity3d.com/questions/892955/dashing-mechanic-using-rigidbodyaddforce.html
public class AIInput : MonoBehaviour, InputComponent {

	//public float speed = 5.0f;
	public bool controlsEnabled = true;
	public Vector2 savedVelocity;
	public Vector2 lastDashVelocity;	// For if we get hit by EMP while dashing, we keep velocity without losing full control
	//public DashState dashState;		// Stores current dash state

	public IEnumerator cr1;
	public VirtualJoystick virtualJoystick;

	//public enum DashState { Ready, Dashing, Cooldown}

	// Called during PlayerShip's FixedUpdate()
	public void UpdateInput(PlayerShip player) {

		if (controlsEnabled) {
			// Auto-fire
			if (Time.time > player.nextFire && !player.rushStarted && !player.dashStarted) {
				player.Fire ();
			}

			bool axisInput = GameManager.Singleton.axisInput;	// Check if we register hori/vert movement

			// Temp logic for player destruction
			if (GameManager.Singleton.playerHealth <= 0) {
				Instantiate (player.explosion, transform.position, transform.rotation);
				player.gameObject.SetActive (false);
				Debug.LogError ("PLAYER DIED!");
				Debug.Break ();
			}

			// COMPUTER INPUTS
			// Can't turn whilst dashing
			if (Input.GetKey(KeyCode.D) && !player.dashStarted) {
				//player.transform.GetComponent <Rigidbody>().angularVelocity = Vector3.zero;
				//player.transform.Rotate(new Vector3(0, 0, 200) * Time.deltaTime);
				player.transform.GetComponent<Rigidbody> ().AddTorque (new Vector3 (0, 0, -200) * Time.deltaTime, ForceMode.VelocityChange);
			}

			// Can't turn whilst dashing
			if (Input.GetKey(KeyCode.A) && !player.dashStarted) {
				//player.transform.GetComponent <Rigidbody>().angularVelocity = Vector3.zero;
				//player.transform.Rotate(new Vector3(0, 0, -200) * Time.deltaTime);
				player.transform.GetComponent<Rigidbody> ().AddTorque (new Vector3 (0, 0, 200) * Time.deltaTime, ForceMode.VelocityChange);
			}

			if (axisInput) {
				if (Input.GetKey(KeyCode.W)) {
					//player.transform.Translate (Vector2.up * Time.deltaTime * speed);
					player.GetComponent<Rigidbody>().AddRelativeForce(transform.up * player.speed);
				}

				if (Input.GetKey(KeyCode.S)) {
					//player.transform.Translate (Vector2.down * Time.deltaTime * speed);
					player.GetComponent<Rigidbody>().AddRelativeForce(-transform.up * player.speed);
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


			// MOBILE INPUTS
			//Vector3 movement = new Vector3 (CnInputManager.GetAxis ("Horizontal"), CnInputManager.GetAxis ("Vertical"), 0f);
			//player.GetComponent<Rigidbody>().AddRelativeForce(movement * player.speed);
//			Vector3 dir = Vector3.zero;
//			dir.x = Input.GetAxis ("Horizontal") * Time.deltaTime;
//			dir.z = Input.GetAxis ("Vertical") * Time.deltaTime;
/*/			float translation = Input.GetAxis("Vertical") * player.speed;
			float rotation = Input.GetAxis("Horizontal") * player.speed;
			translation *= Time.deltaTime;
			rotation *= Time.deltaTime;
			transform.Translate(0, 0, translation);
			transform.Rotate(0, rotation, 0);
*/
			// If there is any movement on joystick
			if (virtualJoystick.inputDirection != Vector3.zero) {

				// Joystick Rotation logic
				Vector3 dir = virtualJoystick.inputDirection;
				float zAngle = (Mathf.Atan2(dir.z, dir.x) * Mathf.Rad2Deg)- 90;	// Angle of rotation around z-axis (pointing upwards)
				Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion
				player.transform.rotation = desiredRotation;

				// Movement logic
				player.GetComponent<Rigidbody>().AddRelativeForce(transform.up * player.speed);
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

	// Disable player control - activated when hit my EMP wave
	public void DisableControls() {
		StopAllCoroutines ();
		if (Time.time < GameManager.Singleton.playerShip.dashEndTime) {
			GameManager.Singleton.playerShip.GetComponent <Rigidbody>().velocity = lastDashVelocity;
		} else {
			GameManager.Singleton.playerShip.GetComponent <Rigidbody>().velocity = savedVelocity;
		}
		GameManager.Singleton.playerShip.dashStarted = false;
		StartCoroutine (DisableControlsRoutine());
	}

	IEnumerator DisableControlsRoutine() {
		controlsEnabled = false;
		yield return new WaitForSeconds (1.5f);
		controlsEnabled = true;
	}


	// Dash powerup for player
	public void Dash(PlayerShip player) {
		if (GameManager.Singleton.dashes > 0 && !player.rushStarted) {
			//Debug.Log ("DASH KEY REGISTERED!");
			if (!player.dashStarted) {		// Makes sure we only have 1 dash at a time

				GameManager.Singleton.isDashing = true;
				GameManager.Singleton.speedCapped = false;
				GameManager.Singleton.dashes -= 1;
				UIManager.Singleton.UpdateDashText (GameManager.Singleton.dashes);

				player.dashStarted = true;		// Only 1 dash at a time
				player.dashEndTime = Time.time + player.dashDuration;		// Set end time for dash

				// Start dash co-routine
				/*if (cr1 != null) {
				StopCoroutine (cr1);
			}*/
				cr1 = StartDash (player);
				StartCoroutine (cr1);
			}
		}
	}

	IEnumerator StartDash(PlayerShip player) {

		GameManager.Singleton.onDashCooldown = true;
		//Debug.Log ("STARTED DASH COROUTINE");


		savedVelocity =  Vector3.ClampMagnitude(player.GetComponent<Rigidbody>().velocity, 1.0f);		// Store velocity pre-dash

		Vector3 forceToAdd = player.transform.up;		// Starting force, to be incremented every fixedUpdate

		player.gameObject.GetComponent<Collider>().enabled = false;		// Can't be hit when dashing

		player.GetComponent<Rigidbody> ().velocity = player.transform.up;

		while (Time.time < player.dashEndTime) {
			//if (player.GetComponent<Rigidbody>().velocity < )
			//player.GetComponent<Rigidbody> ().velocity *= 1.3f;

			player.GetComponent<Rigidbody> ().velocity = 1.8f * Vector3.ClampMagnitude(player.GetComponent<Rigidbody>().velocity, 7.0f);
			lastDashVelocity = player.GetComponent<Rigidbody> ().velocity;

			//forceToAdd += new Vector3 (forceToAdd.x * 1.001f, forceToAdd.y * 1.001f, forceToAdd.z * 1.001f);
			//player.GetComponent < Rigidbody> ().AddForce (forceToAdd);	// Push player forward for dash (may make this increase over time)
			Debug.Log ("DASH ACTIVE!!!");
			yield return new WaitForFixedUpdate ();
		}

		//Debug.Log ("DASH ENDED!");

		yield return new WaitForSeconds (0.15f);		// Short delay for player to re-orient after dash

		player.GetComponent<Rigidbody> ().velocity = savedVelocity;		// Return to pre-dash velocity
		player.gameObject.GetComponent<Collider>().enabled = true;		// Can now be hit after dashing

		player.dashStarted = false;		// Player is no longer dashing

		GameManager.Singleton.isDashing = false;
		GameManager.Singleton.onDashCooldown = false;

		GameManager.Singleton.speedCapped = true;


		yield return new WaitForSeconds (0.1f);
		GameManager.Singleton.onDashCooldown = false;

	}

	//IEnumerator OnDashCoolDown() {
				
	//}

}
