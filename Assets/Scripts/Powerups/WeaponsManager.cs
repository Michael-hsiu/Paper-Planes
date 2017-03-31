using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum SpecialWeapons {TRIPMINES, SHURIKEN, DASH, RUSH};

public class WeaponsManager : MonoBehaviour {

	static WeaponsManager _instance;

	public static WeaponsManager Instance {
		get {
			if (_instance == null) {
				_instance = FindObjectOfType<WeaponsManager> ();
			}
			return _instance;
		}
	}

	public void ActivateWeapon(string id) {
		// Activate the right weapon
	}
}
