using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class RangedShip : FiringShip {

	#region Variables
	// States
	public RangedMS moveState;
	public RangedFS firingState;

	public GameObject firingRangeColliders;
	public GameObject safeDistanceColliders;
	public float offsetY = 3.0f;
	public float sqFireDist;
	public float sqMoveDist;
	#endregion


	#region Unity Life Cycle
	protected override void Start () {

		// Call our overridden initalization method
		Initialize ();
		firingRangeColliders = Utils.FindChildWithTag (this.gameObject, Constants.RushChargeColliders);
		safeDistanceColliders = Utils.FindChildWithTag (this.gameObject, Constants.RushThrustColliders);

		// This is the squared distance, used when Player dashes and we need to see if they're too far from enemy
		sqMoveDist = Math.Pow (((CapsuleCollider) safeDistanceColliders).radius, 2);
		sqFireDist = Math.Pow (((CapsuleCollider) firingRangeColliders).radius, 2);

		// Component state initialization
		moveState = new RangedMS ();
		firingState = new RangedFS ();

		// Check that we're calling the right Start() method
		//Debug.Log("RANGED SHIP START");

	}

	protected override void Update() {

		// Use default movement
		//base.Update ();

		// State controls movement (satisfies inheritance impl, with state modularizing control)
		Move ();
		
		// Basic AI - firing logic
		if (Time.time > nextFire) {
			Fire ();
		}
	}
	#endregion

	#region Game Logic
	protected override void Initialize() {
		// Do normal initalization
		base.Initialize ();

		// Get the state needed

	}

	public override void Move () {
		// Allows movement state to control movement
		moveState.UpdateState (this);

	}	

	public override void Fire() {
		firingState.UpdateState (this);
	}

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.activeSelf && other.gameObject.CompareTag (Constants.PlayerShot)) {

			Debug.Log (String.Format("RANGED SHIP HIT BY PLAYER {0}", other.name));

			if (other != null) {
				other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us
			}

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {

				Instantiate (explosion, transform.position, transform.rotation);
				Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.UpdateScore (enemyPoints);	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}
	#endregion
}
