﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class UIManager : MonoBehaviour {


	/************************ [VARIABLES & PROPERTIES] ************************/

	public Text scoreText;
	public Text levelText;
	public Text healthText;
	public Text dashStoreText;
	public Text burshRushText;

	// Level update text
	public Text levelGoalText;
	public Text levelEndText;
	public IEnumerator levelGoalCR;

	public float displayLength = 3.0f;

	public void StartLevel(int level, int goal) {
		levelGoalCR = DisplayLevelGoalText (level, goal);
		//StopAllCoroutines ();
		StartCoroutine (levelGoalCR);
	}

	IEnumerator DisplayLevelGoalText(int level, int goal) {
		
		levelGoalText.gameObject.SetActive (true);
		levelGoalText.text = String.Format("Level {0}: Defeat {1} Pawns.", level, goal);

		yield return new WaitForSeconds (displayLength);	// Show the level goal text on screen
		levelGoalText.gameObject.SetActive (false);		// Hide the text
	
	}

	//Singleton implementation
	private static UIManager singleton;
	public static UIManager Singleton {
		get {
			if (singleton == null) {
				singleton = new UIManager();
			}
			return singleton;
		}
	}

	/************************ [CONSTRUCTORS] *************************/

	protected UIManager() {}


	/************************ [UNITY FUNCTIONS] ************************/
	void Awake() {
		if (singleton == null) {
			singleton = this;
		} else {
			DestroyImmediate(this);
		}
	}


	/************************ [METHODS] ************************/

	public void UpdateScore() {
		scoreText.text = "Score: " + GameManager.Singleton.playerScore.ToString ();
	}

	public void UpdateHealth() {
		healthText.text = "Health: " + GameManager.Singleton.playerHealth.ToString () + " / 100";
	}

	public void UpdateDashText(int dashes) {
		dashStoreText.text = "Stored Dashes: " + dashes;
	}
		
	public void UpdateBurstRushText() {
		burshRushText.text = "Burst Rushes: " + GameManager.Singleton.rushes.Count;		// See how many rushes are left in our list
	}

}
