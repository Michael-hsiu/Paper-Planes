using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyShootingDistanceType : MonoBehaviour {

	// Player shot logic
	public GameObject shot;
	public Transform shotSpawn;	// The location in front of player where shot spawns

	public float fireRate;

	private float nextFire = 0.3f;
	private float speed = 1.0f;


	void Update () {
		if (Time.time > nextFire) {
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing

			Instantiate (shot, shotSpawn.position, shotSpawn.rotation * Quaternion.Inverse(transform.rotation));	// Align parent with child
		}
	}
}