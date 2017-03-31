using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shuriken : PoolObject {

	public GameObject shuriken;
	protected bool isVisible;
	public float lifeTime = 10.0f;

	private IEnumerator cr;
	private GameObject player;
	private Shuriken sken;

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

		Shuriken m = (Shuriken) PoolManager.Instance.ReuseObjectRef (shuriken, pos, Quaternion.identity);

		m.GetComponent<Rigidbody> ().AddForce(pos * 30);		// Outwards radiating movement, using position relative to world origin

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
