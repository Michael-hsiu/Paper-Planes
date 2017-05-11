using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[SelectionBase]
public class PromotionArea : MonoBehaviour {

	public float attrRadius;		// Attraction radius
	public float smooth;
	//public float delay;			// Btwn collision detections
	//public bool attrEnemies;	// Bool flag for attracting enemies
	public int quota;			// How many enemies we need to absorb to summon mini-boss

	//public IEnumerator cr;

	void Awake() {
		//attrRadius = GetComponent<CapsuleCollider> ().radius;
	}


	// Attracts + destroys enemies
	void Update() {
		AttractEnemies ();
		/*if (!attrEnemies) {
			// Only attract if we're not destroyed, or if our quota hasn't been reached
			cr = IEAttractEnemies ();
			StartCoroutine (cr);
		}*/

	}

	public void OnDrawGizmos() {
		Gizmos.color = Color.white;
		Gizmos.DrawWireSphere(transform.position, attrRadius);
	}


	/*IEnumerator IEAttractEnemies() {
		attrEnemies = true;
		AttractEnemies ();
		yield return new WaitForSeconds (delay);
		attrEnemies = false;
	}*/


	public void AttractEnemies() {
		// Get all colliders in area
		Collider[] hitColliders = Physics.OverlapSphere(transform.position, attrRadius);
		List<GameObject> targets = (from c in hitColliders select c.gameObject).ToList();

		Debug.Log (targets.Count);
		// Attract all gameobjects to us, like a black hole
		foreach (GameObject go in targets) {
			Debug.Log (go.name);
			if (go.CompareTag(Constants.EnemyTag)) {
				//Debug.Log (go.name);
				Vector3 gravityDir = (transform.position - go.transform.position).normalized;
				go.GetComponent<Rigidbody> ().AddForce (gravityDir * Time.deltaTime * smooth);				
			}
		}
	}

	// Destroy enemies if they touch our collider, also decrement quota count
	// For shots
	public void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			other.gameObject.GetComponent<IKillable>().Kill();		// Destroy the shot that hit us
		}

		// Decrement quota
		quota -= 1;
	}


	// Update text for how many left to absorb
	// Another text for timer left on the area
	// When timer is up, area destroys itself and spawns a Powerup / points
	// Else, a mini-boss is spawned (mothership or assassin for now)

}
