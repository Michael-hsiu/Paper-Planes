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
    public GameObject normalSS;         // Player's normal shotspawn
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

    public bool axisInput = true;
    public bool turnInput = true;
    public bool speedCapped = true;
    public bool isDashing = false;
    public bool isBurstRushing = false;     // Prevents multiple burst rushes
    public bool onDashCooldown = false;
    public int numDashes = 99;

    // The following logic needs to be populated by PlayerPrefs
    public int homingMissileLevel = 0;
    public int burstRushLevel = 0;
    public int dashLevel = 0;
    public int shurikenLevel = 0;
    public int tripMineLevel = 0;
    public int waveShotLevel = 0;
    public int dualFireLevel = 0;
    public int triFireLevel = 0;

    // Level logic
    /*public LevelData[] levels;		// Stores each LevelData SO as an asset
	public LevelData activeLevel;
	public int activeLevelNum = 1;
	public bool levelActive = true;
	public List<GameObject> currLvlSpawners;	// Get from index (currLvl-1)
	public List<Row> levelSpawners = new List<Row>();		// Enemy spawners; populate this manually in inspector; Row is a container class so we can emulate 2D list behavior*/
    public Collider mapCollider;

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
    public List<int> scoreBoundaries = new List<int>();     // Stores information about how many points needed to reach next level


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
        powerupSpawner = GetComponent<PowerupSpawner>();
        movingSpawnManager = GetComponent<MovingSpawnManager>();
        mapCollider = GetComponent<BoxCollider>();

        // Now populate powerups / purchasables with PlayerPrefs. 0=default/start level of each powerup.
        homingMissileLevel = PlayerPrefs.GetInt(Constants.homingMissileLevel, 0);
        burstRushLevel = PlayerPrefs.GetInt(Constants.burstRushLevel, 0);
        dashLevel = PlayerPrefs.GetInt(Constants.dashLevel, 0);
        shurikenLevel = PlayerPrefs.GetInt(Constants.shurikenLevel, 0);
        tripMineLevel = PlayerPrefs.GetInt(Constants.tripMineLevel, 0);
        waveShotLevel = PlayerPrefs.GetInt(Constants.waveShotLevel, 0);
        dualFireLevel = PlayerPrefs.GetInt(Constants.dualFireLevel, 0);
        triFireLevel = PlayerPrefs.GetInt(Constants.triFireLevel, 0);

        // Subscribe events
        StartLevelEvent += OnLevelStartEnableMovingSpawners;
    }

    // This is just for the start game button.
    public void StartGame()
    {
        StartLevel(0);
    }

    // This is the PUBLISHER for events that fire on level starts.
    public void StartLevel(int currLevel)
    {

        currLevel = Math.Min(currLevel, scoreBoundaries.Count - 1);
        Debug.Log("SCOREBOUNDARIES COUNT: " + scoreBoundaries.Count);
        targetScore = scoreBoundaries[currLevel];
        levelActive = true;

        // Announce to subscribers
        if (currLevel != scoreBoundaries.Count - 1)
        {
            if (StartLevelEvent != null)
            {
                StartLevelEvent();     // Tell all of our listeners to fire
            }
        }

    }

    /* START StartLevelEvent subscribers. */
    // Most of these can be moved to their dependency classes later.

    public void OnLevelStartEnableMovingSpawners()
    {
        // TODO: Disable old spawners
        // TODO: Enable new spawners
        movingSpawnManager.spawnEnabled = true;
    }
    /* END StartLevelEvent subscriber list. */



    // THIS is the new way of increasing level difficulty over time.
    public void IncreaseLevel()
    {

        // Increase the types of enemies we can now spawn.
        currLevel += 1;

        // Increase the number of total enemies that can be spawned, as well as other logic.
        GetComponent<EnemySpawner>().IncreaseLevel();

        StartLevel(currLevel);

    }

    // Called every time an enemy is defeated
    public void RecordEnemyKilled(EnemyType enemyType)
    {

        GetComponent<EnemySpawner>().RecordKill(enemyType);
        if (playerScore > scoreBoundaries[Math.Min(currLevel, scoreBoundaries.Count - 1)])
        {
            IncreaseLevel();
        }
    }






    // THIS is from old level progression logic.
    public void EndGame(int level)
    {

        //levelActive = false;
        //((AIInput) (InputManager.Instance.GetActiveInput ())).controlsEnabled = false;
        //InputManager.Instance.GetActiveInput


        // Kill all enemies in scene
        Utils.KillAllEnemies();
        Utils.DisablePowerups();

        // Takedown logic for each level
        // Deactivate powerup spawner
        powerupSpawner.spawnEnabled = false;

        // Deactivate moving spawn manager
        movingSpawnManager.spawnEnabled = false;

        // Disable all the spawners for this level
        //DisableSpawns ();
        //UIManager.Singleton.EndLevel (activeLevelNum);		// Remember to activate continue screen!

        //activeLevelNum += 1;
    }

    // Turn off the spawners for current level
    /*public void DisableSpawns() {

		foreach (GameObject go in currLvlSpawners) {
			go.GetComponent<EnemySpawnTemplate> ().startSpawning = false;
		}
	}*/

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

    // Called by player input if player dies
    public void LevelFailed()
    {

        Instantiate(playerShip.explosion, transform.position, transform.rotation);
        playerShip.gameObject.SetActive(false);

        UIManager.Singleton.DisplayFailureScreen();
        Debug.LogError("PLAYER DIED!");
        //Debug.Break ();
    }


    private static GameManager singleton;
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

    public void UpdateScore(int ptIncrease)
    {
        GameManager.Singleton.playerScore += ptIncrease * scoreMultiplier;  // Add new score in GameManager
    }

}






