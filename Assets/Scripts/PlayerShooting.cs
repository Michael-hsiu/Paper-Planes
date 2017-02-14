using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShooting : MonoBehaviour {

	//public Transform target1;
	//public Vector3 target;

	// Player shot logic
	public GameObject shot;
	//public Transform shotSpawn;	// The location in front of player where shot spawns
	//public GameObject sprite;	// Use rotation of player sprite to determine which direction shot fires

	public float fireRate;

	private float nextFire;
	private float speed = 1f;


	// Use this for initialization
	void Start () {
		//target = target1.transform.position;
	}
	
	void Update () {
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;
			Instantiate (shot, transform.position, transform.rotation);
		}


		/*GameObject projectile;
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;

			Vector2 distance = transform.position - shotSpawn.position;

			projectile = Instantiate (shot, transform.position, transform.rotation);
			target = target1.transform.position;

			float delta = speed * Time.deltaTime;
			projectile.transform.position = Vector3.MoveTowards(projectile.transform.position, target, delta);
			if (projectile.transform.position == target) {
				Destroy (projectile.gameObject);
			}
		}*/

		// Links to look at:
		//https://forum.unity3d.com/threads/rotate-parent-object-relative-to-child-rotation.404487/
		//https://forum.unity3d.com/threads/aligning-two-parent-objects-so-their-children-have-same-rotation.108646/
		// https://forum.unity3d.com/threads/2d-bullet-rotation-nearly-there.213948/
		// https://forum.unity3d.com/threads/rotate-parent-object-relative-to-child-rotation.404487/



	}
}









//Quaternion shotRotation = Quaternion.Euler (45f, 0f, distance);
//Instantiate (shot, transform.position, shotRotation);
//Instantiate (shot, transform.position, Quaternion.Euler(45, transform.localRotation.y, transform.localRotation.z));
//Instantiate(shot, shotSpawn.position, Quaternion.Euler(new Vector3(sprite.transform.rotation.x + 45, sprite.transform.rotation.y, sprite.transform.rotation.z)));
//Instantiate(shot, shotSpawn.position, sprite.transform.rotation);
//Instantiate(shot, shotSpawn.position, Quaternion.Euler(new Vector3(45, 0, 0)));		// Rotate projectile 45 degrees so its graphic is displayed
//GetComponent<AudioSource>().Play ();
