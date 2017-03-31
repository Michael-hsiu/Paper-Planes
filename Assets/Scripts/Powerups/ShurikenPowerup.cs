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
		//new Vector3(radius * Mathf.Sin(angle * Mathf.Deg2Rad), radius * Mathf.Cos(angle * Mathf.Deg2Rad), pos.z) * 30
		// Default move pattern is to turn and move towards player.
		Vector3 dist = player.transform.position - transform.position;		// Find vector difference between target and this
		//dist.Normalize ();													// Get unit vector
		//float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)
		//Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		s.GetComponent<Rigidbody> ().AddForce(-dist * 200);		// Outwards radiating movement, using position relative to world origin
		//s.GetComponent<Rigidbody> ().AddForce(player.transform.TransformDirection(newPos) * 10);		// Outwards radiating movement, using position relative to world origin

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
		Debug.Log ("LOCAL EULER Z: " + -1 * (360 - player.transform.localEulerAngles.z));
	}
}
