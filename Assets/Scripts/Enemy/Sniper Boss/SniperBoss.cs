using System.Collections;
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
	public float teleDelay = 0.5f;		// The time btwn when visual marker for teleport marker appears, and when we actually teleport
	public float teleCooldown = 8.0f;	// Cooldown time for teleport
	public float safetyDist = 100.0f;	// If player is too close, will use explosives attack
	public float laserChargeTime = 3.0f;
	public float laserEmitTime = 4.0f;		// How long we fire the laser for
	public float xBound;
	public float yBound;
	public int numAtks = 0;				// Tracks # of times we atked. Useful for if we fire laser mult. times in a row.
	public bool isAtking = false;		// Desc. if boss is attacking
	public bool spawnEnabled = false;
	public bool teleportActive = false;
	public bool laserActive = false;
	public bool explAtkActive = false;

	[SerializeField] private float nextAtkTime;	// Time at which we can launch next valid atk
	public IEnumerator cr1;

	#endregion


	#region Unity Life Cycle
	protected override void Start() {
		
		Initialize ();		// Assigns target

		moveState = GetComponent<IMoveState>();

		Vector3 boxSize = GetComponent<BoxCollider> ().size;
		xBound = boxSize.x / 2;
		yBound = boxSize.y / 2;

		cr1 = Teleport ();
		StartCoroutine (cr1);

	}

	protected override void Update() {
		// Preliminary logic for laser
		Vector3 rayDir = new Vector3 (-transform.position.x * 2, transform.position.y, 0);
		Debug.DrawRay (transform.position, transform.up * 15);
	}
		
	#endregion

	#region Game Logic
	IEnumerator Teleport() {
		
		// Keep true while in current round
		while (true) {			
			if (teleportActive) {
				
				Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);
				yield return new WaitForSeconds (teleDelay);		// Activate visual marker, waiting to teleport

				// Teleport to a random location within bounds of collider
				transform.position = spawnLoc;			

				Debug.Log ("SNIPER BOSS TELEPORTED!");
				yield return new WaitForSeconds (teleCooldown);
				teleportActive = false;		// Can no longer teleport for awhile

			}
			yield return null;
		}
	}

	IEnumerator UseLaser() {
		
		while (true) {			
			if (laserActive) {

				// Charge time
				yield return new WaitForSeconds(laserChargeTime);

				// Fire laser for X sec, rotating at Y angles / sec.
				float endTime = Time.time + laserEmitTime;
				while (Time.time < endTime) {
					// Laser / rotation logic
					Vector3 rayDir = new Vector3 (-transform.position.x * 10, transform.position.y, 0);
					Debug.DrawRay (transform.position, rayDir);
				}
				// Brief cooldown in which boss can't do anything except rotate. (tell MS)

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

					laserActive = true;
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
		moveState.UpdateState (this);
	}

	void OnTriggerEnter(Collider other) {
	}


	// This is how far away we can detect the player and take measures to atk player
	public void OnDrawGizmosSelected() {

	}

	#endregion

}

