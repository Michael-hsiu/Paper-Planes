using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TripMineWeapon : PoolObject {

	public GameObject mine;

	public float radius = 3.0f;
	public float mineFuse = 19.0f;
	public List<Mine> mines = new List<Mine> ();
	protected bool isVisible;
	private IEnumerator cr;
	private GameObject player;

	private SpecialWeapons id = SpecialWeapons.TRIPMINES;


	void Start() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
	}

	void ActivateWeapon(string id) {
		WeaponsManager.Instance.ActivateWeapon (id);	// Logic should be flipped
	}

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			// Do weapons logic; spawn things
			SpawnMines();
			HideInScene ();
		}
	}

	void SpawnMines() {
		
		// spawns, radius, rotations, explosions
		Vector3 pos = player.transform.position;
		float angle = 0f;
		while (angle < 360.0f) {

			float newX = pos.x + radius * Mathf.Sin(angle * Mathf.Deg2Rad);
			float newY = pos.y + radius * Mathf.Cos(angle * Mathf.Deg2Rad);
			float newZ = pos.z;

			Vector3 newPos = new Vector3 (newX, newY, newZ);
			Mine m = (Mine) PoolManager.Instance.ReuseObjectRef (mine, newPos, Quaternion.identity);

			m.GetComponent<Rigidbody> ().AddForce(new Vector3(radius * Mathf.Sin(angle * Mathf.Deg2Rad), radius * Mathf.Cos(angle * Mathf.Deg2Rad), pos.z) * 30);		// Outwards radiating movement, using position relative to world origin

			mines.Add(m);		// Add mines to a list
			angle += 72.0f;		// Spawn in 5 timess
		}
		cr = BeginCountdown (mineFuse);
		StartCoroutine (cr);		// Begin detonation countdown
	}

	IEnumerator BeginCountdown(float mineFuse) {
		yield return new WaitForSeconds (mineFuse);

		// Destroy for reuse by pool
		foreach (Mine m in mines) {
			if (m != null) {
				// Need to object pool explosions too
				m.Explode();
			}
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
}
