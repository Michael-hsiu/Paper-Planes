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
		DisableVictoryContinueScreen ();

		failureScreen.SetActive (true);
		failureShopButton.SetActive (true);
		failureRetryButton.SetActive (true);

	}

	public void OpenVictoryContinueScreen() {
		DisableFailureContinueScreen ();

		victoryScreen.SetActive (true);
		victoryShopButton.SetActive (true);
		victoryContButton.SetActive (true);
	}

	public void DisableFailureContinueScreen() {
		failureScreen.SetActive (false);
		failureShopButton.SetActive (false);
		failureRetryButton.SetActive (false);

	}

	public void DisableVictoryContinueScreen() {
		victoryScreen.SetActive (false);
		victoryShopButton.SetActive (false);
		victoryContButton.SetActive (false);
	}
		
}
