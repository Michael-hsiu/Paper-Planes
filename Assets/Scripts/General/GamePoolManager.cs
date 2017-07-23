using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GamePoolManager : MonoBehaviour
{

    private static GamePoolManager singleton;
    public static GamePoolManager Singleton
    {
        get
        {
            if (singleton == null)
            {
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
    public GameObject enemyBulletHellShot;


    [Header("Powerups")] // Player powerups / related items
                         //public GameObject dualShotPowerup;
    public GameObject firingPowerup;
    public GameObject waveShotPowerup;
    public GameObject burstRushPowerup;
    public GameObject dashPowerup;
    public GameObject homingMissilePowerup;
    public GameObject scoreMultPowerup;
    public GameObject shurikenPowerup;
    public GameObject tripMinePowerup;
    public GameObject sideMissilePowerup;       // May be removed if we make this a permanent powerup
    public GameObject healthPack;


    [Header("Powerup Helper Objects")]
    public GameObject tripMines;
    public GameObject shurikenObj;
    public GameObject waveShot;
    public GameObject missiles;
    public GameObject straightMissiles;
    public GameObject playerStraightMissiles;
    public GameObject empWaveShot;
    public GameObject teleMarker;

    [Header("Enemies")] // Enemy prefabs
    public GameObject pawnShip;
    public GameObject rangedShip;
    public GameObject mediShip;
    public GameObject turret;
    public GameObject dropShip;
    public GameObject assassinShip;
    public GameObject bomberShip;
    public GameObject missileBoss;
    public GameObject sniperBoss;
    public GameObject bomberBossStageOne;
    public GameObject bomberBossStageTwo;
    public GameObject bomberCore;

    //public GameObject topGearStageTwoBoss;
    //public GameObject leftGearStageTwoBoss;
    //public GameObject rightGearStageTwoBoss;
    public GameObject slingShotBomber;

    public GameObject rangedTest;

    //[Header("Spawners")] // Spawner prefabs
    //public GameObject movingSpawn;

    void Awake()
    {

        if (singleton == null)
        {
            singleton = this;

        }
        else
        {
            DestroyImmediate(this);
        }

        // Shots
        PoolManager.Instance.CreatePool(playerSingleShot, 50);
        PoolManager.Instance.CreatePool(playerDualShot, 50);
        PoolManager.Instance.CreatePool(playerTriShot, 50);
        PoolManager.Instance.CreatePool(playerUltiShot, 25);
        PoolManager.Instance.CreatePool(enemySingleShot, 200);
        PoolManager.Instance.CreatePool(enemyFasterShot, 200);
        PoolManager.Instance.CreatePool(enemyBulletHellShot, 100);

        // Powerups
        //PoolManager.Instance.CreatePool (dualShotPowerup, 50);
        PoolManager.Instance.CreatePool(firingPowerup, 50);
        PoolManager.Instance.CreatePool(waveShotPowerup, 50);
        PoolManager.Instance.CreatePool(burstRushPowerup, 50);
        PoolManager.Instance.CreatePool(dashPowerup, 50);
        PoolManager.Instance.CreatePool(homingMissilePowerup, 50);
        PoolManager.Instance.CreatePool(scoreMultPowerup, 50);
        PoolManager.Instance.CreatePool(shurikenPowerup, 50);
        PoolManager.Instance.CreatePool(tripMinePowerup, 50);
        PoolManager.Instance.CreatePool(sideMissilePowerup, 50);
        PoolManager.Instance.CreatePool(healthPack, 50);


        // Powerup helper objs
        PoolManager.Instance.CreatePool(tripMines, 40);
        PoolManager.Instance.CreatePool(shurikenObj, 10);
        PoolManager.Instance.CreatePool(waveShot, 20);
        PoolManager.Instance.CreatePool(missiles, 100);
        PoolManager.Instance.CreatePool(straightMissiles, 100);
        PoolManager.Instance.CreatePool(playerStraightMissiles, 50);
        PoolManager.Instance.CreatePool(empWaveShot, 10);
        PoolManager.Instance.CreatePool(teleMarker, 10);

        // Enemies
        PoolManager.Instance.CreatePool(pawnShip, 300);
        PoolManager.Instance.CreatePool(rangedShip, 300);
        PoolManager.Instance.CreatePool(bomberShip, 300);
        PoolManager.Instance.CreatePool(mediShip, 100);
        PoolManager.Instance.CreatePool(turret, 100);
        PoolManager.Instance.CreatePool(dropShip, 100);
        PoolManager.Instance.CreatePool(assassinShip, 100);
        PoolManager.Instance.CreatePool(missileBoss, 2);
        PoolManager.Instance.CreatePool(sniperBoss, 2);
        PoolManager.Instance.CreatePool(bomberBossStageOne, 15);
        PoolManager.Instance.CreatePool(bomberBossStageTwo, 2);
        PoolManager.Instance.CreatePool(bomberCore, 30);
        PoolManager.Instance.CreatePool(slingShotBomber, 15);



        //PoolManager.Instance.CreatePool(topGearStageTwoBoss, 5);
        //PoolManager.Instance.CreatePool(leftGearStageTwoBoss, 5);
        //PoolManager.Instance.CreatePool(rightGearStageTwoBoss, 5);
        // Spawners
        //PoolManager.Instance.CreatePool (movingSpawn, 20);





    }
}
