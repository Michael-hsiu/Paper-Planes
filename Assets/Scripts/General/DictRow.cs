using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedCollections;

[System.Serializable]
public class DictRow {

	[SerializeField]
	public List<TeamHolder> dictRow;

	[System.Serializable]
	public class TeamHolder {
		public EnemyTypeCountsDictionary dict = new EnemyTypeCountsDictionary();
	}
}
