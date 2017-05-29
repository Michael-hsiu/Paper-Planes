using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenPowerup : Powerup {

	public GameObject shuriken;
	//public GameObject player;
	//protected bool isVisible;
	public float lifeTime = 10.0f;

	private IEnumerator cr; 
	private ShurikenObj sken;

	private SpecialWeapons id = SpecialWeapons.SHURIKEN;

/*
	void Start() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
	}*/

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			// Do weapons logic; spawn things
			SpawnShuriken();
			HideInScene ();
		}
	}

	void SpawnShuriken() {

		// spawns, radius, rotations, explosions
		Vector3 pos = player.transform.position;

		//Debug.Log ("PLAYER POS: " + pos);
		//Debug.Log ("PLAYER FORWARD: " + player.transform.forward);

		ShurikenObj s = (ShurikenObj) PoolManager.Instance.ReuseObjectRef (shuriken, pos, Quaternion.identity);

		s.GetComponent<Rigidbody> ().AddForce(player.transform.up * 500);		// Outwards radiating movement, using position relative to y-axis of player

		cr = BeginCountdown (lifeTime);
		StartCoroutine (cr);		// Begin detonation countdown
	}

	IEnumerator BeginCountdown(float lifeTime) {
		yield return new WaitForSeconds (lifeTime);

		// Destroy for reuse by pool
		if (sken != null) {
			sken.FinishExistence();
		}
	}

	void HideInScene() {
		SetVisibility(false);
	}

	void SetVisibility(bool isVisible) {
		this.isVisible = isVisible;
		gameObject.GetComponent<Renderer>().enabled = this.isVisible;
		gameObject.GetComponent<Collider>().enabled = this.isVisible;

	}

	void Update() {
		//Debug.Log ("LOCAL EULER Z: " + -1 * (360 - player.transform.localEulerAngles.z));
	}
}
