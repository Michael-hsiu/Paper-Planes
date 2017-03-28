using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shot : PoolObject, IMovement {

	/** INSTANCE VARS */

	[Header("References")]
	public GameObject shotSpawn;
	public int shotDamage = 10;
	public float speed = 1.0f;
	public float speedMultiplier = 1.0f;
	public float lifeTime = 3.0f;
	//public bool readyToDestroy = false;

	private Rigidbody rb;

	/** INTERFACE METHODS */

	public override void OnObjectReuse() {
		GetComponent<Rigidbody> ().velocity = Vector3.zero;		// Reset velocity
	}

	public void Move() {
		rb.velocity = transform.up * speed * speedMultiplier * Time.deltaTime;		// Propel shot forward
	}


	/** UNITY CALLBACKS */

	// Destroy shot after its lifetime
	protected void Awake () {
		StartCoroutine (DestroyAfterLifeTime (lifeTime));		// Delay, then "destroy" aka hide
		//Destroy (gameObject, lifeTime);
	}


	protected void Start () {

		rb = GetComponent<Rigidbody> ();	// Find rigidbody
		//shotSpawn = transform.parent.gameObject;		// Initially spawned as child of shotSpawn

		//transform.parent = shotSpawn.transform;	// Set the shotSpawn as parent for shots

	}

	protected void FixedUpdate() {
		Move ();	// Shot starts traveling
		//gameObject.SetActive (false);
		//Debug.Log (gameObject.activeInHierarchy);
	}

	IEnumerator DestroyAfterLifeTime(float lifeTime) {
		yield return new WaitForSeconds (lifeTime);
		gameObject.SetActive (false);
		//gameObject.GetComponent<MeshRenderer>().enabled = false;
		//gameObject.GetComponent<Collider>().enabled = false;
		Debug.Log ("SHOULD HAVE DESTROYED");
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