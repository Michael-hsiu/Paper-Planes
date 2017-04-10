using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurstRushManager : MonoBehaviour {

	public GameObject burstChargeColliders;
	public GameObject burstRushColliders;

	static BurstRushManager instance;
	public static BurstRushManager Instance {
		get {
			if (instance == null) {
				instance = FindObjectOfType<BurstRushManager> ();
			}
			return instance;
		}
	}

	void Start() {
		burstChargeColliders = GameObject.FindGameObjectWithTag (Constants.RushChargeColliders);
		burstRushColliders = GameObject.FindGameObjectWithTag (Constants.RushThrustColliders);

		burstChargeColliders.SetActive (false);
		burstRushColliders.SetActive (false);
	}
}