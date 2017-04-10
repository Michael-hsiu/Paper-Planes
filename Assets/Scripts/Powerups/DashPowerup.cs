using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Modelled after: http://answers.unity3d.com/questions/892955/dashing-mechanic-using-rigidbodyaddforce.html
public class DashPowerup : PoolObject {

	public GameObject player;
	public float thrust = 5.0f;
	public float dashDur = 3.0f;
	public IEnumerator cr1;
	public SpecialWeapons id = SpecialWeapons.DASH;


	public enum DashState 
	{
		Ready,
		Dashing,
		Cooldown
	}

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
			Dash ();
			Debug.Log ("DASH STARTED");
			//cr1 = StartDash ();
			//StartCoroutine (cr1);
		}
	}

	IEnumerator DashDelay() {
		yield return new WaitForSeconds (dashDur);		// Allow player to break speed cap during this time
		GameManager.Singleton.speedCapped = true;		// Re-enable speed cap
	}

	void Dash() {
		GameManager.Singleton.speedCapped = false;		// Temporarily disable speed cap
		player.GetComponent < Rigidbody> ().AddForce (player.transform.up * thrust);	// Push player forward for dash (may make this increase over time)

		// Player can break speed limit
		cr1 = DashDelay ();
		StartCoroutine (cr1);
	}
}
