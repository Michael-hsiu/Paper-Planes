using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class MissileBoss : Ship, IEnemy {
	
	#region Variables
	//public EnemyType enemyType = EnemyType.Ranged;
	public float senseRadius;

	// States
	public IMoveState moveState;
	public IFireState firingState;

	public List<GameObject> missileSpawns;
	#endregion




}
