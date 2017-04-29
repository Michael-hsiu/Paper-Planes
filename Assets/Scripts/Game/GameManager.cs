using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using ExtendedCollections;

public class GameManager : MonoBehaviour {

	public int playerHealth = 100;
	public int playerScore = 0;
	public int playerDamage = 20;
	public int scoreMultiplier = 1;
	public bool axisInput = true;
	public bool speedCapped = true;
	public bool isDashing = false;
	public bool onDashCooldown = false;
	public int dashes = 99;

	public int test = 0;

	// Level logic
	public LevelData[] levels;		// Stores each LevelData SO as an asset
	public LevelData activeLevel;
	public int activeLevelNum = 1;

	//public int enemiesToKill = 10;

	// Store how many enemies we need to defeat per level
	public int pawnsLeft;
	public int rangedLeft;
	public int medicsLeft;
	public int turretsLeft;
	public int dropshipsLeft;
	public int assassinsLeft;
	public int bombersLeft;

	//public int enemyGoal;
	public bool lvlActive = true;

	// Current level cache
	//public Level currLvl = null;
	public List<GameObject> currLvlSpawners;	// Get from index (currLvl-1)

	// Enemy spawners
	public List<Row> levelSpawners = new List<Row>();		// Populate this manually in inspector
	//public List<List<GameObject>> levelSpawners = new List<List<GameObject>>();		// Populate this manually in inspector
	//public List<GameObject> levelSpawns_1 = new List<GameObject>();
	//public List<GameObject> levelSpawns_2 = new List<GameObject>();

	// Contains all Level objects for the game
	//public Dictionary<int, Level> levels = new Dictionary<int, Level>();
	//public Dictionary<int, List<GameObject>> levelSpawns;


	// Container class for level info
	/*public class Level {
		public int currLevel;
		public int enemiesToKill;
		public List<GameObject> spawns;

		public Level(int currLevel, int enemiesToKill, List<GameObject> spawns) {
			this.currLevel = currLevel;
			this.enemiesToKill = enemiesToKill;
			this.spawns = spawns;
		}
	}*/

	// Called before Start()
	void Awake() {
		if (singleton == null) {
			singleton = this;

		} else {
			DestroyImmediate(this);
		}
	}

	public void StartGame() {
		LevelData firstLevel = GameManager.Singleton.levels [0];	// All levels are zero-indexed!
		activeLevelNum = 1;
		EnemyTypeCountsDictionary enemyCountsDict = firstLevel.enemyCounts;

		// Start + Display lvl 1 logic
		BeginLevel (activeLevelNum);
		UIManager.Singleton.StartLevel(activeLevelNum, 
			enemyCountsDict[EnemyType.Pawn], 
			enemyCountsDict[EnemyType.Ranged], 
			enemyCountsDict[EnemyType.Medic], 
			enemyCountsDict[EnemyType.Turret], 
			enemyCountsDict[EnemyType.DropShip], 
			enemyCountsDict[EnemyType.Assassin], 
			enemyCountsDict[EnemyType.Bomber]
			);		
	}


	// Only occurs on button click atm
	public void BeginLevel(int level) {
		
		// Spawn / setup logic for each level
		activeLevelNum = level;		// The numerical repr of current lvl
		activeLevel = levels [activeLevelNum - 1];		// Cache the current lvl object
		currLvlSpawners = levelSpawners[activeLevelNum - 1].row;	// B/c zero-indexed

		// Populate enemy bodycounts
		pawnsLeft = activeLevel.enemyCounts[EnemyType.Pawn];
		rangedLeft = activeLevel.enemyCounts[EnemyType.Ranged];
		medicsLeft = activeLevel.enemyCounts[EnemyType.Medic];
		turretsLeft = activeLevel.enemyCounts[EnemyType.Turret];
		dropshipsLeft = activeLevel.enemyCounts[EnemyType.DropShip];
		assassinsLeft = activeLevel.enemyCounts[EnemyType.Assassin];
		bombersLeft = activeLevel.enemyCounts[EnemyType.Bomber];

		//this.enemyGoal = currLvl.enemiesToKill;	// Set # of enemies to defeat; this value will not be changed per enemy death, will be standard.
		//this.enemiesToKill = enemyGoal;			// This counts # of enemies defeated per round; decremented on each kill

		// Activate all the enemy spawners
		foreach (GameObject go in currLvlSpawners) {
			go.SetActive (true);
			go.GetComponent<EnemySpawnTemplate> ().startSpawning = true;
		}

		// Activate powerup spawner
		PowerupSpawner.Singleton.spawnEnabled = true;

		// UI logic
		UIManager.Singleton.StartLevel (
			level, 
			pawnsLeft, rangedLeft, medicsLeft, turretsLeft, dropshipsLeft, assassinsLeft, bombersLeft
			);		// Start a dialog box alerting player of mission goal: enemies to kill, etc.
	}

	public void EndLevel(int level) {

		// Kill all enemies in scene
		Utils.KillAllEnemies ();
		Utils.DisablePowerups ();
		// Takedown logic for each level
		level += 1;
		// Activate powerup spawner
		PowerupSpawner.Singleton.spawnEnabled = false;	

		// Disable all the spawners for this level
		DisableSpawns ();
		UIManager.Singleton.EndLevel (activeLevelNum);
	
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
			lvlActive = false;
			EndLevel (activeLevelNum);
		}
	}

	// Turn off the spawners for current level
	public void DisableSpawns() {

		foreach (GameObject go in currLvlSpawners) {
			go.GetComponent<EnemySpawnTemplate> ().startSpawning = false;
		}
	}

	// Powerup logic
	public Queue<BurstRushPowerup> rushes = new Queue<BurstRushPowerup>();
	//public int rushes = 0;

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
		GameState = GameState.Start;	// Set current gamestate
		// Get all the spawn lists


		/*// Make all the levels
		int lvlCount = this.activeLevelNum;
		int enemyKillsNeeded = 30;
		for (int i = 1; i < 2; i++) {
			Level currLvl = new Level (i, enemyKillsNeeded, levelSpawns_1);
			//this.levels.Add (i, currLvl);	// k=lvl, v=lvlObj
			lvlCount += 1;
			enemyKillsNeeded += 30;
		}*/
	}


	/************************ [UNITY FUNCTIONS] ************************/

	void Start() {
		InvokeRepeating ("HealthTest", 1, 1);	// Starts 1 second after start, then calls in 1 sec intervals
		//Debug.Log ("REACHED!");
	}
		

	/************************ [METHODS] ************************/
	public void UpdateScore(int ptIncrease) {
		GameManager.Singleton.playerScore += ptIncrease * scoreMultiplier;	// Add new score in GameManager
	}

	public void Die() {
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
	}
		
	/************************ [GETTERS & SETTERS] ************************/
	public GameState GameState { get; set; }

	//public bool CanSwipe { get; set; }

}






