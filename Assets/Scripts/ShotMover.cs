using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShotMover : MonoBehaviour {

	public float speed;

	void Start () {
		GetComponent<Rigidbody>().AddForce(transform.up * speed * Time.deltaTime);
		//GetComponent<Rigidbody>().AddForce(transform.forward * -speed);
	}
}
