using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedCollections;

public class MovingSpawn : PoolObject {

	// List that stores prefabs that are valid for this squad; we'll select randomly from this list and link to our counts dictionary
	List<EnemyType> enemyTypes = new List<EnemyType>();

	public float spawnDelay = 2.0f;
	public float spawnRadius = 3.0f;
	public bool startSpawning = true;	// Should be controlled by GameManager
	public EnemyTypeCountsDictionary dict = new EnemyTypeCountsDictionary ();
	public int squadTotal;		// Tracks total # of enemies in squad; when this reaches 0, whole squad has spawned and this spawn can disappear~
	public GameObject player;
	public bool wasReused = false;

	[Range(0,360)]
	public float spawnAngle;

	private IEnumerator cr;
	private int numEnemies = 0;
	private GameObject spawnContainer;
	//private Ship spawnedEnemy;

	void OnEnable() {
		//GameManager.Singleton.startLevelEvent += Initialize;	// Subscribe to start lvl event
		//if (/*wasReused &&*/ GameManager.Singleton.levelActive) {
			Initialize ();		// Initialize if we spawned it after the lvl started
		//}
	}

	public override void OnObjectReuse() {
		wasReused = true;
		base.OnObjectReuse ();
	}

	public override void DestroyForReuse() {
		wasReused = false;
		base.DestroyForReuse ();
	}

	void Initialize() {
		//if (GameManager.Singleton.activeLevel.movingEnemySpawn.Count != 0) {
			GameManager.Singleton.StartLevelEvent -= Initialize;	// Unsubscribe from lvl event

			if (player == null) {

				// Initialization / assignments
				player = GameManager.Singleton.playerShip.gameObject;
			}
			// Assign 1 unique squad to this Moving Spawn (may change this so we have 1 moving spawn for ea. spawn per level; they'll be pooled and just be enabled wherever when needed)
		/*List<EnemySquad> listSquads = GameManager.Singleton.activeLevel.movingEnemySpawn;
			EnemySquad chosenSquad = listSquads [Random.Range (0, listSquads.Count)];

			// Add mapping of each EnemyType to # of each enemy in squad
			foreach (KeyValuePair<EnemyType, int> kv in chosenSquad.enemyCounts) {
				dict.Add(kv.Key, kv.Value);		// Make a copy of the EnemyType and corresponding # of minion spawns, which we will edit
				enemyTypes.Add(kv.Key);
				squadTotal += kv.Value;			// This just stores total # of enemies in that enemySquad
			}
			cr = WaitAndFire(spawnDelay);	// Assign co-routine
			StartCoroutine(cr);				// Begin eternal enemy spawn*/
		//}
	}
		
	void Awake() {
		GameManager.Singleton.StartLevelEvent += Initialize;	// Subscribe to start lvl event

		spawnContainer = new GameObject ("SpawnContainer");		// Create container to hold all spawned enemies

	}
		
	private IEnumerator WaitAndFire(float spawnDelay) {

		while (squadTotal > 0 && GameManager.Singleton.levelActive) {

			Vector3 target = player.transform.position;

			if (startSpawning) {

				// Retrieve an enemy from stored dictionary, spawn it, decrement its count, 
				// decrement total count, if count=0 for that enemy, remove its key from dict, cont. until total enemycount=0, then destroy this obj for reuse

				// Need to adapt object pool to give us back an enemy prefab if we give it enum value

				EnemyType randType = 0;

				// Must choose another enemy if it's null (need to make this reusable multiple times per level though...)
				while (dict[randType] == 0) {
					randType = enemyTypes [Random.Range (0, enemyTypes.Count)];
				}

				GameObject prefabRef = null;
				if (randType == EnemyType.Pawn) {
					prefabRef = GamePoolManager.Singleton.pawnShipLvl1;
				} else if (randType == EnemyType.Ranged) {
					prefabRef = GamePoolManager.Singleton.rangedShipLvl1;
				} else if (randType == EnemyType.Medic) {
					prefabRef = GamePoolManager.Singleton.mediShipLvl1;
				} else if (randType == EnemyType.Turret) {
					prefabRef = GamePoolManager.Singleton.turretLvl1;
				} else if (randType == EnemyType.DropShip) {
					prefabRef = GamePoolManager.Singleton.dropShipLvl1;
				} else if (randType == EnemyType.Assassin) {
					prefabRef = GamePoolManager.Singleton.assassinShipLvl1;
				} else if (randType == EnemyType.Bomber) {
					prefabRef = GamePoolManager.Singleton.bomberShipLvl1;
				}
					
				//Debug.Log ("PREFABREF: " + prefabRef == null);
				if (prefabRef != null) {
					Vector3 randomPos = Utils.RandomPos (transform, spawnRadius);
					PoolObject spawnedEnemy = PoolManager.Instance.ReuseObjectRef(prefabRef, randomPos, Quaternion.identity);
					dict [randType] -= 1;	// Subtract for dict of counts
					squadTotal -= 1;	// Minus 1 from total # of enemies

					Vector3 dist = target - spawnedEnemy.transform.position;
					float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)
					Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

					spawnedEnemy.transform.rotation = desiredRotation;	// Set immediately to face the player (vector logic now expressed thru quaternion)*/
				}
				yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies
			} 
		}
		if (squadTotal == 0 || !GameManager.Singleton.levelActive) {
			Debug.Log ("DESTROYING MOVING SPAWN");
			Destroy (this.gameObject);
		}
	}
}
