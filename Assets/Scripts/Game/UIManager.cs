using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class UIManager : MonoBehaviour {


	/************************ [VARIABLES & PROPERTIES] ************************/

	public Text scoreText;
	public Text scoreGoalText;
	public Text levelText;
	public Text healthText;
	public Text dashStoreText;
	public Text burshRushText;
	public Image healthBar;		// The Health Bar that changes in size as health inc/dec
	public ContinueScreen continueScreen;
	public Button startGameButton;		// Primary button for beginning the game
	public GameObject shopButton;

	// Level update text
	public Text levelGoalText;
	public Text levelEndText;
	//public Text startGameText;
	public IEnumerator levelGoalRoutine;
	public IEnumerator levelEndRoutine;

	public float displayLength = 3.0f;	// How long dialog appears on-screen


	void Awake() {
		if (singleton == null) {
			singleton = this;
		} else {
			DestroyImmediate(this);
		}
	}

	void Start() {
		// Since inspector values are not processed yet
		UpdateHealth ();

		// SUBSCRIBE to GameManager StartLevelEvent
		GameManager.Singleton.StartLevelEvent += OnLevelStartUpdateUI;
	}

	// goal=enemiesToKill
	public void OnLevelStartUpdateUI() {

		// Can we dynamically pass in params to event subscribers?
		levelGoalRoutine = IncreaseLevelRoutine (GameManager.Singleton.currLevel);

		shopButton.SetActive (false);
		startGameButton.gameObject.SetActive (false);
		scoreGoalText.text = GameManager.Singleton.scoreBoundaries [GameManager.Singleton.currLevel].ToString ();

		//StopAllCoroutines ();
		StartCoroutine (levelGoalRoutine);
	}

	// Visual cue to players that difficulty is changing
	IEnumerator IncreaseLevelRoutine(int currLevel) {

		if (currLevel == 0) {
			
			String goalText = "Ready...begin!!!";
			levelGoalText.gameObject.SetActive (true);
			levelGoalText.text = goalText;
			yield return new WaitForSeconds (1.5f);	// Show the level goal text on screen
			levelGoalText.gameObject.SetActive (false);		// Hide the text

		} else {

			String goalText = "WARNING: Difficulty increased!!!";
			levelGoalText.gameObject.SetActive (true);
			levelGoalText.text = goalText;
			yield return new WaitForSeconds (0.7f);	// Show the level goal text on screen

			// Blink on and off
			levelGoalText.gameObject.SetActive (false);		// Hide the text
			yield return new WaitForSeconds (0.3f);	// Show the level goal text on screen

			levelGoalText.gameObject.SetActive (true);
			yield return new WaitForSeconds (0.7f);	// Show the level goal text on screen

			levelGoalText.gameObject.SetActive (false);		// Hide the text
			yield return new WaitForSeconds (0.3f);	// Show the level goal text on screen

			levelGoalText.gameObject.SetActive (true);
			yield return new WaitForSeconds (0.7f);	// Show the level goal text on screen

			levelGoalText.gameObject.SetActive (false);		// Hide the text
		}
	}
		



	public void EndLevel(int level) {
		DisplayVictoryScreen ();									// Opens the Victory Screen and the only current way of progressing to next level.
		//GameManager.Singleton.shopButton.SetActive (true);		// Shop is active when level is over
	}

	public void DisableContinueScreen() {
		continueScreen.gameObject.SetActive (false);	
	}

	public void DisplayVictoryScreen() {
		continueScreen.gameObject.SetActive (true);
		continueScreen.GetComponent<ContinueScreen> ().OpenVictoryContinueScreen ();
		Debug.Log ("VICTORY SCREEN");
		/*EnableVictoryScreen ();
		DisableFailureScreen ();*/
	}

	public void DisplayFailureScreen() {
		continueScreen.gameObject.SetActive (true);
		continueScreen.GetComponent<ContinueScreen> ().OpenFailureContinueScreen ();
		/*DisableVictoryScreen ();
		EnableFailureScreen ();*/
	}


	public void EnableVictoryScreen() {
		continueScreen.victoryScreen.SetActive (true);
	}

	public void DisableVictoryScreen() {
		continueScreen.victoryScreen.SetActive (false);
	}

	public void EnableFailureScreen() {
		continueScreen.failureScreen.SetActive (true);
	}

	public void DisableFailureScreen() {
		continueScreen.failureScreen.SetActive (false);
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

	public void UpdateScore() {
		scoreText.text = GameManager.Singleton.playerScore.ToString ();
	}

	public void UpdateHealth() {
		// Text
		//Debug.Log ("HEALTH UPDATED");
		healthText.text = "Health: " + GameManager.Singleton.playerHealth.ToString () + " / " + GameManager.Singleton.playerMaxHealth.ToString ();

		// Health bar
		float ratio = (float) GameManager.Singleton.playerHealth / GameManager.Singleton.playerMaxHealth;
		//Debug.Log ("RATIO: " + ratio);
		healthBar.rectTransform.localScale = new Vector3 (ratio, 1, 1);		// Resize health bar proportionally
	}

	public void UpdateDashText(int dashes) {
		dashStoreText.text = "Stored Dashes: " + dashes;
	}
		
	public void UpdateBurstRushText() {
		burshRushText.text = "Burst Rushes: " + GameManager.Singleton.rushes.Count;		// See how many rushes are left in our list
	}

}
