using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {


	/************************ [VARIABLES & PROPERTIES] ************************/

	public Text ScoreText, StatusText;


	private float score = 0;

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

	public void ResetScore() {
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
		ScoreText.text = score.ToString();
	}

	public void SetStatus(string text) {
		StatusText.text = text;
	}





}
