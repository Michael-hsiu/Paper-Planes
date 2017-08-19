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
    public GameObject turretSingleShot;
    public GameObject enemyFasterShot;
    public GameObject enemyBulletHellShot;
    public GameObject rangedLvl1Shot;
    public GameObject rangedLvl2Shot;
    public GameObject rangedLvl3Shot;
    public GameObject turretLvl1Shot;
    public GameObject turretLvl2Shot;
    public GameObject turretLvl3Shot;


    [Header("POWERUP_PREFABS")] // Player powerups / related items
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


    [Header("POWERUP_HELPER_PREFABS")]
    public GameObject tripMines;
    public GameObject shurikenObj;
    public GameObject waveShot;
    public GameObject missiles;
    public GameObject straightMissiles;
    public GameObject playerStraightMissiles;
    public GameObject empWaveShot;
    public GameObject teleMarker;

    [Header("ENEMY_PREFABS")] // Enemy prefabs
    public GameObject pawnShipLvl1;
    public GameObject pawnShipLvl2;
    public GameObject pawnShipLvl3;

    public GameObject rangedShipLvl1;
    public GameObject rangedShipLvl2;
    public GameObject rangedShipLvl3;

    public GameObject mediShipLvl1;
    public GameObject mediShipLvl2;
    public GameObject mediShipLvl3;

    public GameObject turretLvl1;
    public GameObject turretLvl2;
    public GameObject turretLvl3;

    public GameObject dropShipLvl1;
    public GameObject dropShipLvl2;
    public GameObject dropShipLvl3;

    public GameObject assassinShipLvl1;
    public GameObject bomberShipLvl1;
    public GameObject bomberShipLvl2;
    public GameObject bomberShipLvl3;


    public GameObject missileBossLvl1;
    public GameObject sniperBossLvl1;
    public GameObject bomberBossStageOne;
    public GameObject bomberBossStageTwo;
    public GameObject bomberCore;

    //public GameObject topGearStageTwoBoss;
    //public GameObject leftGearStageTwoBoss;
    //public GameObject rightGearStageTwoBoss;
    public GameObject slingShotBomber;

    public GameObject rangedTest;

    [Header("TEXT_PREFABS")]
    public GameObject scoreText;
    public GameObject bossScoreText;

    [Header("PARTICLE_PREFABS")]
    public GameObject burstRushRingParticle;
    public GameObject firingPowerupRingParticle;
    public GameObject healthPickupRingParticle;
    public GameObject homingMissileRingParticle;
    public GameObject scoreMultRingParticle;
    public GameObject shurikenRingParticle;
    public GameObject tripMineRingParticle;
    public GameObject waveShotRingParticle;

    public GameObject burstRushHitParticle;
    public GameObject homingMissileHitParticle;
    public GameObject shurikenRingHitParticle;
    public GameObject tripMineHitParticle;
    public GameObject waveShotHitParticle;
    public GameObject playerShotHitParticle;
    public GameObject empWaveHitParticle;
    public GameObject bomberExplosionParticle;


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
        PoolManager.Instance.CreatePool(turretSingleShot, 200);
        PoolManager.Instance.CreatePool(enemyFasterShot, 200);
        PoolManager.Instance.CreatePool(enemyBulletHellShot, 100);
        PoolManager.Instance.CreatePool(rangedLvl1Shot, 100);
        PoolManager.Instance.CreatePool(rangedLvl2Shot, 100);
        PoolManager.Instance.CreatePool(rangedLvl3Shot, 100);
        PoolManager.Instance.CreatePool(turretLvl1Shot, 100);
        PoolManager.Instance.CreatePool(turretLvl2Shot, 100);
        PoolManager.Instance.CreatePool(turretLvl3Shot, 100);

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
        PoolManager.Instance.CreatePool(waveShot, 100);
        PoolManager.Instance.CreatePool(missiles, 100);
        PoolManager.Instance.CreatePool(straightMissiles, 100);
        PoolManager.Instance.CreatePool(playerStraightMissiles, 50);
        PoolManager.Instance.CreatePool(empWaveShot, 10);
        PoolManager.Instance.CreatePool(teleMarker, 10);

        // Enemies
        PoolManager.Instance.CreatePool(pawnShipLvl1, 300);
        PoolManager.Instance.CreatePool(pawnShipLvl2, 300);
        PoolManager.Instance.CreatePool(pawnShipLvl3, 300);

        PoolManager.Instance.CreatePool(rangedShipLvl1, 300);
        PoolManager.Instance.CreatePool(rangedShipLvl2, 300);
        PoolManager.Instance.CreatePool(rangedShipLvl3, 300);

        PoolManager.Instance.CreatePool(bomberShipLvl1, 300);
        PoolManager.Instance.CreatePool(bomberShipLvl2, 300);
        PoolManager.Instance.CreatePool(bomberShipLvl3, 300);

        PoolManager.Instance.CreatePool(turretLvl1, 100);
        PoolManager.Instance.CreatePool(turretLvl2, 100);
        PoolManager.Instance.CreatePool(turretLvl3, 100);


        PoolManager.Instance.CreatePool(mediShipLvl1, 100);
        PoolManager.Instance.CreatePool(dropShipLvl1, 100);
        PoolManager.Instance.CreatePool(assassinShipLvl1, 100);
        PoolManager.Instance.CreatePool(missileBossLvl1, 2);
        PoolManager.Instance.CreatePool(sniperBossLvl1, 2);
        PoolManager.Instance.CreatePool(bomberBossStageOne, 15);
        PoolManager.Instance.CreatePool(bomberBossStageTwo, 2);
        PoolManager.Instance.CreatePool(bomberCore, 30);
        PoolManager.Instance.CreatePool(slingShotBomber, 15);

        // Text prefabs
        PoolManager.Instance.CreatePool(scoreText, 100);
        PoolManager.Instance.CreatePool(bossScoreText, 10);

        // Particle prefabs
        PoolManager.Instance.CreatePool(burstRushRingParticle, 20);
        PoolManager.Instance.CreatePool(firingPowerupRingParticle, 20);
        PoolManager.Instance.CreatePool(healthPickupRingParticle, 20);
        PoolManager.Instance.CreatePool(homingMissileRingParticle, 20);
        PoolManager.Instance.CreatePool(scoreMultRingParticle, 20);
        PoolManager.Instance.CreatePool(shurikenRingParticle, 20);
        PoolManager.Instance.CreatePool(tripMineRingParticle, 20);
        PoolManager.Instance.CreatePool(waveShotRingParticle, 20);


        PoolManager.Instance.CreatePool(burstRushHitParticle, 20);
        PoolManager.Instance.CreatePool(homingMissileHitParticle, 20);
        PoolManager.Instance.CreatePool(shurikenRingHitParticle, 20);
        PoolManager.Instance.CreatePool(tripMineHitParticle, 20);
        PoolManager.Instance.CreatePool(waveShotHitParticle, 20);
        PoolManager.Instance.CreatePool(playerShotHitParticle, 20);
        PoolManager.Instance.CreatePool(empWaveHitParticle, 20);
        PoolManager.Instance.CreatePool(bomberExplosionParticle, 20);

        //PoolManager.Instance.CreatePool(topGearStageTwoBoss, 5);
        //PoolManager.Instance.CreatePool(leftGearStageTwoBoss, 5);
        //PoolManager.Instance.CreatePool(rightGearStageTwoBoss, 5);
        // Spawners
        //PoolManager.Instance.CreatePool (movingSpawn, 20);

    }
}
