using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shields : MonoBehaviour, IDamageable<int>, IKillable {

	/** INSTANCE VARS */
	[Header("Properties")]
	public int shieldHealth = 50;
	public float shieldDuration = 5.0f;
	public Color spriteColor;


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
		spriteColor = GetComponent<SpriteRenderer> ().color;


		StartCoroutine (ActivateShield ());
	}

	void Update() {
		//Debug.Log ("ALPHA: " + spriteColor.a);	
	}

	void OnTriggerEnter(Collider other) {


		if (other.gameObject.CompareTag (Constants.EnemyShot)) {

			if (other != null) {
				Shot shot = other.gameObject.GetComponent<Shot> () as Shot;
				if (shot != null) {
					//Debug.Log ("OTHER DMG: " + other.gameObject.GetComponent<Shot>().ShotDamage);
					shieldHealth -= shot.ShotDamage;			// We lost health
				}




				Destroy (other.gameObject);		// Destroy the shot that hit us

				if (shieldHealth <= 0) {

					Kill ();

					//Debug.Log ("SHIELD DESTROYED!");
				}

				//Debug.Log ("SHIELD HEALTH: " + shieldHealth);	// Print message to console
			}
		}
	}

	/** CO-ROUTINES */
	IEnumerator ActivateShield() {

		while (true) {
			GetComponent<SpriteRenderer> ().color = Color.Lerp (spriteColor, new Color (spriteColor.r, spriteColor.g, spriteColor.b, 0), Time.deltaTime * shieldDuration / 100000);
			spriteColor = GetComponent<SpriteRenderer> ().color;
			yield return null;

		}

		// Let shield run for its lifespan
		yield return new WaitForSeconds (shieldDuration);

		// De-activate shields
		Kill ();

	}
	
}
