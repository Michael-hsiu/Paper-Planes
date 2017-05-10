using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedCollections;

[CreateAssetMenu]
public class EnemySquad : ScriptableObject {

	// Enemies that will be part of the squad
	public EnemyTypeCountsDictionary enemyCounts;
	/*= new EnemyTypeCountsDictionary() {
		{ EnemyType.Pawn, 0},
		{ EnemyType.Ranged, 0},
		{ EnemyType.Medic, 0},
		{ EnemyType.Turret, 0},
		{ EnemyType.DropShip, 0},
		{ EnemyType.Assassin, 0},
		{ EnemyType.Bomber, 0},
	};*/
}