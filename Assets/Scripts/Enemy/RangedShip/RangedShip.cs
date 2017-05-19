using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[SelectionBase]
public class RangedShip : FiringShip, IEnemy {

	#region Variables

	// States
	public IMoveState moveState;
	public IFireState firingState;

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
		firingRangeColliders = Utils.FindChildWithTag (this.gameObject, Constants.FiringRangeColliders);
		safeDistanceColliders = Utils.FindChildWithTag (this.gameObject, Constants.SafeDistanceColliders);

		// This is the squared distance, used when Player dashes and we need to see if they're too far from enemy
		sqMoveDist = Mathf.Pow (((CapsuleCollider) safeDistanceColliders.GetComponent<Collider>()).radius, 2);
		sqFireDist = Mathf.Pow (((CapsuleCollider) firingRangeColliders.GetComponent<Collider>()).radius, 2);

		// Component state initialization
		moveState = GetComponent<IMoveState>();
		firingState = GetComponent<IFireState>();

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
		enemyType = EnemyType.Ranged;
		// Get the state needed

	}

	public override void Kill() {
		float randomVal = UnityEngine.Random.value;
		if (randomVal <= 0.3f) {
			GameObject powerup = GameManager.Singleton.activeLevel.powerups [UnityEngine.Random.Range (0, GameManager.Singleton.activeLevel.powerups.Count)];
			Instantiate (powerup, transform.position, Quaternion.identity);	
		}
		//Debug.Break ();

		base.Kill ();
		GameManager.Singleton.RecordKill (enemyType);	// This should cover Missiles and Shurikens registering damage / kills

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
				DestroyForReuse ();
				//Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.RecordKill (this.enemyType);
				GameManager.Singleton.UpdateScore (enemyPoints);	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}
	#endregion
}
