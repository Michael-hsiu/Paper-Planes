using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shields : MonoBehaviour, IDamageable<int>, IKillable {

	/** INSTANCE VARS */
	[Header("Properties")]
	public int shieldHealth = 50;
	public float shieldDuration = 5.0f;


	/** INTERFACE METHODS */
	public void Damage(int damageTaken) {
		shieldHealth -= damageTaken;		// We lose health

		if (shieldHealth <= 0) {			// Check if we died, and if so, destroy us
			Kill ();
		}
	}

	public void Kill() {
		transform.gameObject.SetActive(false);	// "Destroy" our gameobject
		Debug.Log("SHIELDS DESTROYED!");
	}

	/** UNITY CALLBACKS */
	void Start () {
		StartCoroutine (ActivateShield ());
	}

	void OnTriggerEnter(Collider other) {


		if (other.gameObject.CompareTag (Constants.EnemyShot)) {

			Debug.Log ("OTHER DMG: " + other.gameObject.GetComponent<Shot>().ShotDamage);

			shieldHealth -= other.gameObject.GetComponent<Shot>().ShotDamage;			// We lost health

			Destroy (other.gameObject);		// Destroy the shot that hit us

			if (shieldHealth <= 0) {

				Kill ();

				Debug.Log ("SHIELD DESTROYED!");
			}

			Debug.Log ("SHIELD HEALTH: " + shieldHealth);	// Print message to console
		}
	}

	/** CO-ROUTINES */
	IEnumerator ActivateShield() {

		// Let shield run for its lifespan
		yield return new WaitForSeconds (shieldDuration);

		// De-activate shields
		Kill ();

	}
	
}
