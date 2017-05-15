using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitColliderHelper : MonoBehaviour {

	public Ship enemy;		// Assign the main enemy script here

	void OnTriggerEnter(Collider other) {

		if (other.gameObject.CompareTag(Constants.PlayerTag)) {
			enemy.GetComponent<AbstractShip>().moveState.Direction = Direction.PlayerDetected;
			enemy.target = other.gameObject;
		}
	}
}
