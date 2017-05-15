using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class MissileBoss : Ship, IEnemy {

	// Spec:
	// Missile attack -> fires IF enemy is detected in certain range, and if certain time has passed
	// Spin attack

	// Roam behavior / movestate
	// EMP blasts
	// Health and other vars
	
	#region Variables
	//public EnemyType enemyType = EnemyType.Ranged;
	public float senseRadius;
	public float missileDelay;	// Time btwn each missile firing
	public float atkTimeRange;	// Next atk will be launched at random after a certain time
	public float missileAtkTime = 5.0f;		// Missile atk duration
	public float spinAtkTime = 5.0f;		// Spin atk duration
	public float rotFactor;		// How fast spin atk rotates
	public float atkPrefFactor = 1.5f;		// Similar to hashing; if one atk used too often, use other atk instead. Artificial balance.
	public float sqMoveDist = 36.0f;				// Squared dist. from player (detection dist.)
	public int numMissileAtks;		// For atk ratio
	public int numSpinAtks;			// For atk ratio

	public GameObject straightMissile;	// Missile fab
	public GameObject targetRot;	// The rotation we'll use to determine appropriate missile start rotation

	[SerializeField]
	private float nextAtkTime;	// Time at which we can launch next valid atk

	// States
	public IMoveState moveState;
	//public IFireState firingState;

	public List<Row> missileSpawns;		// List of all the possible missile spawns we have
	#endregion


	#region Unity Life Cycle
	protected override void Start() {

		moveState = GetComponent<IMoveState>();

		GetComponent<Rigidbody> ().AddForce (transform.up * 0.01f);
		nextAtkTime = Random.Range (2, 3);
		StartCoroutine (UseAttack ());
	}
	#endregion


	#region Game Logic
	// Logic for firing missiles, with delay btwn each, for a certain pd of time
	IEnumerator UseAttack() {
		while (true) {
			int lastMissileId = -1;
			GameObject randomSpawn = null;

			// Wait until we can start atking again
			if (Time.time >= nextAtkTime) {

				// Choose an atk randomly (may choose to weight later to prevent repeats)
				// 0=missiles, 1=spin
				int atkID = Random.Range (0, 2);

				// If we fire too many missiles, flip it. Vice versa for spin atks.
				if  (numSpinAtks != 0 && numMissileAtks != 0) {
					if ((double) numMissileAtks / numSpinAtks > atkPrefFactor) {
						atkID = 1;
					} else if ((double) numSpinAtks / numMissileAtks > atkPrefFactor) {
						atkID = 0;
					}
					double max = (double) numSpinAtks / numMissileAtks;
					if ((double) numMissileAtks / numSpinAtks > max) {
						max = ((double) numMissileAtks / numSpinAtks);
					}
					Debug.Log ("ATK PREF FACTOR: " + max);
				} else if (numMissileAtks - numSpinAtks > 2) {
					atkID = 1;
				} else if (numSpinAtks - numMissileAtks > 2) {
					atkID = 0;
				}

				if (atkID == 0) {
					numMissileAtks += 1;	// We chose missiles; record it.
					Debug.Log ("FIRING MISSILES");
					// Firing atk logic
					float endTime = Time.time + missileAtkTime;
					while (Time.time < endTime) {

						int randomId = -1;
						// Fire 1 missile from each side (L/R)
						foreach (Row l in missileSpawns) {

							// IDs are for each
							randomId = Random.Range (0, l.row.Count);
							randomSpawn = l.row[randomId];

							// Fire a different missile from last time
							while (randomId == lastMissileId) {
								randomId = Random.Range (0, l.row.Count);
								randomSpawn = l.row[randomId];
							}
							lastMissileId = randomId;	// So we don't fire from same location twice in a row

							// Spawn the missile
							//Instantiate (missile, randomSpawn.transform.position, Quaternion.identity);
							PoolObject m = (PoolObject) PoolManager.Instance.ReuseObjectRef(straightMissile, 
								randomSpawn.transform.position, Quaternion.Inverse (targetRot.transform.rotation));
						}
						yield return new WaitForSeconds (missileDelay);		// Wait for delay btwn missile firings	
					}
				} else if (atkID == 1) {
					numSpinAtks += 1;		// We chose spin atks; record it.
					Debug.Log ("SPIN ATTACK");

					// Spin atk logic
					float tempRotFactor = rotFactor;
					float endTime = Time.time + spinAtkTime;

					Quaternion oldRot = transform.rotation;
					while (Time.time < endTime) {
						transform.Rotate(Vector3.forward * tempRotFactor * Time.deltaTime);	// Rotate the enemy MUCH FASTER; needs adjustment
						tempRotFactor += 5.0f;		// Could maybe use lerp for incrementing exponentially
						yield return null;
					}
					transform.rotation = oldRot;		// Reset rotation
					Debug.Log ("SPIN ATTACK END");
				}

				// After either attack
				nextAtkTime = Time.time + Random.Range(3, atkTimeRange);		// Next atk will take place at 'nextAtkTime'	
				yield return null;
			} else {
				// Do nothing
				yield return null;
			}
		}
	}

	public override void Move() {
		moveState.UpdateState (this);
		Debug.Log ("UPDATING");
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag(Constants.GameBorderTop) || other.gameObject.CompareTag(Constants.GameBorderSide)) {
			Vector3 vel = GetComponent<Rigidbody> ().velocity;
			transform.position = Vector3.zero;
			//GetComponent<Rigidbody> ().AddForce (-vel * 10);
			//GetComponent<Rigidbody> ().velocity *= -1;
			Debug.Log ("COLLIDED WITH GAME BORDER");
		} else if (other.gameObject.CompareTag(Constants.PlayerTag)) {
			moveState.Direction = Direction.PlayerDetected;
			target = other.gameObject;
		}
	}

	// This is how far away we can detect the player and take measures to atk player
	public void OnDrawGizmos() {
		// Draw spin atk radius
		Gizmos.color = Color.white;
		Gizmos.DrawWireSphere(transform.position, senseRadius);

	}

	#endregion

}
