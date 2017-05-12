using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class MissileBoss : Ship, IEnemy {

	// Spec:
	// Missile attack -> fires IF enemy is detected in certain range, and if certain time has passed
	// Spin attack
	// Roam behavior / movestate
	
	#region Variables
	//public EnemyType enemyType = EnemyType.Ranged;
	public float senseRadius;
	public float missileDelay;	// Time btwn each missile firing
	public float atkTimeRange;	// Next atk will be launched at random after a certain time
	public GameObject missile;	// Missile fab
	public GameObject targetRot;	// The rotation we'll use to determine appropriate missile start rotation

	[SerializeField]
	private float nextAtkTime;	// Time at which we can launch next valid atk

	// States
	public IMoveState moveState;
	public IFireState firingState;

	public List<GameObject> missileSpawns;		// List of all the possible missile spawns we have
	#endregion


	#region Unity Life Cycle
	protected override void Start() {
		nextAtkTime = 5f;
		StartCoroutine (FireMissiles ());
	}
	#endregion


	#region Game Logic
	// Logic for firing missiles, with delay btwn each, for a certain pd of time
	IEnumerator FireMissiles() {
		while (true) {
			int lastMissileId = -1;
			GameObject randomSpawn = null;

			if (Time.time < nextAtkTime) {
				while (Time.time < nextAtkTime) {

					int randomId = Random.Range (0, missileSpawns.Count);
					randomSpawn = missileSpawns [randomId];

					// Fire a different missile from last time
					while (randomId == lastMissileId) {
						randomId = Random.Range (0, missileSpawns.Count);
						randomSpawn = missileSpawns[randomId];
					}
					lastMissileId = randomId;

					// Spawn the missile
					//Instantiate (missile, randomSpawn.transform.position, Quaternion.identity);
					PoolObject m = (PoolObject) PoolManager.Instance.ReuseObjectRef(missile, randomSpawn.transform.position, Quaternion.Inverse (targetRot.transform.rotation));
					yield return new WaitForSeconds (missileDelay);		// Wait for delay btwn missile firings
				}
				nextAtkTime = Time.time + Random.Range(0, atkTimeRange);		// Next atk will take place at 'nextAtkTime'	
				yield return null;
			} else {
				// Do nothing
				yield return null;
			}
		}
	}

	public override void Move() {
		// Dummy method	
	}

	// This is how far away we can detect the player and take measures to atk player
	public void OnDrawGizmos() {
		Gizmos.color = Color.white;
		Gizmos.DrawWireSphere(transform.position, senseRadius);
	}
	#endregion

}
