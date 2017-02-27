using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovementBomberType : MonoBehaviour {

	public float speed = 1.0f;
	public float rotationSpeed = 90.0f;
	public GameObject target;
	public bool isExploding = false;

	private Vector2 initialPos;
	private bool explosionActive = false;


	// Use this for initialization
	void Start () {
		initialPos = new Vector2(transform.position.x, transform.position.y);
		target = GameObject.FindGameObjectWithTag (Constants.PlayerTag);
	}

	void Update() {

		/** MOVEMENT UPDATE */
		if (isExploding) {
			//transform.position = Vector2.Lerp (transform.position, target.transform.position, Time.deltaTime / 3.0f);

			transform.Rotate(Vector3.forward * 150 * Time.deltaTime);	// Rotate the enemy MUCH FASTER; needs adjustment

			if (!explosionActive) {
				Debug.Log ("STARTED COROUTINE");
				StartCoroutine(BeginExplosion());
			}

			return;
		} else {
			// Move enemy ship up and down
			//this.transform.position = Vector2.Lerp (initialPos - offset, initialPos + offset, (Mathf.Sin(speed * Time.time) + 1.0f) / 2.0f);	// Natural up and down movement

			/** ROTATION UPDATE */
			// Enemy ship turns to face player
			Vector3 dist = target.transform.position - transform.position;	// Find vector difference between target and this
			dist.Normalize ();		// Get unit vector

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) + 180;	// Angle of rotation around z-axis (pointing upwards)

			Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

			transform.rotation = Quaternion.RotateTowards (transform.rotation, desiredRotation, rotationSpeed * Time.deltaTime);	// Rotate the enemy
		}
	}

	IEnumerator BeginExplosion() {
		explosionActive = true;


		yield return new WaitForSeconds(3);

		GameObject explosion = gameObject.GetComponent<EnemyManagerBomberType> ().explosion;

		Instantiate (explosion, transform.position, transform.rotation);
		Destroy (this.gameObject);		// We're dead, so get rid of this object :/
		//GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
		//UIManager.Singleton.UpdateScore ();	// Update score in UI
		Debug.Log("ENEMY KILLED! Obtained: " + 1000 + "points!");
		yield return null;

	}
}
