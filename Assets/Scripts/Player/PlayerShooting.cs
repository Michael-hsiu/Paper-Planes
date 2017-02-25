using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShooting : MonoBehaviour, IFires {

	// Player shot logic
	public GameObject shot;
	public Transform shotSpawn;	// The location in front of player where shot spawns

	public float fireRate;

	private float nextFire;
	private float speed = 1.0f;


	/** INTERFACE METHODS */

	public void Fire() {
		GetComponent<ShotSpawn> ().CreateShot ();
	}

	// Use this for initialization
	void Start () {
		//target = target1.transform.position;
	}
	
	void Update () {
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing

			Fire ();
			
			//Instantiate (shot, shotSpawn.position, shotSpawn.rotation * Quaternion.Inverse(transform.rotation));	// Align parent with child (get child rotation in terms of parent rotation (?)) (showSpawn relative rotation to Player)


			//Instantiate (shot, shotSpawn.position, transform.rotation * Quaternion.Inverse(shotSpawn.rotation));	// Align parent with child (get child rotation in terms of parent rotation (?)) (showSpawn relative rotation to Player)

		}
	}
}

		/** TRIED CODE */

		//Instantiate (shot, transform.position, shotSpawn.rotation * Quaternion.Inverse(transform.rotation));
		//Instantiate (shot, transform.position, transform.rotation);
		//Instantiate(shot, shotSpawn.position, shotSpawn.rotation);

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













//Quaternion shotRotation = Quaternion.Euler (45f, 0f, distance);
//Instantiate (shot, transform.position, shotRotation);
//Instantiate (shot, transform.position, Quaternion.Euler(45, transform.localRotation.y, transform.localRotation.z));
//Instantiate(shot, shotSpawn.position, Quaternion.Euler(new Vector3(sprite.transform.rotation.x + 45, sprite.transform.rotation.y, sprite.transform.rotation.z)));
//Instantiate(shot, shotSpawn.position, sprite.transform.rotation);
//Instantiate(shot, shotSpawn.position, Quaternion.Euler(new Vector3(45, 0, 0)));		// Rotate projectile 45 degrees so its graphic is displayed
//GetComponent<AudioSource>().Play ();
