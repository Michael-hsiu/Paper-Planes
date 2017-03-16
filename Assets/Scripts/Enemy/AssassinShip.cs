using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[SelectionBase]
public class AssassinShip : Ship {

	#region Variables
	public float detectionDist;		// How far away to detect Player
	public float rushDelay = 1.0f;
	public bool startTargeting;
	public bool isAttacking;

	private Vector2 offset = new Vector2(0, 3);
	private Vector3 playerPos;
	#endregion

	protected override void Initialize() {
		base.Initialize ();
	}

	public override void Move () {
		if (startTargeting) {

			if (!isAttacking) {
				StartCoroutine(BeginRush());
			}

			return;

		} else {
			
			// Enemy ship turns to face player
			Vector3 dist = target.transform.position - transform.position;
			dist.Normalize ();		// Get unit vector
			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;
			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);

			transform.position = Vector2.MoveTowards (transform.position, target.transform.position, Time.deltaTime * speed);

		}
	}
		
	#region Unity lifecycle
	protected override void Start () {
		Initialize ();
		Debug.Log("ASSASSIN SHIP START");
	}

	protected override void Update() {
		base.Update ();
	}
	#endregion


	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			Destroy (other.gameObject);		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {

				Kill ();

				GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		}
	}

	IEnumerator BeginRush() {
		isAttacking = true;		// Singleton co-routine
		playerPos = target.transform.position;		// Get player position (to rush to)

		yield return new WaitForSeconds(rushDelay);	 // Wait for a few seconds while rushing
		
		Instantiate (explosion, transform.position, transform.rotation);	// Explode! 
	}
}
