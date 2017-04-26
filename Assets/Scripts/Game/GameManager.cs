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

	// Enemy spawners
	public List<GameObject> levelSpawns_1 = new List<GameObject>();
	public List<GameObject> levelSpawns_2 = new List<GameObject>();

	// Contains all Level objects for the game
	public Dictionary<int, Level> levels;

	// Container class for level info
	public class Level {
		int level;
		int enemiesToKill;
		List<GameObject> spawns;

		Level(int level, int enemiesToKill, List<GameObject> spawns) {
			this.level = level;
			this.enemiesToKill = enemiesToKill;
			this.spawns = spawns;
		}
	}


	// Level logic
	public int level = 1;
	public int waveEnemies;

	public void BeginLevel(int level) {
		// Spawn / setup logic for each level
		if (level == 1) {
			// Activate all the spawns
			foreach (GameObject go in levelSpawns_1) {
				go.SetActive (true);
				go.GetComponent<EnemySpawnTemplate> ().startSpawning = true;
			}	
		}

		// UI logic
		UIManager.Singleton.StartLevel (level, 3);
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
		//CanSwipe = false;
	}


	/************************ [UNITY FUNCTIONS] ************************/

	// Called before Start()
	void Awake() {
		if (singleton == null) {
			singleton = this;
		} else {
			DestroyImmediate(this);
		}
	}




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






