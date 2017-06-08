﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

	public float xBound;
	public float yBound;
	public float spawnDelay = 5.0f;				// Delay between enemy spawns.
	public bool spawnEnabled = false;
	public int currLevel = 0;		// This is used from EnemySpawner. Enemies UP TO this index are allowed to be spawned. Reflects same-named value from GameManager.
	public bool bossSpawnEnabled = false;

	// The maximum of each enemy we can have alive at a time. MAY be subject to change as level increases.
	[Header("MAX_ENEMY_COUNTS")]
	public int MAX_PAWNS = 5;
	public int MAX_RANGED = 15;
	public int MAX_BOMBERS = 20;
	public int MAX_DROPSHIPS = 5;
	public int MAX_MEDICS = 5;
	public int MAX_TURRETS = 10;
	public int MAX_ASSASSINS = 5;
	public int MAX_BOSSES = 2;

	// The number of each mob alive right now.
	// Remember to update with bosses later on.
	[Header("NUM_ENEMIES_ALIVE")]
	public int NUM_PAWNS_ALIVE = 0;
	public int NUM_RANGED_ALIVE = 0;
	public int NUM_BOMBERS_ALIVE = 0;
	public int NUM_DROPSHIPS_ALIVE = 0;
	public int NUM_MEDICS_ALIVE = 0;
	public int NUM_TURRETS_ALIVE = 0;
	public int NUM_ASSASSINS_ALIVE = 0;
	public int NUM_BOSSES_ALIVE = 0;

	public IEnumerator enemySpawnRoutine;

	public List<GameObject> enemyShips = new List<GameObject> ();


	void Start() {
		Vector3 boxSize = GetComponent<BoxCollider> ().size;
		xBound = boxSize.x / 2;
		yBound = boxSize.y / 2;

		enemySpawnRoutine = StartSpawningEnemies ();
		StartCoroutine (enemySpawnRoutine);
	}

	// Increase the number of total enemies that can be spawned, and how many of each.
	public void IncreaseLevel() {
		currLevel += 1;
	}

	public void RecordKill(EnemyType enemyType) 
	{
		switch (enemyType)
		{
			case EnemyType.Pawn: 
				NUM_PAWNS_ALIVE -= 1;
				break;
			case EnemyType.Ranged: 
				NUM_RANGED_ALIVE -= 1;
				break;
			case EnemyType.Bomber: 
				NUM_BOMBERS_ALIVE -= 1;
				break;
			case EnemyType.DropShip: 
				NUM_DROPSHIPS_ALIVE -= 1;
				break;
			case EnemyType.Medic: 
				NUM_MEDICS_ALIVE -= 1;
				break;
			case EnemyType.Turret: 
				NUM_TURRETS_ALIVE -= 1;
				break;
			case EnemyType.Assassin: 
				NUM_ASSASSINS_ALIVE -= 1;
				break;
			case EnemyType.Boss: 
				NUM_BOSSES_ALIVE -= 1;
				break;	
		}
	}

	IEnumerator StartSpawningEnemies() {

		while (true) {
			while (spawnEnabled) {
				// [TEST] spawn ships.
				// Spawn within map range.
				Vector3 spawnLoc = new Vector3 (Random.Range (-xBound, xBound), Random.Range (-yBound, yBound), 0);

				// Spawn UP TO current level progression.
				// Use / remove from DICT when MAX_CAP reached. Then remove / reset upon level reset or when enough of the enemy eliminated.
				// OR we could use current method, which is just instance vars tracking each type of enemy.
                GameObject enemyShip = enemyShips [Random.Range (0, Mathf.Min(currLevel, enemyShips.Count - 1))];
				EnemyType enemyType = (enemyShip.GetComponent<Ship> () != null) ? enemyShip.GetComponent<Ship>().enemyType : enemyShip.GetComponent<Turret>().enemyType;

				// First select a valid enemy
				bool alreadySpawnedMax = true;
				while (alreadySpawnedMax) {

					switch (enemyType)
					{
						case EnemyType.Pawn: 
							if (NUM_PAWNS_ALIVE < MAX_PAWNS) {
								NUM_PAWNS_ALIVE += 1;
								alreadySpawnedMax = false;
							}
							break;
						case EnemyType.Ranged: 
							if (NUM_RANGED_ALIVE < MAX_RANGED) {
								NUM_RANGED_ALIVE += 1;
								alreadySpawnedMax = false;								
							}
							break;
						case EnemyType.Bomber: 
							if (NUM_BOMBERS_ALIVE < MAX_BOMBERS) {
								NUM_BOMBERS_ALIVE += 1;
								alreadySpawnedMax = false;
							}
							break;
						case EnemyType.DropShip: 
							if (NUM_DROPSHIPS_ALIVE < MAX_DROPSHIPS) {
								NUM_DROPSHIPS_ALIVE += 1;
								alreadySpawnedMax = false;
							}
							break;
						case EnemyType.Medic: 
							if (NUM_MEDICS_ALIVE < NUM_MEDICS_ALIVE) {
								NUM_MEDICS_ALIVE += 1;
								alreadySpawnedMax = false;
							}
							break;
						case EnemyType.Turret: 
							if (NUM_TURRETS_ALIVE < MAX_TURRETS) {
								NUM_TURRETS_ALIVE += 1;
								alreadySpawnedMax = false;
							}
							break;
						case EnemyType.Assassin: 
							if (NUM_ASSASSINS_ALIVE < MAX_ASSASSINS) {
								NUM_ASSASSINS_ALIVE += 1;
								alreadySpawnedMax = false;
							}
							break;
						case EnemyType.Boss: 
							if (NUM_BOSSES_ALIVE < MAX_BOSSES) {
								NUM_BOSSES_ALIVE += 1;
								alreadySpawnedMax = false;
							}
							break;					
					}
                    if (!alreadySpawnedMax) {
                        // We've found a valid enemyType, so spawn that!
                        break;
                    } else {
                        enemyShip = enemyShips [Random.Range (0, Mathf.Min(currLevel, enemyShips.Count - 1))];
                        enemyType = (enemyShip.GetComponent<Ship> () != null) ? enemyShip.GetComponent<Ship>().enemyType : enemyShip.GetComponent<Turret>().enemyType;

                        yield return null;
                    }									
                }

                Debug.Log("ENEMY TYPE: " + enemyType);
				// Now spawn the enemy
				PoolManager.Instance.ReuseObject (enemyShip, spawnLoc, Quaternion.identity);

				// Wait a bit before spawning next enemy.
				// We COULD spawn multiple at a time / formations!
				yield return new WaitForSeconds (Random.Range (0, 2.0f));
			}
			yield return null;
		}
	}
}
