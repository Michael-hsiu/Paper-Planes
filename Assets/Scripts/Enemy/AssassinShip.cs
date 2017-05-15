using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[SelectionBase]
public class AssassinShip : Ship {

	#region Variables

	public float detectionDist;		// How far away to detect Player
	public float rushDelay = 1.0f;
	public float rushSpeed = 3.0f;
	public float rushDist = 30.0f;
	public float timeBtwnAtk = 4f;
	public bool startTargeting;
	public bool isAttacking;
	public bool onStandby;
	public Vector3 currPos;
	public Vector3 playerPos;
	public Vector3 playerDir;



	private Vector2 offset = new Vector2(0, 3);
	#endregion

	#region Unity Lifecycle
	protected override void Start () {
		Initialize ();
		enemyType = EnemyType.Assassin;
		Debug.Log("ASSASSIN SHIP START");
	}

	protected override void Update() {
		base.Update ();
	}
	#endregion

	#region Game Logic
	protected override void Initialize() {
		base.Initialize ();
	}

	public override void Move () {
		if (onStandby) {
			Vector3 dist = target.transform.position - transform.position;
			dist.Normalize ();		// Get unit vector
			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;
			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);
			if (!isSpeedBuffed) {
				transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
			} else {
				transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * buffedSpeedFactor * Time.deltaTime);	// Rotate the enemy
			}
			return;
		}
		if (startTargeting) {

			if (!isAttacking) {
				StartCoroutine(BeginRush());
				Debug.Log ("STARTED ASSASSIN COROUTINE");
			}

			return;

		} else {
			/*
			// Enemy ship turns to face player
			Vector3 dist = target.transform.position - transform.position;
			dist.Normalize ();		// Get unit vector
			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;
			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);

			//transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed);
			*/
		}
	}

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {

				Kill ();

				GameManager.Singleton.UpdateScore (enemyPoints);	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console

		}

	}

	IEnumerator BeginRush() {
		isAttacking = true;		// Singleton co-routine

		currPos = transform.position;	// Store start position
		Quaternion playerRot = target.transform.rotation;	// Store start rotation

		playerPos = target.transform.position;	// Get player position (to rush to)
		playerDir = (target.transform.position - transform.position).normalized * rushDist;		// Get player direction and scale it

		/*while (!transform.rotation.Equals(playerRot)) {
			Vector3 dist = playerPos - transform.position;
			dist.Normalize ();		// Get unit vector
			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;
			if (!isSpeedBuffed) {
				transform.rotation = Quaternion.RotateTowards (transform.rotation, playerRot, rotationSpeed * Time.deltaTime);	// Rotate the enemy
			} else {
				transform.rotation = Quaternion.RotateTowards (transform.rotation, playerRot, rotationSpeed * buffedSpeedFactor * Time.deltaTime);	// Rotate the enemy
			}
			yield return null;
		}*/

		Vector3 desiredPos = currPos + playerDir;

		yield return new WaitForSeconds(rushDelay);	 // Wait for a few seconds while rushing

		while (transform.position != desiredPos) {
			//Debug.Log ("IN LOOP");
			transform.position = Vector2.MoveTowards(transform.position, desiredPos, Time.deltaTime * speed * rushSpeed);
			yield return null;
		}

		Instantiate (explosion, transform.position, transform.rotation);	// Debug animation while playing 


		onStandby = true;
		yield return new WaitForSeconds (timeBtwnAtk);
		onStandby = false;

		//startTargeting = false;
		isAttacking = false;
	}
	#endregion
}
