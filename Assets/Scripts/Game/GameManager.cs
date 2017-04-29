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

	// Level logic
	public LevelData[] levels;		// Stores each LevelData SO as an asset
	public LevelData activeLevel;
	public int activeLevelNum = 1;

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
	public List<Row> levelSpawners = new List<Row>();		// Populate this manually in inspector; Row is a container class so we can emulate 2D list behavior

	// Called before Start()
	void Awake() {
		if (singleton == null) {
			singleton = this;

		} else {
			DestroyImmediate(this);
		}
	}

	public void StartGame() {

		// Start + Display lvl 1 logic
		if (activeLevelNum < 1) {
			activeLevelNum = 1;
		}
		BeginLevel (activeLevelNum);
				
	}


	// Only occurs on button click atm
	public void BeginLevel(int level) {
		lvlActive = true;
		// Spawn / setup logic for each level
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
		PowerupSpawner.Singleton.spawnEnabled = true;

		// UI logic
		UIManager.Singleton.StartLevel (
			level, 
			pawnsLeft, rangedLeft, medicsLeft, turretsLeft, dropshipsLeft, assassinsLeft, bombersLeft
			);		// Start a dialog box alerting player of mission goal: enemies to kill, etc.

	}

	// Debug button purposes
	public void BeginNextLevel() {
		activeLevelNum += 1;
		BeginLevel (activeLevelNum);
	}

	public void EndLevel(int level) {
		lvlActive = false;
		// Kill all enemies in scene
		Utils.KillAllEnemies ();
		Utils.DisablePowerups ();
		// Takedown logic for each level
		// Activate powerup spawner
		PowerupSpawner.Singleton.spawnEnabled = false;	

		// Disable all the spawners for this level
		DisableSpawns ();
		UIManager.Singleton.EndLevel (activeLevelNum);

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
	}


	/************************ [UNITY FUNCTIONS] ************************/

	void Start() {
		InvokeRepeating ("HealthTest", 1, 1);	// Starts 1 second after start, then calls in 1 sec intervals
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






