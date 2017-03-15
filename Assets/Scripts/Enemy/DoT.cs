using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoT : MonoBehaviour {

	public GameObject go;
	public int damage = 10;
	public float damageDelay = 1.0f;

	void Start () {
		go = this.gameObject;
		StartCoroutine (Damage ());
	}

	IEnumerator Damage() {
		while (true) {
			go.GetComponent<Ship> ().health -= damage;
			yield return new WaitForSeconds (damageDelay);
		}
	}	
}
