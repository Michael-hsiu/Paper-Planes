using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shot : MonoBehaviour, IMovement {

	/** INSTANCE VARS */

	[Header("References")]
	public GameObject shotSpawn;

	[Space]

	[Header("Properties")]
	public float speed = 1.0f;
	public float lifeTime = 3.0f;

	private GameObject shotContainer;
	private Rigidbody rb;


	/** INTERFACE METHODS */

	public void Move() {
		rb.AddForce(transform.up * speed * Time.deltaTime);		// Propel shot forward
	}


	/** UNITY CALLBACKS */

	// Destroy shot after its lifetime
	protected void Awake () {
		Destroy (gameObject, lifeTime);
	}


	protected void Start () {

		rb = GetComponent<Rigidbody> ();	// Find rigidbody
		shotSpawn = transform.parent.gameObject;		// Initially spawned as child of shotSpawn

		transform.parent = shotSpawn.transform;	// Set the shotSpawn as parent for shots

		Move ();	// Shot starts traveling

	}
}
