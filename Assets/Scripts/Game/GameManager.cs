using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

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
	public LevelData[] levels;
	public LevelData activeLevel;

	public int currLevel = 1;
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
	public List<List<GameObject>> levelSpawners = new List<List<GameObject>>();		// Populate this manually in inspector
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

	// Only occurs on button click atm
	public void BeginLevel(int level) {
		
		// Spawn / setup logic for each level
		activeLevel = levels [currLevel];		// Cache the current lvl object
		currLvlSpawners = levelSpawners[activeLevel - 1];	// B/c zero-indexed

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
		UIManager.Singleton.EndLevel (currLevel);
	
	}

	// Called every time an enemy is defeated
	public void RecordKill() {
		
		this.enemiesToKill -= 1;

		if (this.enemiesToKill <= 0) {
			// Call a method to run level shutdown procedures, disable spawners, etc.
			lvlActive = false;
			EndLevel (currLevel);
		}
	}

	// Turn off the spawners for current level
	public void DisableSpawns() {

		List<GameObject> currLvlSpawns = currLvl.spawns;
		foreach (GameObject go in currLvlSpawns) {
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


		// Make all the levels
		int lvlCount = this.currLevel;
		int enemyKillsNeeded = 30;
		for (int i = 1; i < 2; i++) {
			Level currLvl = new Level (i, enemyKillsNeeded, levelSpawns_1);
			//this.levels.Add (i, currLvl);	// k=lvl, v=lvlObj
			lvlCount += 1;
			enemyKillsNeeded += 30;
		}
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






