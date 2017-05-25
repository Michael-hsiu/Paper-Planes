using UnityEngine;
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
	public Image healthBar;		// The Health Bar that changes in size as health inc/dec
	public ContinueScreen continueScreen;
	public Button startGameButton;		// Primary button for beginning the game

	// Level update text
	public Text levelGoalText;
	public Text levelEndText;
	public Text startGameText;
	public IEnumerator levelGoalCR;
	public IEnumerator levelEndCR;

	public float displayLength = 3.0f;	// How long dialog appears on-screen


	// goal=enemiesToKill
	public void StartLevel(int level, 
		int pawnsLeft, 
		int rangedLeft, 
		int medicsLeft, 
		int turretsLeft, 
		int dropshipsLeft, 
		int assassinsLeft, 
		int bombersLeft) {

		levelGoalCR = DisplayLevelGoalText (level, 
			pawnsLeft, 
			rangedLeft, 
			medicsLeft, 
			turretsLeft, 
			dropshipsLeft, 
			assassinsLeft, 
			bombersLeft
		);
		if (level == 1) {
			startGameText.text = "Press to cont.";
		}
		startGameText.transform.parent.gameObject.SetActive(false);
		GameManager.Singleton.shopButton.SetActive (false);
		startGameButton.gameObject.SetActive (false);
		//StopAllCoroutines ();
		StartCoroutine (levelGoalCR);
	}

	public void EndLevel(int level) {
		startGameText.transform.parent.gameObject.SetActive(true);
		GameManager.Singleton.shopButton.SetActive (true);		// Shop is active when level is over
		levelEndCR = DisplayLevelEndText (level);
		//StopAllCoroutines ();
		StartCoroutine (levelEndCR);
	}

	IEnumerator DisplayLevelGoalText(int level, 
		int pawnsLeft,
		int rangedLeft,
		int medicsLeft,
		int turretsLeft,
		int dropshipsLeft,
		int assassinsLeft,
		int bombersLeft
		) {
		
		levelGoalText.gameObject.SetActive (true);

		String goalText = "Level " + level + ": Defeat ";

		if (pawnsLeft > 0) {
			goalText += (pawnsLeft + " Pawns, ");
		}
		if (rangedLeft > 0) {
			goalText += (rangedLeft + " Ranged, ");
		}
		if (medicsLeft > 0) {
			goalText += (medicsLeft + " Medics, ");
		}
		if (turretsLeft > 0) {
			goalText += (turretsLeft + " Turrets, ");
		}
		if (dropshipsLeft > 0) {
			goalText += (dropshipsLeft + " DropShips, ");
		}
		if (assassinsLeft > 0) {
			goalText += (assassinsLeft + " Assassins, ");
		}
		if (bombersLeft > 0) {
			goalText += (bombersLeft + " Bombers, ");
		}

		goalText += ".";

		levelGoalText.text = goalText;

		yield return new WaitForSeconds (displayLength);	// Show the level goal text on screen
		levelGoalText.gameObject.SetActive (false);		// Hide the text
	
	}

	IEnumerator DisplayLevelEndText(int level) {

		/*levelEndText.gameObject.SetActive (true);
		levelEndText.text = String.Format("Level {0}: Complete!", level);

		yield return new WaitForSeconds (displayLength);	// Show the victory text on screen
		levelEndText.gameObject.SetActive (false);		// Hide the text
		*/

		continueScreen.gameObject.SetActive (true);
		continueScreen.GetComponent<ContinueScreen> ().OpenVictoryContinueScreen ();
		yield return null;
	}

	public void DisableContinueScreen() {
		continueScreen.gameObject.SetActive (false);	
	}




	/*public void EnableVictoryScreen() {
		continueScreen.victoryScreen.SetActive (false);
	}

	public void DisableVictoryScreen() {
		continueScreen.victoryScreen.SetActive (true);
	}

	public void EnableFailureScreen() {
		continueScreen.failureScreen.SetActive (true);
	}

	public void DisableFailureScreen() {
		continueScreen.failureScreen.SetActive (false);
	}*/


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


	/************************ [UNITY FUNCTIONS] ************************/
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
	}

	/************************ [METHODS] ************************/

	public void UpdateScore() {
		scoreText.text = "Score: " + GameManager.Singleton.playerScore.ToString ();
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
