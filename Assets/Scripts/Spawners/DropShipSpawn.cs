using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropShipSpawn : MonoBehaviour {

	public GameObject shipToSpawn;

	public void Spawn() {
		Instantiate (shipToSpawn, transform.position, Quaternion.identity);
	}
}
