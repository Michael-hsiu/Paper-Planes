using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserCollider : MonoBehaviour {

	public int dmg = 10;		// Damage param for burstRush
	public float dmgDelay = 0.05f;		// Delay btwn hits to player
	[SerializeField] private float nextDmgTime = 0f;

	[SerializeField] private Collider laserCollider;

	void Awake() {
		laserCollider = GetComponent <BoxCollider> ();
	}

	void Update() {
		
	}


	void OnTriggerStay(Collider other) {

		if (other.gameObject.CompareTag (Constants.PlayerTag)) {
			
			// Damage the player continuously with laser, with some delay btwn hits
			if (other.gameObject != null) {
				if (other.gameObject.GetComponent<IDamageable<int>>() != null) {
					if (Time.time > nextDmgTime) {
						
						other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);		// Inflict damage
						Debug.Log ("PLAYER DMGED");

						nextDmgTime = Time.time + dmgDelay;
						//Instantiate (explosion, other.transform.position, Quaternion.identity);						
					}
				}
			}
		}
	}
}
