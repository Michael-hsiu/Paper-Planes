using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {


	/************************ [VARIABLES & PROPERTIES] ************************/

	public Text scoreText, levelText, healthText;

	//Singleton implementation
	private static UIManager instance;
	public static UIManager Instance {
		get {
			if (instance == null) {
				instance = new UIManager();
			}
			return instance;
		}
	}

	/************************ [CONSTRUCTORS] *************************/

	protected UIManager() {}


	/************************ [UNITY FUNCTIONS] ************************/
	void Awake() {
		if (instance == null) {
			instance = this;
		} else {
			DestroyImmediate(this);
		}
	}



	/************************ [METHODS] ************************/

	public void UpdateScore() {
		scoreText.text = "Score: " + GameManager.playerScore.ToString ();
	}

	public void UpdateHealth() {
		healthText.text = "Health: " + GameManager.playerHealth.ToString () + " / 100";
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
