using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class RangedShip : FiringShip {

	#region Variables
	// States
	public RangedMS moveState;

	public GameObject firingRangeColliders;
	public GameObject safeDistanceColliders;
	public float offsetY = 3.0f;
	#endregion


	#region Unity Life Cycle
	protected override void Start () {

		// Call our overridden initalization method
		Initialize ();
		firingRangeColliders = Utils.FindChildWithTag (this.gameObject, Constants.RushChargeColliders);
		safeDistanceColliders = Utils.FindChildWithTag (this.gameObject, Constants.RushThrustColliders);
		moveState = new RangedMS ();

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

		/*// Move enemy ship up and down
		this.transform.position = Vector2.Lerp (initialPos - new Vector2(0, offsetY), initialPos + new Vector2(0, offsetY), (Mathf.Sin(speed * Time.time) + 1.0f) / 2.0f);	// Natural up and down movement


		// Enemy ship turns to face player
		Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
		dist.Normalize ();		// Get unit vector

		float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

		Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

		transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy*/
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
