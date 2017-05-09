using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedCollections;

public class MovingSpawn : MonoBehaviour {

	// List that stores prefabs that are valid for this squad; we'll select randomly from this list and link to our counts dictionary
	List<EnemyType> enemyTypes = new List<EnemyType>();

	public float spawnDelay = 2.0f;
	public float spawnRadius = 3.0f;
	public bool startSpawning = true;	// Should be controlled by GameManager
	public EnemyTypeCountsDictionary dict = new EnemyTypeCountsDictionary ();
	public int squadTotal;		// Tracks total # of enemies in squad; when this reaches 0, whole squad has spawned and this spawn can disappear~
	public GameObject player;

	[Range(0,360)]
	public float spawnAngle;

	private IEnumerator cr;
	private int numEnemies = 0;
	private GameObject spawnContainer;
	//private Ship spawnedEnemy;

	void OnEnable() {
		GameManager.Singleton.startLevelEvent += Initialize;	// Subscribe to start lvl event
	}

	void Initialize() {
		GameManager.Singleton.startLevelEvent -= Initialize;	// Unsubscribe from lvl event

		if (player == null) {
			
			// Initialization / assignments
			player = GameManager.Singleton.playerShip.gameObject;
		}
		// Assign 1 unique squad to this Moving Spawn (may change this so we have 1 moving spawn for ea. spawn per level; they'll be pooled and just be enabled wherever when needed)
		List<EnemySquad> listSquads = GameManager.Singleton.activeLevel.movingEnemySpawn;
		EnemySquad chosenSquad = listSquads [Random.Range (0, listSquads.Count)];

		// Add mapping of each EnemyType to # of each enemy in squad
		foreach (KeyValuePair<EnemyType, int> kv in chosenSquad.enemyCounts) {
			dict.Add(kv.Key, kv.Value);		// Make a copy of the EnemyType and corresponding # of minion spawns, which we will edit
			enemyTypes.Add(kv.Key);
			squadTotal += 1;
		}
	}
		
	void Start() {
		GameManager.Singleton.startLevelEvent += Initialize;	// Subscribe to start lvl event

		spawnContainer = new GameObject ("SpawnContainer");		// Create container to hold all spawned enemies
		cr = WaitAndFire(spawnDelay);	// Assign co-routine
		StartCoroutine(cr);				// Begin eternal enemy spawn
	}
		
	private IEnumerator WaitAndFire(float spawnDelay) {

		while (squadTotal > 0) {

			Vector3 target = player.transform.position;

			if (startSpawning) {

				// Retrieve an enemy from stored dictionary, spawn it, decrement its count, 
				// decrement total count, if count=0 for that enemy, remove its key from dict, cont. until total enemycount=0, then destroy this obj for reuse

				// Need to adapt object pool to give us back an enemy prefab if we give it enum value

				EnemyType randType = enemyTypes [Random.Range (0, enemyTypes.Count)];
				GameObject prefabRef = null;
				if (randType == EnemyType.Pawn) {
					prefabRef = GamePoolManager.Singleton.pawnShip;
				} else if (randType == EnemyType.Ranged) {
					prefabRef = GamePoolManager.Singleton.rangedShip;
				} else if (randType == EnemyType.Medic) {
					prefabRef = GamePoolManager.Singleton.mediShip;
				} else if (randType == EnemyType.Turret) {
					prefabRef = GamePoolManager.Singleton.turret;
				} else if (randType == EnemyType.DropShip) {
					prefabRef = GamePoolManager.Singleton.dropShip;
				} else if (randType == EnemyType.Assassin) {
					prefabRef = GamePoolManager.Singleton.assassinShip;
				} else if (randType == EnemyType.Bomber) {
					prefabRef = GamePoolManager.Singleton.bomberShip;
				}
					
				if (prefabRef != null) {
					Vector3 randomPos = Utils.RandomPos (transform, spawnRadius);
					PoolObject spawnedEnemy = PoolManager.Instance.ReuseObjectRef(prefabRef, randomPos, Quaternion.identity);

					Vector3 dist = target - spawnedEnemy.transform.position;
					float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)
					Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion

					spawnedEnemy.transform.rotation = desiredRotation;	// Set immediately to face the player (vector logic now expressed thru quaternion)*/
					yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies
				} else {
					yield return null;
				}
			}
			yield return null;
		}
	}
}
