using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShotMover : MonoBehaviour {

	public float speed;

	void Start () {
		GetComponent<Rigidbody>().velocity = transform.right * -speed;
		//GetComponent<Rigidbody>().AddForce(transform.forward * -speed);
	}
}
