using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShooting : MonoBehaviour {

	// Player shot logic
	public GameObject shot;
	public Transform shotSpawn;	// The location in front of player where shot spawns

	public float fireRate;

	private float nextFire;
	private float speed = 1.0f;


	/** INTERFACE METHODS */

	public void Fire() {

		//Debug.Log ("FIRING");
		// Check for all shotspawns in children
		foreach(Transform s in transform) {
			if (s.GetComponent<ShotSpawn>() != null) {
				s.GetComponent<ShotSpawn>().CreateShot ();	// Fire the shot!
			}
		}
	}

	void Start () {
		//target = target1.transform.position;
	}
	
	void Update () {
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing

			Fire ();
		}
	}
}