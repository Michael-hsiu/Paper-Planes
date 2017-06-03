using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurstRushCollider : MonoBehaviour {

	public GameObject explosion;
	public int dmg = 20;

	void OnTriggerStay(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			if (other.gameObject != null) {
				if (other.gameObject.GetComponent<IDamageable<int>>() != null) {
					other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);		// Inflict damage
					Instantiate (explosion, other.transform.position, Quaternion.identity);
				}
			}
		}
	}

}
