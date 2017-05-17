using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GamePoolManager : MonoBehaviour {

	private static GamePoolManager singleton;
	public static GamePoolManager Singleton {
		get {
			if (singleton == null) {
				singleton = new GamePoolManager();
			}
			return singleton;
		}
	}
		

	[Header("Shots")] // Shot prefabs
	public GameObject playerSingleShot;
	public GameObject playerDualShot;
	public GameObject playerTriShot;
	public GameObject playerUltiShot;
	public GameObject enemySingleShot;
	public GameObject enemyFasterShot;

	[Header("Powerups")] // Player powerups / related items
	public GameObject dualShotPowerup;
	public GameObject triShotPowerup;
	public GameObject waveShotPowerup;
	public GameObject burstRushPowerup;
	public GameObject dashPowerup;
	public GameObject homingMissilePowerup;
	public GameObject scoreMultPowerup;
	public GameObject shurikenPowerup;
	public GameObject tripMinePowerup;
	public GameObject sideMissilePowerup;		// May be removed if we make this a permanent powerup
	public GameObject healthPack;


	[Header("Powerup Helper Objects")]
	public GameObject tripMines;
	public GameObject shurikenObj;
	public GameObject waveShot;
	public GameObject missiles;
	public GameObject straightMissiles;
	public GameObject playerStraightMissiles;


	[Header("Enemies")] // Enemy prefabs
	public GameObject pawnShip;
	public GameObject rangedShip;
	public GameObject mediShip;
	public GameObject turret;
	public GameObject dropShip;
	public GameObject assassinShip;
	public GameObject bomberShip;

	public GameObject rangedTest;

	//[Header("Spawners")] // Spawner prefabs
	//public GameObject movingSpawn;

	void Awake () {

		if (singleton == null) {
			singleton = this;

		} else {
			DestroyImmediate(this);
		}

		// Shots
		PoolManager.Instance.CreatePool (playerSingleShot, 50);
		PoolManager.Instance.CreatePool (playerDualShot, 50);
		PoolManager.Instance.CreatePool (playerTriShot, 50);
		PoolManager.Instance.CreatePool (playerUltiShot, 25);
		PoolManager.Instance.CreatePool (enemySingleShot, 200);
		PoolManager.Instance.CreatePool (enemyFasterShot, 200);

		// Powerups
		PoolManager.Instance.CreatePool (dualShotPowerup, 50);
		PoolManager.Instance.CreatePool (triShotPowerup, 50);
		PoolManager.Instance.CreatePool (waveShotPowerup, 50);
		PoolManager.Instance.CreatePool (burstRushPowerup, 50);
		PoolManager.Instance.CreatePool (dashPowerup, 50);
		PoolManager.Instance.CreatePool (homingMissilePowerup, 50);
		PoolManager.Instance.CreatePool (scoreMultPowerup, 50);
		PoolManager.Instance.CreatePool (shurikenPowerup, 50);
		PoolManager.Instance.CreatePool (tripMinePowerup, 50);
		PoolManager.Instance.CreatePool (sideMissilePowerup, 50);
		PoolManager.Instance.CreatePool (healthPack, 50);


		// Powerup helper objs
		PoolManager.Instance.CreatePool (tripMines, 40);
		PoolManager.Instance.CreatePool (shurikenObj, 10);
		PoolManager.Instance.CreatePool (waveShot, 20);
		PoolManager.Instance.CreatePool (missiles, 100);
		PoolManager.Instance.CreatePool (straightMissiles, 100);
		PoolManager.Instance.CreatePool (playerStraightMissiles, 50);

		// Enemies
		PoolManager.Instance.CreatePool (pawnShip, 500);
		PoolManager.Instance.CreatePool (rangedShip, 100);
		PoolManager.Instance.CreatePool (bomberShip, 100);

		PoolManager.Instance.CreatePool (rangedTest, 100);

		// Spawners
		//PoolManager.Instance.CreatePool (movingSpawn, 20);





	}
}
