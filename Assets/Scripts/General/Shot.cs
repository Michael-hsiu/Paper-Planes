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

	private Rigidbody rb;

	/** INTERFACE METHODS */

	public override void OnObjectReuse() {
		GetComponent<Rigidbody> ().velocity = Vector3.zero;		// Reset velocity
	}

	public void Move() {
		rb.velocity = transform.up * speed * speedMultiplier * Time.deltaTime;		// Propel shot forward
	}


	/** UNITY CALLBACKS */

	// Activate shot countdown when object is enabled
	void OnEnable() {
		StartCoroutine (DestroyAfterLifeTime (lifeTime));		// Delay, then "destroy" aka hide
	}

	protected void Start () {

		rb = GetComponent<Rigidbody> ();	// Find rigidbody
		//shotSpawn = transform.parent.gameObject;		// Initially spawned as child of shotSpawn
		//transform.parent = shotSpawn.transform;	// Set the shotSpawn as parent for shots

	}

	protected void FixedUpdate() {
		Move ();	// Shot starts traveling
	}

	IEnumerator DestroyAfterLifeTime(float lifeTime) {
		yield return new WaitForSeconds (lifeTime);
		DestroyForReuse ();		// "Destroy" the shot, place in object pool
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