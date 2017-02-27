using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHelperBomberType : MonoBehaviour {


	/** INSTANCE VARS */

	//public GameObject explosion;
	//public float damageRange = 3.0f;

	//private int explosionDamage = 50;
	//private float explosionDelay = 3.0f;

	private GameObject player;


	/** UNITY CALLBACKS */

	void Start () {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);	// Find the player
	}


	void OnTriggerEnter2D(Collider2D other) {
		
		// If our AoE collider touches the player...
		if (other.gameObject.CompareTag (Constants.PlayerTag)) {

			GetComponentInParent<Rigidbody>().velocity = Vector3.zero; 	// We stop moving, precautionary measure
			GetComponentInParent<BomberShip>().isExploding = true;		// Tell parent to start explosion protocol

			//StartCoroutine (Explode (explosionDelay));	// Blow 'er up)

		}
	}


	/** CO-ROUTINES */
	/*IEnumerator Explode(float explosionDelay) {

		Debug.Log ("EXPLOSION COUNTDOWN BEGINS!");

		yield return new WaitForSeconds(explosionDelay); // Wait for a few seconds while beeping animation plays

		Instantiate (explosion, transform.position, transform.rotation);	// Explode! 

		/** Rudimentary way of checking if Player is within our explosion range; not normalized. */
		/*Vector3 playerPosition = player.transform.position;
		Vector3 ourPosition = transform.position;

		float xDiff = Mathf.Abs(playerPosition.x - ourPosition.x);
		float yDiff = Mathf.Abs(playerPosition.y - ourPosition.y);

		if (xDiff <= damageRange || yDiff <= damageRange) {
			GameManager.Singleton.playerHealth -= explosionDamage;	// Player hit decreased by explosion damage
			UIManager.Singleton.UpdateHealth ();	// Update health in UI
		}

		Destroy (transform.parent.gameObject);		// We're dead, so get rid of this object :/
		Debug.Log("ENEMY EXPLODED!");
	}*/


}
