using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Modelled after: http://answers.unity3d.com/questions/892955/dashing-mechanic-using-rigidbodyaddforce.html
public class DashPowerup : PoolObject {

	public GameObject player;
	public bool isVisible = true;

	void Start() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
	}

	// Currently unused
	void ActivateWeapon(string id) {
		WeaponsManager.Instance.ActivateWeapon (id);	// Logic should be flipped
	}

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			// Do weapons logic; spawn things
			HideInScene ();

			GameManager.Singleton.isDashing = true;
			GameManager.Singleton.speedCapped = false;

			//Dash ();
			Debug.Log ("DASH BEGUN FROM POWERUP");
			//cr1 = StartDash ();
			//StartCoroutine (cr1);
		}
	}

	/*IEnumerator DashDelay() {
		yield return new WaitForSeconds (dashDur);		// Allow player to break speed cap during this time
		GameManager.Singleton.speedCapped = true;		// Re-enable speed cap
	}

	void Dash() {
		GameManager.Singleton.speedCapped = false;		// Temporarily disable speed cap
		player.GetComponent < Rigidbody> ().AddForce (player.transform.up * thrust);	// Push player forward for dash (may make this increase over time)

		// Player can break speed limit
		cr1 = DashDelay ();
		StartCoroutine (cr1);
	}*/

	void HideInScene() {
		SetVisibility(false);
	}

	void SetVisibility(bool isVisible) {
		this.isVisible = isVisible;
		gameObject.GetComponent<Renderer>().enabled = this.isVisible;
		gameObject.GetComponent<Collider>().enabled = this.isVisible;

	}
}
