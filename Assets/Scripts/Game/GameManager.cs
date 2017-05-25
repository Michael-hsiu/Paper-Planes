using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.SceneManagement;
using ExtendedCollections;

public class GameManager : MonoBehaviour {

	// Logic about player is stored here
	public PlayerShip playerShip;
	public GameObject normalSS;			// Player's normal shotspawn

	public int playerHealth;
	public int playerMaxHealth;	// Must be changed w/ health bar and upgrades

	public int playerScore = 0;
	public int playerBalance = 0;		// How much money the player has
	public int playerDamage = 20;
	public int scoreMultiplier = 1;
	public bool axisInput = true;
	public bool speedCapped = true;
	public bool isDashing = false;
	public bool onDashCooldown = false;
	public int dashes = 99;
	public PowerupSpawner powerupSpawner;
	public MovingSpawnManager movingSpawnManager;
	// The following logic needs to be populated by PlayerPrefs

	public int homingMissileLevel = 0;
	public int burstRushLevel = 0;
	public int dashLevel = 0;
	public int shurikenLevel = 0;
	public int tripMineLevel = 0;
	public int waveShotLevel = 0;
	public int dualFireLevel = 0;
	public int triFireLevel = 0;

	// Powerup References
	public GameObject homingMissilePowerup;
	public GameObject burstRushPowerup;
	public GameObject dashPowerup;
	public GameObject shurikenPowerup;
	public GameObject tripMinePowerup;
	public GameObject waveShotPowerup;
	public GameObject dualFirePowerup;
	public GameObject triFirePowerup;


	// Level logic
	public LevelData[] levels;		// Stores each LevelData SO as an asset
	public LevelData activeLevel;
	public int activeLevelNum = 1;
	public bool lvlActive = true;
	public List<GameObject> currLvlSpawners;	// Get from index (currLvl-1)
	public List<Row> levelSpawners = new List<Row>();		// Enemy spawners; populate this manually in inspector; Row is a container class so we can emulate 2D list behavior
	public Collider mapCollider;
	public delegate void StartALevel ();
	public event StartALevel startLevelEvent;	// Event to communicate w/ UIManager


	// Store how many enemies we need to defeat per level
	public int pawnsLeft;
	public int rangedLeft;
	public int medicsLeft;
	public int turretsLeft;
	public int dropshipsLeft;
	public int assassinsLeft;
	public int bombersLeft;

	// Powerup logic
	public Queue<BurstRushPowerup> rushes = new Queue<BurstRushPowerup>();

	// Shop logic
	public GameObject shopButton;
	public GameObject uiElements;

	// Called before Start()
	void Awake() {
		if (singleton == null) {
			singleton = this;

		} 
		playerShip = GameObject.FindGameObjectWithTag (Constants.PlayerTag).GetComponent<PlayerShip>();		// The main reference to player ref. by all other scripts
		normalSS = Utils.FindChildWithTag (playerShip.gameObject, Constants.NormalSS);		// This is primarily for homing missile powerup
		if (powerupSpawner == null) {
			powerupSpawner = GetComponent<PowerupSpawner> ();
		}
		movingSpawnManager = GetComponent<MovingSpawnManager> ();
		mapCollider = GetComponent <BoxCollider> ();

		// Now populate powerups / purchasables with PlayerPrefs. 0=default/start level of each powerup.
		homingMissileLevel = PlayerPrefs.GetInt (Constants.homingMissileLevel, 0);
		burstRushLevel = PlayerPrefs.GetInt (Constants.burstRushLevel, 0);
		dashLevel = PlayerPrefs.GetInt (Constants.dashLevel, 0);
		shurikenLevel = PlayerPrefs.GetInt (Constants.shurikenLevel, 0);
		tripMineLevel = PlayerPrefs.GetInt (Constants.tripMineLevel, 0);
		waveShotLevel = PlayerPrefs.GetInt (Constants.waveShotLevel, 0);
		dualFireLevel = PlayerPrefs.GetInt (Constants.dualFireLevel, 0);
		triFireLevel = PlayerPrefs.GetInt (Constants.triFireLevel, 0);

		// END populating.

	}

	public void StartGame() {

		// Start + Display lvl 1 logic
		if (activeLevelNum < 1) {
			activeLevelNum = 1;
		}

		// Enable player controls
		((AIInput)(InputManager.Instance.GetActiveInput ())).controlsEnabled = true;

		// Start level 1
		BeginLevel (activeLevelNum);
				
	}

	// Called from Victory Screen
	public void ContinueGame() {
		BeginLevel (activeLevelNum);
	}

	// Replay level after defeat
	public void RetryLevel() {
		//SceneManager.LoadSceneAsync ("GameScene");		// Reload the game scene (reset everything)

		Utils.KillAllEnemies ();
		Utils.DisablePowerups ();

		playerShip.gameObject.SetActive (true);
		BeginLevel (activeLevelNum);
	}

