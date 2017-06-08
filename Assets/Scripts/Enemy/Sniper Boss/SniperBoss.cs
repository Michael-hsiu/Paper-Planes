﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class SniperBoss : Ship, IEnemy {

	/** 
	Spec:

	- Turn to player
	- Teleports to random pt far from player
	- Charges + fires laser in arc
		1) Charge. 
		2) Then fire laser for X sec, rotating at Y angles / sec. (can fire 3 lasers consecutively!!!!)
		3) Then brief cooldown in which boss can't do anything except rotate.
		4) Then teleport, start charging + repeat process again.
	 - Scatters small explosives 
	 */

	#region Variables

	public float sqDist = 100.0f;		// Distance at which it starts backing away from player
	public float spawnDelay = 5.0f;
	public float safetyDist = 100.0f;	// If player is too close, will use explosives attack

	[Header("TELE LOGIC")]
	public float teleDelay = 0.5f;		// The time btwn when visual marker for teleport marker appears, and when we actually teleport
	public float teleCooldown = 8.0f;	// Cooldown time for teleport
	public float postTeleDelay = 1.0f;
	public bool teleportActive = false;

	[Header("LASER LOGIC")]
	public float laserChargeTime = 3.0f;
	public float laserEmitTime = 4.0f;		// How long we fire the laser for
	public bool laserActive = false;

	public bool isAtking = false;		// Desc. if boss is attacking
	public int numAtks = 0;				// Tracks # of times we atked. Useful for if we fire laser mult. times in a row.
	public bool explAtkActive = false;


	public float endTime;
	public float xBound;
	public float yBound;
	public bool spawnEnabled = false;


	public Collider mapCollider;
	public GameObject laserCollider;
	//public GameObject laserSprite;		// Temporary sprite
	public GameObject teleMarker;		// Visual marker for future teleport location

	[SerializeField] private float nextAtkTime;	// Time at which we can launch next valid atk
	public IEnumerator teleRoutine;
	public IEnumerator laserRoutine;

	#endregion


	#region Unity Life Cycle
	protected override void Start() {
		
		//Initialize ();		// Assigns target
		base.Start ();

		mapCollider = GameManager.Singleton.mapCollider;
		moveState = GetComponent<IMoveState>();

		Vector3 boxSize = mapCollider.GetComponent<BoxCollider> ().size;
		xBound = boxSize.x / 2;
		yBound = boxSize.y / 2;

		//teleportActive = true;
		teleRoutine = Teleport ();
		StartCoroutine (teleRoutine);

		laserActive = true;
		laserRoutine = UseLaser ();
		StartCoroutine (laserRoutine);


	}
		
	#endregion

	#region Game Logic
	void ShowLaser() {
		// Preliminary logic for laser
		if (!laserCollider.gameObject.activeSelf) {
			laserCollider.SetActive (true);
			//laserSprite.SetActive (true);
		}
		Vector3 rayDir = new Vector3 (-transform.position.x * 2, transform.position.y, 0);
		Debug.DrawRay (transform.position, transform.up * 30);
	}

	void HideLaser() {
		laserCollider.SetActive (false);
		//laserSprite.SetActive (false);
	}

	IEnumerator Teleport() {
		
		// Keep true while in current round
		while (true) {			
			while (teleportActive) {
				
				Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);
				GameObject go = Instantiate (teleMarker, spawnLoc, Quaternion.identity);

				teleportActive = false;		// Can no longer teleport for awhile
				yield return new WaitForSeconds (teleDelay);		// Activate visual marker, waiting to teleport

				// Teleport to a random location within bounds of collider
				transform.position = spawnLoc;
				Destroy (go);
				yield return new WaitForSeconds (postTeleDelay);

				//Debug.Log ("SNIPER BOSS TELEPORTED!");

				// Allow UseLaser routine to take over
				laserActive = true;
				while (laserActive) {
					yield return null;
				}
				teleportActive = true;
				//yield return new WaitForSeconds (teleCooldown);		 

			}
			yield return null;
		}
	}

	IEnumerator UseLaser() {
		
		while (true) {		
			while (laserActive) {

				// Turn to player first
				float turnTime = Time.time + 2.0f;
				while (Time.time < turnTime) {
					Vector3 playerDist = target.transform.position - transform.position;	// Find vector difference between target and this
					playerDist.Normalize ();		// Get unit vector
					float zPlayerAngle = (Mathf.Atan2(playerDist.y, playerDist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)

					Quaternion rot = Quaternion.Euler (0, 0, zPlayerAngle);		// Store rotation as an Euler, then Quaternion
					transform.rotation = Quaternion.RotateTowards (transform.rotation, rot, rotationSpeed * Time.deltaTime);	// Rotate the enemy
					yield return null;
				}

				// Charge time
				float chargeTime = Time.time + laserChargeTime;
				while (Time.time < chargeTime) {
					Debug.Log ("CHARGING LASER");
					yield return null;
				}

				while (numAtks < 3) {

					// Fire laser for X sec, rotating at Y angles / sec.
					endTime = Time.time + laserEmitTime;
					Debug.Log (string.Format ("CURR TIME: {0}, ENDTIME: {1}", Time.time, endTime));
					Vector3 targetStartPos = target.transform.position;	// Take measurements to determine which way target is moving
					Vector3 newPos = Vector3.zero;
					//bool tookPosMeas = false;
					
					//if (!tookPosMeas) {			// In case we need to take more meas.
					yield return new WaitForSeconds (0.05f);
					newPos = target.transform.position;
					//tookPosMeas = true;
					Debug.Log ("TOOK MEAS");
					//}


					// Need to fix cases - can't change after we start rotating
					if (newPos.y < targetStartPos.y /*&& newPos.x > transform.position.x*/) {
						while (Time.time < endTime) {
							transform.RotateAround (transform.position, Vector3.forward, Time.deltaTime * -5.0f);		// Rotate CW
							ShowLaser ();
							yield return null;
						}
					} else if (newPos.y > targetStartPos.y /*&& newPos.x > transform.position.x*/) {
						while (Time.time < endTime) {
							transform.RotateAround (transform.position, Vector3.forward, Time.deltaTime * 5.0f);		// Rotate CCW
							ShowLaser ();
							yield return null;
						}
					} else {
						while (Time.time < endTime) {
							transform.RotateAround (transform.position, Vector3.forward, Time.deltaTime * 5.0f);		// Rotate CCW
							ShowLaser ();
							yield return null;
						}
					}
				
					HideLaser ();
					Debug.Log ("NUMATKS = " + numAtks);
					numAtks += 1;
					if (numAtks >= 3) {
						numAtks = 0;
						break;
					}
					yield return new WaitForSeconds (1.5f);
					// Laser / rotation logic
					//Vector3 rayDir = new Vector3 (-transform.position.x * 10, transform.position.y, 0);
					//Debug.DrawRay (transform.position, rayDir);

					//transform.rotation = Quaternion.Slerp (transform.rotation, destRot, Time.deltaTime * 0.5f);
				}

				// Brief cooldown in which boss can't do anything except rotate. (tell MS)
				laserActive = false;
				teleportActive = true;
				//Debug.Log ("COOLDOWN");

			}
			yield return null;
		}
	}

	IEnumerator UseExplosives() {

		while (true) {			
			if (explAtkActive) {


			}
			yield return null;
		}
	}


	IEnumerator UseAttack() {
		while (true) {

			// Wait until we can start atking again
			if (Time.time >= nextAtkTime) {

				// Choose an atk randomly (may choose to weight later to prevent repeats)
				// 0=laser, 1=explosives (must use if player is close)

				//int atkID = 0; /* = Random.Range (0, 2); */
				isAtking = true;		// We're now attacking

				if (numAtks >= 3) {		// If we've atked 3 times in a row

					teleportActive = true;
					StartCoroutine (Teleport ());

					// We let Teleport routine do its job
					while (teleportActive) {
						yield return null;
					}

				} else if (moveState.Direction == Direction.PlayerUndetected) {	
					// Only use our laser if player is far enough away to be undetected (MS performs this check).

					//laserActive = true;
					StartCoroutine (UseLaser ());

					while (laserActive) {
						yield return null;
					}

				} else if (moveState.Direction == Direction.PlayerDetected) {
					// Use our explosives if player is too close, to make them go away!	

					explAtkActive = true;
					StartCoroutine (UseExplosives());

					while (explAtkActive) {
						yield return null;
					}
				}


				/*// Fix to explosives atk
				if (target != null && Utils.SquaredEuclideanDistance(gameObject, target.gameObject) < safetyDist) {
					
				}*/




				// After either attack
				//nextAtkTime = Time.time + Random.Range(3, atkTimeRange);		// Next atk will take place at 'nextAtkTime'	
				isAtking = false;		// No longer attacking
				moveState.Direction = Direction.PlayerDetected;
				yield return null;
			} 
			yield return null;
		}
	}




	public override void Move() {
		moveState.UpdateState ();
	}

	void OnTriggerEnter(Collider other) {
		
		if (other.gameObject.activeSelf && other.gameObject.CompareTag (Constants.PlayerShot)) {

			if (other != null) {
				other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us
			}


			if (health <= 0) {

				Instantiate (explosion, transform.position, transform.rotation);
				DestroyForReuse ();
				//Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.RecordEnemyKilled (enemyType);
				GameManager.Singleton.UpdateScore (enemyPoints);	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}


	#endregion

}

