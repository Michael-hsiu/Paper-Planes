using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FasterShot : MonoBehaviour, IMovement {

	/** INSTANCE VARS */

	[Header("References")]
	public GameObject shotSpawn;
	public int shotDamage = 20;				// BUFFED change
	public float speed = 1.0f;
	public float speedMultiplier = 2.0f;	// BUFFED change
	public float lifeTime = 3.0f;

	private Rigidbody rb;

	/** INTERFACE METHODS */

	public void Move() {

		rb.velocity = transform.up * speed * speedMultiplier * Time.deltaTime;		// Propel shot forward

		//rb.AddForce(transform.up * speed * Time.deltaTime);		// Propel shot forward
	}


	/** UNITY CALLBACKS */

	// Destroy shot after its lifetime
	protected void Awake () {
		Destroy (gameObject, lifeTime);
	}


	protected void Start () {

		rb = GetComponent<Rigidbody> ();	// Find rigidbody
		//shotSpawn = transform.parent.gameObject;		// Initially spawned as child of shotSpawn

		//transform.parent = shotSpawn.transform;	// Set the shotSpawn as parent for shots

	}

	protected void FixedUpdate() {
		Move ();	// Shot starts traveling
	}


	/** PROPERTIES */
	public int ShotDamage { 
		get { return shotDamage; } 
		set { shotDamage = value; } 
	}

	public float SpeedMultiplier { 
		get { return speedMultiplier; } 
		set { speedMultiplier = value; } 
	}

}
