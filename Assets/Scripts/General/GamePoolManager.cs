using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GamePoolManager : MonoBehaviour {

	// Shot prefabs
	public GameObject playerSingleShot;
	public GameObject playerDualShot;
	public GameObject playerTriShot;
	public GameObject playerUltiShot;
	public GameObject enemySingleShot;
	public GameObject enemyFasterShot;

	// Player powerups / related items
	public GameObject tripMines;
	public GameObject shurikenObj;
	public GameObject waveShot;
	public GameObject missiles;

	// Enemy prefabs
	public GameObject pawnShip;
	public GameObject rangedShip;

	void Awake () {
		PoolManager.Instance.CreatePool (playerSingleShot, 50);
		PoolManager.Instance.CreatePool (playerDualShot, 50);
		PoolManager.Instance.CreatePool (playerTriShot, 50);
		PoolManager.Instance.CreatePool (playerUltiShot, 25);
		PoolManager.Instance.CreatePool (enemySingleShot, 200);
		PoolManager.Instance.CreatePool (enemyFasterShot, 200);
		PoolManager.Instance.CreatePool (tripMines, 40);
		PoolManager.Instance.CreatePool (shurikenObj, 10);
		PoolManager.Instance.CreatePool (waveShot, 20);
		PoolManager.Instance.CreatePool (missiles, 100);
		PoolManager.Instance.CreatePool (pawnShip, 100);
		PoolManager.Instance.CreatePool (rangedShip, 50);

	}
}