	// Only occurs on button click atm
	public void BeginLevel(int level) {

		// Disable shop button and other screen
		shopButton.SetActive (false);
		UIManager.Singleton.DisableContinueScreen ();
		((AIInput)(InputManager.Instance.GetActiveInput ())).controlsEnabled = true;

		// Spawn / setup logic for each level
		playerHealth = playerMaxHealth;		// Restore health to max
		UIManager.Singleton.UpdateHealth ();

		lvlActive = true;
		activeLevelNum = level;		// The numerical repr of current lvl
		activeLevel = levels [activeLevelNum - 1];		// Cache the current lvl object
		currLvlSpawners = levelSpawners[activeLevelNum - 1].row;	// B/c zero-indexed

		// Populate enemy bodycounts
		// This counts # of enemies defeated per round; decremented on each kill
		pawnsLeft = activeLevel.enemyCounts[EnemyType.Pawn];
		rangedLeft = activeLevel.enemyCounts[EnemyType.Ranged];
		medicsLeft = activeLevel.enemyCounts[EnemyType.Medic];
		turretsLeft = activeLevel.enemyCounts[EnemyType.Turret];
		dropshipsLeft = activeLevel.enemyCounts[EnemyType.DropShip];
		assassinsLeft = activeLevel.enemyCounts[EnemyType.Assassin];
		bombersLeft = activeLevel.enemyCounts[EnemyType.Bomber];

		// Activate all the enemy spawners for this lvl
		foreach (GameObject go in currLvlSpawners) {
			go.SetActive (true);
			go.GetComponent<EnemySpawnTemplate> ().startSpawning = true;
		}

		// Activate powerup spawner
		powerupSpawner.spawnEnabled = true;
		powerupSpawner.powerups = activeLevel.powerups;		// Feed PowerupSpawner the activeLvl's list of allowed powerups

		// Activate moving spawn manager
		movingSpawnManager.spawnEnabled = true;

		// Announce to dependencies (Moving Spawners, etc.)
		if (startLevelEvent != null) {
			startLevelEvent ();		// Tell all of our listeners to fire
		}

		// UI logic
		UIManager.Singleton.StartLevel (
			level, 
			pawnsLeft, rangedLeft, medicsLeft, turretsLeft, dropshipsLeft, assassinsLeft, bombersLeft
			);		// Start a dialog box alerting player of mission goal: enemies to kill, etc.

	}


	public void EndLevel(int level) {

		lvlActive = false;
		((AIInput) (InputManager.Instance.GetActiveInput ())).controlsEnabled = false;

		// Kill all enemies in scene
		Utils.KillAllEnemies ();
		Utils.DisablePowerups ();

		// Takedown logic for each level
		// Deactivate powerup spawner
		powerupSpawner.spawnEnabled = false;

		// Deactivate moving spawn manager
		movingSpawnManager.spawnEnabled = false;	

		// Disable all the spawners for this level
		DisableSpawns ();
		shopButton.SetActive (true);
		UIManager.Singleton.EndLevel (activeLevelNum);		// Remember to activate continue screen!

		activeLevelNum += 1;
	}

	// Called every time an enemy is defeated
	public void RecordKill(EnemyType et) {

		if (et == EnemyType.Assassin) {
			this.assassinsLeft -= 1;
		} else if (et == EnemyType.Bomber) {
			this.bombersLeft -= 1;
		} else if (et == EnemyType.DropShip) {
			this.dropshipsLeft -= 1;
		} else if (et == EnemyType.Medic) {
			this.medicsLeft -= 1;
		} else if (et == EnemyType.Pawn) {
			this.pawnsLeft -= 1;
		} else if (et == EnemyType.Ranged) {
			this.rangedLeft -= 1;
		} else if (et == EnemyType.Turret) {
			this.turretsLeft -= 1;
		}

		if (assassinsLeft <= 0 &&
			bombersLeft <= 0 &&
			dropshipsLeft <= 0 && 
			medicsLeft <= 0 &&
			pawnsLeft <= 0 &&
			rangedLeft <= 0 &&
			turretsLeft <= 0) {

			// Call a method to run level shutdown procedures, disable spawners, etc.
			EndLevel (activeLevelNum);
		}
	}

	// Turn off the spawners for current level
	public void DisableSpawns() {

		foreach (GameObject go in currLvlSpawners) {
			go.GetComponent<EnemySpawnTemplate> ().startSpawning = false;
		}
	}

	// Start Shop scene, while preventing Managers and Player from being destroyed
	public void OpenShop() {
		playerShip.gameObject.SetActive (false);
		uiElements.SetActive (false);		// Effectively "hides" the screen UI
		if (ShopMenu.instance != null) {
			ShopMenu.instance.gameObject.SetActive (true);
			ShopMenu.instance.SetupShop ();		// Loads all basic UI for shop
		}
		SceneManager.LoadSceneAsync ("Shop");
	}

	// Called by player input if player dies
	public void LevelFailed() {
		
		Instantiate (playerShip.explosion, transform.position, transform.rotation);
		playerShip.gameObject.SetActive (false);

		UIManager.Singleton.DisplayFailureScreen ();
		Debug.LogError ("PLAYER DIED!");
		//Debug.Break ();
	}


	private static GameManager singleton;
	public static GameManager Singleton {
		get {
			if (singleton == null) {
				singleton = new GameManager();
			}
			return singleton;
		}
	}

	/************************ [CONSTRUCTORS] *************************/
	protected GameManager() {
		//GameState = GameState.Start;	// Set current gamestate
	}


	/************************ [UNITY FUNCTIONS] ************************/

	void Start() {
		//InvokeRepeating ("HealthTest", 1, 1);	// Starts 1 second after start, then calls in 1 sec intervals
	}
		

	/************************ [METHODS] ************************/
	public void UpdateScore(int ptIncrease) {
		GameManager.Singleton.playerScore += ptIncrease * scoreMultiplier;	// Add new score in GameManager
	}

	/*public void Die() {
		//UIManager.Instance.SetStatus(Constants.StatusDeadTapToStart);
		this.GameState = GameState.Dead;
	}

	// Test function to deduct health
	public void DeductHealth() {
		playerHealth -= 1;
		//Debug.Log ("PLAYER HEALTH: " + playerHealth);
	}

	public void HealthTest() {
		DeductHealth ();
		UIManager.Singleton.UpdateHealth ();
	}*/
		
	/************************ [GETTERS & SETTERS] ************************/
	//public GameState GameState { get; set; }

	//public bool CanSwipe { get; set; }

}






