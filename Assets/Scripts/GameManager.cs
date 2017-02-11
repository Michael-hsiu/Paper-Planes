﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class GameManager : MonoBehaviour {

	/************************ [VARIABLES & PROPERTIES] ************************/

	// Player health
	public static int playerHealth = 100;

	// Player score
	public static int playerScore = 0;

	// One instance of GameManager will run throughout game
	private static GameManager singleton;

	// Property for GameManager instance
	public static GameManager Singleton {
		get {
			if (singleton == null) {
				singleton = new GameManager();
			}
			return singleton;
		}
	}

	/************************ [CONSTRUCTORS] *************************/
	protected GameManager() {
		GameState = GameState.Start;	// Set current gamestate
		//CanSwipe = false;
	}


	/************************ [UNITY FUNCTIONS] ************************/

	// Called before Start()
	void Awake() {
		if (singleton == null) {
			singleton = this;
		} else {
			DestroyImmediate(this);
		}
	}

	void Start() {
		InvokeRepeating ("HealthTest", 1, 1);	// Starts 1 second after start, then calls in 1 sec intervals
		//Debug.Log ("REACHED!");
	}
		

	/************************ [METHODS] ************************/
	public void Die() {
		//UIManager.Instance.SetStatus(Constants.StatusDeadTapToStart);
		this.GameState = GameState.Dead;
	}

	// Test function to deduct health
	public void DeductHealth() {
		playerHealth -= 1;
		//Debug.Log ("PLAYER HEALTH: " + playerHealth);
	}

	public void HealthTest() {
		DeductHealth ();
		UIManager.Instance.UpdateHealth ();
	}

	// Called when gameObject first touches trigger collider.
	/*void OnTriggerEnter2D(Collider2D other) {
		// Deactivates gameObject and all its children
		if (other.gameObject.CompareTag ("HealthPack")) {
			other.gameObject.SetActive (false);
			playerHealth += 50;
		}
		Debug.Log ("COLLISION NOT DETECTED!");
	}*/
		
	/************************ [GETTERS & SETTERS] ************************/
	public GameState GameState { get; set; }

	//public bool CanSwipe { get; set; }

}



