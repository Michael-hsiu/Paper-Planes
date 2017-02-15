using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {


	/************************ [VARIABLES & PROPERTIES] ************************/

	public Text scoreText, levelText, healthText;

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




	/*public void ResetScore() {
		score = 0;
		UpdateScoreText();
	}

	public void SetScore(float value) {
		score = value;
		UpdateScoreText();
	}

	public void IncreaseScore(float value) {
		score += value;
		UpdateScoreText();
	}

	private void UpdateScoreText() {
		scoreText.text = score.ToString();
	}

	public void SetStatus(string text) {
		StatusText.text = text;
	}*/





}
