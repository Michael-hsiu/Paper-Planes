using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GamePoolManager : MonoBehaviour {

	public GameObject playerSingleShot;
	public GameObject playerDualShot;
	public GameObject playerTriShot;
	public GameObject playerUltiShot;

	void Start () {
		PoolManager.Instance.CreatePool (playerSingleShot, 10);
		PoolManager.Instance.CreatePool (playerDualShot, 10);
		PoolManager.Instance.CreatePool (playerTriShot, 10);
		PoolManager.Instance.CreatePool (playerUltiShot, 10);
	}
}
