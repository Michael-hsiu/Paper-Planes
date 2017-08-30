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

    [Header("SUPER_POWERUP_PREFABS")]
    public GameObject firingSuperPowerup;
    public GameObject waveShotSuperPowerup;
    public GameObject burstRushSuperPowerup;
    public GameObject homingMissileSuperPowerup;
    public GameObject shurikenSuperPowerup;
    public GameObject tripMineSuperPowerup;


    [Header("POWERUP_HELPER_PREFABS")]
    public GameObject tripMines;
    public GameObject shurikenObj;
    public GameObject superShurikenObj;
    public GameObject waveShot;
    public GameObject superWaveShot;
    public GameObject homingMissiles;
    public GameObject superHomingMissiles;
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
    public GameObject powerupScoreText;
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
        PoolManager.Instance.CreatePool(enemySingleShot, 150);
        PoolManager.Instance.CreatePool(turretSingleShot, 150);
        //PoolManager.Instance.CreatePool(enemyFasterShot, 100);
        PoolManager.Instance.CreatePool(enemyBulletHellShot, 50);
        PoolManager.Instance.CreatePool(rangedLvl1Shot, 50);
        PoolManager.Instance.CreatePool(rangedLvl2Shot, 50);
        PoolManager.Instance.CreatePool(rangedLvl3Shot, 50);
        PoolManager.Instance.CreatePool(turretLvl1Shot, 50);
        PoolManager.Instance.CreatePool(turretLvl2Shot, 50);
        PoolManager.Instance.CreatePool(turretLvl3Shot, 50);

        // Powerups
        //PoolManager.Instance.CreatePool (dualShotPowerup, 50);
        PoolManager.Instance.CreatePool(firingPowerup, 15);
        PoolManager.Instance.CreatePool(waveShotPowerup, 15);
        PoolManager.Instance.CreatePool(burstRushPowerup, 15);
        PoolManager.Instance.CreatePool(dashPowerup, 15);
        PoolManager.Instance.CreatePool(homingMissilePowerup, 15);
        PoolManager.Instance.CreatePool(scoreMultPowerup, 15);
        PoolManager.Instance.CreatePool(shurikenPowerup, 15);
        PoolManager.Instance.CreatePool(tripMinePowerup, 15);
        PoolManager.Instance.CreatePool(sideMissilePowerup, 15);
        PoolManager.Instance.CreatePool(healthPack, 15);

        // Super Powerups
        PoolManager.Instance.CreatePool(firingSuperPowerup, 15);
        PoolManager.Instance.CreatePool(waveShotSuperPowerup, 15);
        PoolManager.Instance.CreatePool(burstRushSuperPowerup, 15);
        PoolManager.Instance.CreatePool(homingMissileSuperPowerup, 15);
        PoolManager.Instance.CreatePool(shurikenSuperPowerup, 15);
        PoolManager.Instance.CreatePool(tripMineSuperPowerup, 15);


        // Powerup helper objs
        PoolManager.Instance.CreatePool(tripMines, 40);
        PoolManager.Instance.CreatePool(shurikenObj, 20);
        PoolManager.Instance.CreatePool(superShurikenObj, 30);
        PoolManager.Instance.CreatePool(waveShot, 30);
        PoolManager.Instance.CreatePool(superWaveShot, 100);
        PoolManager.Instance.CreatePool(homingMissiles, 100);
        PoolManager.Instance.CreatePool(superHomingMissiles, 100);
        PoolManager.Instance.CreatePool(straightMissiles, 100);
        PoolManager.Instance.CreatePool(playerStraightMissiles, 50);
        PoolManager.Instance.CreatePool(empWaveShot, 10);
        //PoolManager.Instance.CreatePool(teleMarker, 10);

        // Enemies
        PoolManager.Instance.CreatePool(pawnShipLvl1, 30);
        PoolManager.Instance.CreatePool(pawnShipLvl2, 30);
        PoolManager.Instance.CreatePool(pawnShipLvl3, 30);

        PoolManager.Instance.CreatePool(rangedShipLvl1, 30);
        PoolManager.Instance.CreatePool(rangedShipLvl2, 30);
        PoolManager.Instance.CreatePool(rangedShipLvl3, 30);

        PoolManager.Instance.CreatePool(bomberShipLvl1, 30);
        PoolManager.Instance.CreatePool(bomberShipLvl2, 30);
        PoolManager.Instance.CreatePool(bomberShipLvl3, 30);

        PoolManager.Instance.CreatePool(turretLvl1, 30);
        PoolManager.Instance.CreatePool(turretLvl2, 30);
        PoolManager.Instance.CreatePool(turretLvl3, 30);


        //PoolManager.Instance.CreatePool(mediShipLvl1, 100);
        //PoolManager.Instance.CreatePool(dropShipLvl1, 100);
        //PoolManager.Instance.CreatePool(assassinShipLvl1, 100);
        PoolManager.Instance.CreatePool(missileBossLvl1, 15);
        PoolManager.Instance.CreatePool(sniperBossLvl1, 15);
        PoolManager.Instance.CreatePool(bomberBossStageOne, 15);
        PoolManager.Instance.CreatePool(bomberBossStageTwo, 15);
        PoolManager.Instance.CreatePool(bomberCore, 20);
        PoolManager.Instance.CreatePool(slingShotBomber, 15);

        // Text prefabs
        PoolManager.Instance.CreatePool(scoreText, 50);
        PoolManager.Instance.CreatePool(powerupScoreText, 30);
        PoolManager.Instance.CreatePool(bossScoreText, 5);

        // Particle prefabs
        //PoolManager.Instance.CreatePool(burstRushRingParticle, 10);
        //PoolManager.Instance.CreatePool(firingPowerupRingParticle, 10);
        //PoolManager.Instance.CreatePool(healthPickupRingParticle, 10);
        //PoolManager.Instance.CreatePool(homingMissileRingParticle, 10);
        //PoolManager.Instance.CreatePool(scoreMultRingParticle, 10);
        //PoolManager.Instance.CreatePool(shurikenRingParticle, 10);
        //PoolManager.Instance.CreatePool(tripMineRingParticle, 10);
        //PoolManager.Instance.CreatePool(waveShotRingParticle, 10);


        PoolManager.Instance.CreatePool(burstRushHitParticle, 10);
        PoolManager.Instance.CreatePool(homingMissileHitParticle, 10);
        PoolManager.Instance.CreatePool(shurikenRingHitParticle, 10);
        PoolManager.Instance.CreatePool(tripMineHitParticle, 10);
        PoolManager.Instance.CreatePool(waveShotHitParticle, 10);
        PoolManager.Instance.CreatePool(playerShotHitParticle, 10);
        PoolManager.Instance.CreatePool(empWaveHitParticle, 10);
        PoolManager.Instance.CreatePool(bomberExplosionParticle, 10);

        //PoolManager.Instance.CreatePool(topGearStageTwoBoss, 5);
        //PoolManager.Instance.CreatePool(leftGearStageTwoBoss, 5);
        //PoolManager.Instance.CreatePool(rightGearStageTwoBoss, 5);
        // Spawners
        //PoolManager.Instance.CreatePool (movingSpawn, 20);

    }
}
