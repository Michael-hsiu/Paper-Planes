using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenObj : PoolObject {

	public GameObject explosion;
	public int dmg = 1;
	public float rotationFactor = 300.0f;
	public float dmgDelay = 0.1f;
	private IEnumerator cr;
	private IEnumerator dd;
	public bool canDmg = true;
	public int speed = 3;

	void OnEnable() {
		StopAllCoroutines ();
		canDmg = true;
		GetComponent<Rigidbody> ().velocity = Vector3.zero;
		cr = CircularRotate ();
		StartCoroutine (cr);	
	}

	// For explosions triggered by contact
	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag (Constants.EnemyTag)) {
			if (other.gameObject != null) {
				if (canDmg && other.gameObject.GetComponent<IDamageable<int>>() != null) {
					other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);		// Inflict damage
					Instantiate (explosion, transform.position, Quaternion.identity);
					dd = DamageDelay(dmgDelay);
					//StartCoroutine (dd);
				}
			}
		} else if (other.gameObject.CompareTag(Constants.GameBorder)) {
			if (other.gameObject != null) {
				//Debug.Log ("Original pos: " + transform.position);

				//Vector3 reflectDir = new Vector3(other.transform.position.x, other.transform.position.y, 0);
				//Debug.Log (reflectDir.y);
				Vector3 oldVel = transform.GetComponent<Rigidbody> ().velocity;


				//transform.GetComponent<Rigidbody> ().velocity = -1 * new Vector3(oldVel.x, oldVel.y, 0);
				transform.GetComponent<Rigidbody>().velocity = Vector3.Reflect (oldVel, Vector3.up);

				//transform.position = Vector3.Reflect (transform.position, transform.right);
			}
		}
	}



	void Update() {
		Debug.DrawLine(Vector3.zero, transform.GetComponent<Rigidbody> ().velocity, Color.red);

		/*Ray ray = new Ray (transform.position, transform.up);
		RaycastHit hit;

		if (Physics.Raycast(ray, out hit, Time.deltaTime * speed + .1f)) {
			Vector3 reflectDir = Vector3.Reflect (ray.direction, hit.normal);
			float rot = Mathf.Atan2 (reflectDir.z, reflectDir.x) * Mathf.Rad2Deg;
			transform.position = new Vector3 (0, rot, 0);
			Debug.Log ("New rot: " + transform.eulerAngles);
		}*/

		//Vector3 proj = Vector3.Project (transform.up, Vector3.up);
		//proj.y = transform.position.y;
		//Vector3 reflectDir = Vector3.Reflect (transform.up, Vector3.up);


		//transform.position = Vector3.Reflect (transform.up, proj);

	}

	public void FinishExistence() {
		StopCoroutine (cr);
		Instantiate (explosion, transform.position, Quaternion.identity);
		DestroyForReuse();		// Recycle this fab
	}

	IEnumerator CircularRotate() {
		while (true) {
			//transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);	// Enemy normally rotates in circle
			yield return null;
		}
	}

	IEnumerator DamageDelay(float dmgDelay) {
		canDmg = false;
		yield return new WaitForSeconds (dmgDelay);
		canDmg = true;
	}

	public virtual void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
		transform.position = Vector3.zero;
		transform.rotation = Quaternion.identity;
	}
}
