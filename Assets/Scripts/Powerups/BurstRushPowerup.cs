using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurstRushPowerup : PoolObject {

	public GameObject burstChargeColliders;		// Assign in inspector
	public GameObject burstRushColliders;
	public bool isActive;
	public bool isCharging = false;
	public float chargeTime = 3.0f;
	public float rushTime = 3.0f;
	public float thrust = 80.0f;
	public float radius = 2.5f;
	public List<Collider> colliders;
	protected bool isVisible;
	private IEnumerator cr1;
	private IEnumerator cr2;
	public GameObject player;

	public SpecialWeapons id = SpecialWeapons.RUSH;


	void Start() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
		burstChargeColliders = BurstRushManager.Instance.burstChargeColliders;
		burstRushColliders = BurstRushManager.Instance.burstRushColliders;

		//burstChargeColliders.SetActive (false);
		//burstRushColliders.SetActive (false);
		//colliders = Utils.GetChildren (burstRushColliders);		// Get all phase II (rush) colliders
	}

	void ActivateWeapon(string id) {
		WeaponsManager.Instance.ActivateWeapon (id);	// Logic should be flipped
	}

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			// Do weapons logic; spawn things
			HideInScene ();
			// Begin Phase I, which will initiate Phase II
			cr1 = StartCharge ();
			StartCoroutine (cr1);

		}
	}

	// Draw Charge ring
	public void OnDrawGizmos() {
		if (isCharging) {
			Gizmos.color = Color.white;
			Gizmos.DrawWireSphere(player.transform.position, radius);
		}
	}

	// Phase I - charge stage.
	IEnumerator StartCharge() {
		
		// Activate Burst Rush colliders and disable firing and moving
		isCharging = true;
		GameManager.Singleton.axisInput = false;	// So we can't move while charging
		burstChargeColliders.SetActive (true);	// Enable charge collider

		yield return new WaitForSeconds (chargeTime);

		GameManager.Singleton.axisInput = true;		// Re-enable movement
		burstChargeColliders.SetActive (false);		// Disable charge collider

		// Begin Phase II - rush stage.
		isCharging = false;

		cr2 = StartRush ();
		StartCoroutine (cr2);
	}

	IEnumerator StartRush() {
		burstRushColliders.SetActive (true);
		player.GetComponent<Rigidbody> ().AddForce (player.transform.up * thrust);		// Propel player forward

		yield return new WaitForSeconds (rushTime);		// Also need to disable inputs

		burstRushColliders.SetActive (false);
		Debug.Log ("FORCE APPLIED!");

		cr2 = null;
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
