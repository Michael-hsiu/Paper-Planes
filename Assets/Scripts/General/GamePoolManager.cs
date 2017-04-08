using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GamePoolManager : MonoBehaviour {

	public GameObject playerSingleShot;
	public GameObject playerDualShot;
	public GameObject playerTriShot;
	public GameObject playerUltiShot;
	public GameObject enemySingleShot;
	public GameObject enemyFasterShot;
	public GameObject tripMines;
	public GameObject shurikenObj;
	public GameObject waveShot;
	public GameObject missiles;

	void Start () {
		PoolManager.Instance.CreatePool (playerSingleShot, 50);
		PoolManager.Instance.CreatePool (playerDualShot, 50);
		PoolManager.Instance.CreatePool (playerTriShot, 50);
		PoolManager.Instance.CreatePool (playerUltiShot, 25);
		PoolManager.Instance.CreatePool (enemySingleShot, 200);
		PoolManager.Instance.CreatePool (enemyFasterShot, 200);
		PoolManager.Instance.CreatePool (tripMines, 40);
		PoolManager.Instance.CreatePool (shurikenObj, 10);
		PoolManager.Instance.CreatePool (waveShot, 20);
		PoolManager.Instance.CreatePool (missiles, 20);


	}
}
