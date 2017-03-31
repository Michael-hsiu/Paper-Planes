using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenPowerup : PoolObject {

	public GameObject shuriken;
	public GameObject player;
	protected bool isVisible;
	public float lifeTime = 10.0f;

	private IEnumerator cr;
	private ShurikenObj sken;

	private SpecialWeapons id = SpecialWeapons.SHURIKEN;


	void Start() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
	}

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

		Debug.Log ("PLAYER POS: " + pos);
		Debug.Log ("PLAYER FORWARD: " + player.transform.forward);


		float newX = pos.x + Mathf.Sin(player.transform.localEulerAngles.x * Mathf.Deg2Rad);
		float newY = pos.y + Mathf.Cos(player.transform.localEulerAngles.y * Mathf.Deg2Rad);
		float newZ = pos.z;

		Vector3 newPos = new Vector3 (newX, newY, newZ);

		ShurikenObj s = (ShurikenObj) PoolManager.Instance.ReuseObjectRef (shuriken, pos, Quaternion.identity);

		s.GetComponent<Rigidbody> ().AddForce(player.transform.TransformDirection(newPos) * 10);		// Outwards radiating movement, using position relative to world origin

		cr = BeginCountdown (lifeTime);
		StartCoroutine (cr);		// Begin detonation countdown
	}

	IEnumerator BeginCountdown(float lifeTime) {
		yield return new WaitForSeconds (lifeTime);

		// Destroy for reuse by pool
		sken.FinishExistence();
	}

	void HideInScene() {
		SetVisibility(false);
	}

	void SetVisibility(bool isVisible) {
		this.isVisible = isVisible;
		gameObject.GetComponent<Renderer>().enabled = this.isVisible;
		gameObject.GetComponent<Collider>().enabled = this.isVisible;

	}
}
