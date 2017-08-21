using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.SceneManagement;
using ExtendedCollections;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{

    public PlayerShip playerShip;
    public GameObject mainCamera;       // Controls zooming and follows player
    public CameraController cameraController;
    public GameObject normalSS;         // Player's normal shotspawn
    public EnemySpawner enemySpawner;       // Takes care of spawning enemies
    public PowerupSpawner powerupSpawner;
    public MovingSpawnManager movingSpawnManager;
    public bool levelActive = false;
    public int playerHealth;
    public int playerMaxHealth;         // Must be changed w/ health bar and upgrades

    public int playerScore = 0;         // How many points the player has (resets to 0 per game)
    public int targetScore = 0;
    public int playerBalance = 0;       // How much money the player has
    public int playerDamage = 20;
    public int scoreMultiplier = 1;

    [Header("TUTORIAL_LOGIC")]
    public int tutEnabledInt = 1;
    public int tutEnabledOnceIndicator = 0;
    public bool tutorialEnabledOnce = false;
    //public bool tutorialEnabled = true;

    [Header("PAUSE_MENU_LOGIC")]
    public MenuScreen activeMenuScreen;

    [Header("SCORE_UI_FIELDS")]
    public int numEnemiesDefeated = 0;
    public int numPowerupsCollected = 0;

    public Color startColor;
    public Vector3 playerStartPosition; // Player start position at beginning of game

    public bool axisInput = true;
    public bool turnInput = true;
    public bool speedCapped = true;
    public bool isDashing = false;

    public bool isBurstRushCharging = false;     // Prevents multiple burst rushes
    public bool isBurstRushing = false;

    public bool onDashCooldown = false;
    public int numDashes = 99;

    // The following logic needs to be populated by PlayerPrefs
    public int powerupUnlockedLevel = 0;
    public int homingMissileLevel = 0;
    public int burstRushLevel = 0;
    public int dashLevel = 0;
    public int shurikenLevel = 0;
    public int tripMineLevel = 0;
    public int waveShotLevel = 0;
    public int dualFireLevel = 0;
    public int triFireLevel = 0;

    //public Collider mapCollider;
    public List<Collider> mapColliders = new List<Collider>();     // Assign in inspector

    // Powerup logic
    public Queue<BurstRushPowerup> rushes = new Queue<BurstRushPowerup>();

    // Shop logic
    public GameObject uiElements;

    // EVENTS for Level Setup, Progression
    public delegate void StartingNewLevel();
    public event StartingNewLevel StartLevelEvent;  // Event to communicate w/ UIManager
    public delegate void EndingLevel();
    public event EndingLevel EndLevelEvent;         // Event to communicate w/ UIManager
    public delegate void RecordingEnemyKill();
    public event RecordingEnemyKill RecordingEnemyKillEvent;            // Event to communicate w/ UIManager



    // REVISED logic for endless level progression.
    // Uses player score and elapsed time to make decisions on what to spawn.
    public int currLevel = 0;       // This is used from EnemySpawner. Enemies UP TO this index are allowed to be spawned.
    public List<int> enemyScoreBoundaries = new List<int>();     // Stores information about how many points needed to reach next level of enemy
    public List<int> powerupScoreBoundaries = new List<int>();     // Stores information about how many points needed to reach next level of powerup


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

        // Setup references
        playerShip = GameObject.FindGameObjectWithTag(Constants.PlayerTag).GetComponent<PlayerShip>();      // The main reference to player ref. by all other scripts
        normalSS = Utils.FindChildWithTag(playerShip.gameObject, Constants.NormalSS);       // This is primarily for homing missile powerup
        startColor = playerShip.sprite.material.color;
        enemySpawner = GetComponent<EnemySpawner>();
        powerupSpawner = GetComponent<PowerupSpawner>();
        movingSpawnManager = GetComponent<MovingSpawnManager>();
        //mapCollider = GetComponent<BoxCollider>();




        // Now populate powerups / purchasables with PlayerPrefs. 0=default/start level of each powerup.
        //homingMissileLevel = PlayerPrefs.GetInt(Constants.homingMissileLevel, 0);
        //burstRushLevel = PlayerPrefs.GetInt(Constants.burstRushLevel, 0);
        //dashLevel = PlayerPrefs.GetInt(Constants.dashLevel, 0);
        //shurikenLevel = PlayerPrefs.GetInt(Constants.shurikenLevel, 0);
        //tripMineLevel = PlayerPrefs.GetInt(Constants.tripMineLevel, 0);
        //waveShotLevel = PlayerPrefs.GetInt(Constants.waveShotLevel, 0);
        //dualFireLevel = PlayerPrefs.GetInt(Constants.dualFireLevel, 0);
        //triFireLevel = PlayerPrefs.GetInt(Constants.triFireLevel, 0);

        // Subscribe events
        //StartLevelEvent += OnLevelStartEnableMovingSpawners;
    }

    public void Start()
    {
        playerStartPosition = playerShip.gameObject.transform.position;
        playerShip.gameObject.transform.position = new Vector3(800f, 0f, 0f);   // Make sure we can't see player
        //OnGameStart();
    }

    // Debug method
    public void DeleteAllPlayerPrefs()
    {
        PlayerPrefs.DeleteAll();
    }

    // This is just for the start game button.
    public void OnGameStart()
    {

        // Actually start the game
        OnLevelStart(0);
    }

    // This is the PUBLISHER for events that fire on level starts.
    public void OnLevelStart(int currLevel)
    {
        // Get player prefs
        //Debug.Break();

        // Force enable tutorial is it hasn't been activated before
        //tutEnabledOnceIndicator = PlayerPrefs.GetInt(Constants.tutorialEnabledOnce);
        //Debug.Log("TUT_ENABLED_ONCE_INDICATOR: " + PlayerPrefs.GetInt(Constants.tutorialEnabledOnce));
        //if (tutEnabledOnceIndicator != 1)
        //{
        //    PlayerPrefs.SetInt(Constants.tutorialEnabled, 1);
        //    PlayerPrefs.SetInt(Constants.tutorialEnabledOnce, 1);
        //    PlayerPrefs.Save();
        //    tutEnabledOnceIndicator = 1;
        //    //tutorialEnabledOnce = true;
        //    Debug.Break();
        //}
        //Debug.Log("HAS_KEY: " + PlayerPrefs.HasKey(Constants.tutorialEnabledOnce));
        int tutOnce = PlayerPrefs.GetInt(Constants.tutorialEnabledOnce, -1);
        if (tutOnce == -1)
        {
            PlayerPrefs.SetInt(Constants.tutorialEnabledOnce, 1);
            PlayerPrefs.SetInt(Constants.tutorialEnabled, 1);
            PlayerPrefs.Save();
            Debug.Break();
        }

        // Also activate tutorial if was accessed through Pause Menu option
        // Tutorial normally deactivated by CameraController/GM after first call o.w.
        tutEnabledInt = PlayerPrefs.GetInt(Constants.tutorialEnabled, -1);
        Debug.Log("TUT_ENABLED_INT: " + tutEnabledInt);
        if (tutEnabledInt == 1)
        {
            cameraController.tutorialEnabled = true;
        }
        else
        {
            cameraController.tutorialEnabled = false;
        }


        currLevel = Math.Min(currLevel, enemyScoreBoundaries.Count - 1);
        playerShip.gameObject.transform.position = playerStartPosition;     // Return player to start position
        targetScore = enemyScoreBoundaries[currLevel];
        levelActive = true;

        // Announce to subscribers
        if (currLevel != enemyScoreBoundaries.Count - 1)
        {
            if (StartLevelEvent != null)
            {
                StartLevelEvent();     // Tell all of our listeners to fire
            }
        }
        cameraController.StartGameCameraAnimation();
    }

    // Used by CameraController when restarting level and resetting poolObj
    public void OnLevelTearDown()
    {
        // Tell subscribers to do their work
        if (EndLevelEvent != null)
        {
            EndLevelEvent();
        }
    }

    // Called by player input if player dies
    public void OnLevelLost()
    {
        Instantiate(playerShip.explosion, transform.position, transform.rotation);
        playerShip.gameObject.SetActive(false);
        levelActive = false;

        // Tell subscribers to do their work
        if (EndLevelEvent != null)
        {
            EndLevelEvent();
        }
        //enemySpawner.EndLevel();
        //powerupSpawner.EndLevel();

        mainCamera.GetComponent<CameraController>().StartScoreUICameraAnimation();
        UIManager.Singleton.DisplayGameOverScreen();
        //Debug.LogError("PLAYER DIED!");
        //Debug.Break ();
    }

    // Restarting a level after a defeat.
    public void OnLevelRestart()
    {
        // Clean up the level
        // TODO: player's powerups, health, stats need to be reset. Or use events? Are they misleading?

        // Only tear down level if game was restarted via Tutorial option
        if (cameraController.tutorialEnabled)
        {
            // First run normal level teardown activities
            OnLevelTearDown();
            // Next playthru will not have tutorial
            //cameraController.tutorialEnabled = false;
            //PlayerPrefs.SetInt(Constants.tutorialEnabled, 0);
        }
        UIManager.Singleton.RestartLevel();     // // Clean up UI
        //mainCamera.GetComponent<CameraController>().StartGameCameraAnimation();     // Zoom back into map

        Utils.KillAllEnemies();
        Utils.DisablePowerups();
        enemySpawner.RestartLevel();


        playerShip.gameObject.SetActive(true);
        playerShip.ResetPlayer();       // Reset internals: position, rotation, rigidbody
        playerHealth = playerMaxHealth;
        playerShip.sprite.material.color = startColor;

        playerScore = 0;
        numEnemiesDefeated = 0;
        numPowerupsCollected = 0;

        UIManager.Singleton.UpdateScore();
        // Reset level logic
        currLevel = 0;
        targetScore = enemyScoreBoundaries[0];
        levelActive = true;

        OnLevelStart(currLevel);
    }

    // Actions to take on boss death
    public void OnBossDeath()
    {
        enemySpawner.OnBossDeath();
    }

    /* START StartLevelEvent subscribers. */
    // Most of these can be moved to their dependency classes later.

    //public void OnLevelStartEnableMovingSpawners()
    //{
    //    // TODO: Disable old spawners
    //    // TODO: Enable new spawners
    //    movingSpawnManager.spawnEnabled = true;
    //}
    /* END StartLevelEvent subscriber list. */

    // THIS is the new way of increasing level difficulty over time.
    public void OnEnemyLevelIncrease()
    {
        // Increase the number of total enemies that can be spawned, as well as other logic.
        //enemySpawner.IncreaseLevel();

        // Increase the types of enemies we can now spawn.
        currLevel += 1;
        OnLevelStart(currLevel);
    }

    // THIS is the new way of allowing more powerup types to spawn.
    public void OnPowerupLevelIncrease()
    {
        if (powerupUnlockedLevel < powerupScoreBoundaries.Count)
        {
            powerupSpawner.IncreaseLevel();
            powerupUnlockedLevel += 1;
        }
    }

    // Called every time an enemy is defeated
    public void RecordEnemyKilled(EnemyType enemyType)
    {
        enemySpawner.RecordKill(enemyType);
        numEnemiesDefeated += 1;
        //// Unlock stronger enemies
        //if (playerScore >= enemyScoreBoundaries[Math.Min(currLevel, enemyScoreBoundaries.Count - 1)])
        //{
        //    OnEnemyLevelIncrease();
        //}
        // Unlock additional powerups
        if (playerScore >= powerupScoreBoundaries[Math.Min(powerupUnlockedLevel, powerupScoreBoundaries.Count - 1)])
        {
            OnPowerupLevelIncrease();
        }
    }

    // Start Shop scene, while preventing Managers and Player from being destroyed
    public void OpenShop()
    {
        playerShip.gameObject.SetActive(false);
        uiElements.SetActive(false);        // Effectively "hides" the screen UI
        if (ShopMenu.instance != null)
        {
            ShopMenu.instance.gameObject.SetActive(true);
            ShopMenu.instance.SetupShop();      // Loads all basic UI for shop
        }
        SceneManager.LoadSceneAsync("Shop");
    }

    public void UpdateScore(int ptIncrease)
    {
        playerScore += ptIncrease * scoreMultiplier;  // Add new score in GameManager
    }

    static GameManager singleton;
    public static GameManager Singleton
    {
        get
        {
            if (singleton == null)
            {
                singleton = new GameManager();
            }
            return singleton;
        }
    }
}






