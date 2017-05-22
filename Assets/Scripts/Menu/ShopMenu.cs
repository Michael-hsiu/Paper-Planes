﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShopMenu : MonoBehaviour {

	// All the different storyboard scenes 
	public GameObject shopBaseUI;
	public GameObject welcomeScreen;		// UI making up the welcome screen
	public GameObject shipUpgrades;
	public GameObject powerupUpgrades;		// List of all powerups you can upgrade
	public GameObject specificPowerupUpgrades;	// This will be populated programatically for each powerup
	public GameObject exitButton;			// Also the back button

	// Shop Panel
	public GameObject shopInfoPanel;		// Populate price of upgrade, player balance
	// Following is populated based on active 'powerupHolder', set on button press.
	public Text upgradeName;				
	public Text upgradePrice;
	public Text upgradeInfo;
	public Sprite upgradeSprite;

	
	public GameObject activeScreen;			// Track currently activated overlay UI
	public Stack<GameObject> screenStack = new Stack<GameObject>();	// Visited screens
	public bool isOpen;		// Is the shop open?

	// Individually selected powerup
	public PowerupHolder powerupHolder;

	public void OpenShop() {

		if (!isOpen) {
			shopBaseUI.SetActive (true);		// THIS UI IS ALWAYS PRESENT
			welcomeScreen.SetActive (true);		// All other screens are disabled until button press

			screenStack.Push (welcomeScreen);	// Store in-order progression of screens accessed
			activeScreen = welcomeScreen;		// Track the currently active screen
			isOpen = true;
		}
	}         

	public void CloseShop() {
		if (isOpen) {
			shopBaseUI.SetActive (true);
			activeScreen.SetActive (false);

			activeScreen = null;
			screenStack.Clear ();
			isOpen = false;
		}
	}

	public void PowerupUpgradesPressed() {
		screenStack.Push (activeScreen);
		activeScreen.SetActive (false);		// Screen transition

		activeScreen = powerupUpgrades;
		activeScreen.SetActive (true);
	}

	public void IndividualPowerupPressed() {
		screenStack.Push (activeScreen);
		activeScreen.SetActive (false);		// Screen transition

		activeScreen = specificPowerupUpgrades;
		activeScreen.SetActive (true);

		// POPULATE text fields for specific powerup
		// The following also needs to be generalized to all powerup types.
		HomingMissilePowerup currPowerup = powerupHolder.powerup.GetComponent <HomingMissilePowerup>();
		Debug.Log (currPowerup.name);
		Debug.Log (currPowerup.powerupData.powerupName.ToString());
		upgradeName.text = currPowerup.powerupData.powerupName.ToString();				
		upgradePrice.text = currPowerup.powerupData.powerupPrice.ToString();		
		upgradeInfo.text = currPowerup.powerupData.powerupInfo.ToString();		
		//upgradeSprite = powerupHolder.powerup.GetComponent <Image>().sprite;
	}


	public void ShipUpgradesPressed() {
		screenStack.Push (shipUpgrades);
		welcomeScreen.SetActive (false);		// Screen transition

		activeScreen = shipUpgrades;
		activeScreen.SetActive (true);
	}

	public void BackButtonPressed() {
		// Depends on which screen active
		if (activeScreen != welcomeScreen) {
			activeScreen.SetActive (false);		// Screen transition
			activeScreen = screenStack.Pop ();	// Get last screen
			activeScreen.SetActive (true);		// Display last screen
		}
	}

	public void BuyItem() {
		// Deduct from balance if enough money
		// Create notification of purchase success/failure
	}

	public void AlertPurchaseSuccess() {
		
	}

	public void AlertPurchaseFailed() {
		
	}

}