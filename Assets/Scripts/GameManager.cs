using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class GameManager : MonoBehaviour {

	/************************ [VARIABLES & PROPERTIES] ************************/

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
		

	/************************ [METHODS] ************************/
	public void Die() {
		//UIManager.Instance.SetStatus(Constants.StatusDeadTapToStart);
		this.GameState = GameState.Dead;
	}



		
	/************************ [GETTERS & SETTERS] ************************/
	public GameState GameState { get; set; }

	//public bool CanSwipe { get; set; }

}



