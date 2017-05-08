using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedCollections;

[CreateAssetMenu]
public class LevelData : ScriptableObject {

	public int currLevel;

	// Enemies that will spawn during this level
	public EnemyTypeCountsDictionary enemyCounts = new EnemyTypeCountsDictionary() {
		{ EnemyType.Pawn, 0},
		{ EnemyType.Ranged, 0},
		{ EnemyType.Medic, 0},
		{ EnemyType.Turret, 0},
		{ EnemyType.DropShip, 0},
		{ EnemyType.Assassin, 0},
		{ EnemyType.Bomber, 0},
	};

	// Moving spawn: deterministic enemy spawns
	public List<DictRow> movingEnemySpawn = new List<DictRow>();

	public List<GameObject> powerups = new List<GameObject>();

	//public List<GameObject> spawns = new List<GameObject>();	// Doesn't work b/c assets can't reference scene objects

}

public enum EnemyType {
	Pawn,
	Ranged,
	Medic,
	Turret,
	DropShip,
	Assassin,
	Bomber
}

/*
public int pawnsToKill;
public int rangedToKill;
public int medicToKill;
public int dropshipToKill;
public int assasssinToKill;
public int turretToKill;
public int bomberToKill;

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	public EnemyMove enemy;		// Reference to our one enemy

	public EnemyData[] levelData;

	[Range(1,5)]
	public int level;		// Can have 5 levels

	void Start() {
		// level <= array size
		if (level > levelData.Length) {
			level = levelData.Length;
		}
		// Pass SO info to enemy
		enemy.data = levelData [level - 1];
	}

} */

