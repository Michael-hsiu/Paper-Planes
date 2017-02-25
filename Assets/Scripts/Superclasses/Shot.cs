using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shot : MonoBehaviour, IMovement {

	/** INSTANCE VARS */

	[Header("References")]
	public GameObject shotSpawn;

	[Space]

	[Header("Properties")]
	public float speed;
	public float lifeTime = 3.0f;

	private GameObject shotContainer;
	private Rigidbody rb;


	/** INTERFACE METHODS */

	public void Move() {
		rb.AddForce(transform.up * speed * Time.deltaTime);		// Propel shot forward
	}


	/** UNITY CALLBACKS */

	// Destroy shot after its lifetime
	void Awake() {
		Destroy (gameObject, lifeTime);
	}


	void Start () {

		rb = GetComponent<Rigidbody> ();	// Find rigidbody
		shotSpawn = transform.parent;		// Initially spawned as child of shotSpawn

		transform.parent = shotSpawn.transform;	// Set the shotSpawn as parent for shots

		Move ();	// Shot starts traveling

	}
}
