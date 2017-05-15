using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitColliderHelper : MonoBehaviour {

	public Ship enemy;		// Assign the main enemy script here

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.activeSelf && other.gameObject.CompareTag (Constants.PlayerShot)) {

			if (other != null) {
				other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us
			}

			enemy.health -= GameManager.Singleton.playerDamage;			// We lost health

			if (enemy.health <= 0) {

				Instantiate (enemy.explosion, transform.position, transform.rotation);
				enemy.DestroyForReuse ();
				//Destroy (this.gameObject);		// We're dead, so get rid of this object :/

				GameManager.Singleton.RecordKill (enemy.enemyType);
				GameManager.Singleton.UpdateScore (enemy.enemyPoints);	// Add new score in GameManager
				UIManager.Singleton.UpdateScore ();	// Update score in UI

				Debug.Log("ENEMY KILLED! Obtained: " + enemy.enemyPoints + "points!");
			}

			//Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console
		} else if (other.gameObject.CompareTag(Constants.GameBorderTop) || other.gameObject.CompareTag(Constants.GameBorderSide)) {
			Vector3 vel = enemy.GetComponent<Rigidbody> ().velocity;
			enemy.transform.position = Vector3.zero;
			//GetComponent<Rigidbody> ().AddForce (-vel * 10);
			//GetComponent<Rigidbody> ().velocity *= -1;
			Debug.Log ("COLLIDED WITH GAME BORDER");
		}
	}
}
