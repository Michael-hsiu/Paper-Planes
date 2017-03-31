using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Mine : PoolObject {

	public GameObject explosion;
	public float rotationFactor = 150.0f;
	public int explosionDmg = 20;
	public float dmgRange = 4.0f;
	private IEnumerator cr;

	void OnEnable() {
		GetComponent<Rigidbody> ().velocity = Vector3.zero;
		cr = CircularRotate ();
		StartCoroutine (cr);	
	}

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			Explode ();
		}
	}

	void DamageArea() {
		// Get all colliders in area
		Collider[] hitColliders = Physics.OverlapSphere(transform.position, dmgRange);
		List<GameObject> targets = (from c in hitColliders select c.gameObject).ToList();

		foreach (GameObject go in targets) {
			IDamageable<int> i = go.GetComponent (typeof(IDamageable<int>)) as IDamageable<int>;
			if (i != null && go.CompareTag(Constants.EnemyTag)) {
				i.Damage(explosionDmg);
			}
		}
	}

	public void Explode() {
		StopCoroutine (cr);
		DamageArea ();	// Deal AoE dmg
		Instantiate (explosion, transform.position, Quaternion.identity);
		DestroyForReuse();		// Recycle this fab
	}

	IEnumerator CircularRotate() {
		while (true) {
			transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);	// Enemy normally rotates in circle
			//GetComponent<Rigidbody> ().AddForce (transform.forward * 100);		// Outwards radiating movement
			//Debug.Log(transform.forward);
			yield return null;
		}
	}

	public virtual void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		transform.position = Vector3.zero;
		transform.rotation = Quaternion.identity;
		//StartCoroutine (cr);
	}
}
