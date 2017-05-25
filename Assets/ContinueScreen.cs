using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ContinueScreen : MonoBehaviour {

	// One of these will be chosen to be displayed
	public GameObject victoryScreen;
	public GameObject failureScreen;

	// These are the texts for VICTORY SCREEN that change depending on player score
	public Text enemiesDefeatedText;
	public Text powerupsObtainedText;
	public Text totalCrystalsText;

	public GameObject victoryShopButton;
	public GameObject victoryContButton;

	public GameObject failureShopButton;
	public GameObject failureRetryButton;


	public void OpenFailureContinueScreen() {
		failureScreen.SetActive (true);

	}

	public void OpenVictoryContinueScreen() {
		victoryScreen.SetActive (true);
	}
		
}
