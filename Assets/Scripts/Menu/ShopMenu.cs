using System.Collections;
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
	public GameObject upgradesListPanel;	// The parent panel for each Upgrade
	public GameObject shopSlot;				// An empty slot fab populated with UpgrScrObj data

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
	public List<GameObject> activeSlots;		// Naive impl where we destroy slots instead of caching them upon visit
	//public HashSet<PowerupHolder> visitedPowerupsSet = new HashSet<PowerupHolder>();

	// Individually selected powerup
	public PowerupHolder activePowerupHolder;

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

		// Add Shop Slots to our canvas grid for each Upgrade possible for the Powerup.
		// Do we ever clear the slots?
			
		//activeSlots.Add (activePowerupHolder);		// So we know whether or not to re-instantiate the shop slots
		List<UpgradableScriptableObject> upgradesList = activePowerupHolder.powerup.GetComponent <Powerup>().powerupData.upgradeList;
		//int numSlots = upgradesList.Count;

		foreach (UpgradableScriptableObject upgrade in upgradesList) {

			// Create a new slot
			GameObject currSlot = Instantiate (shopSlot);	
			activeSlots.Add (currSlot);		// So we know which slots to destroy upon leaving screen

			// Populate slot info in list view
			currSlot.GetComponentInChildren <Text>().text = upgrade.powerupName.ToString();		// Set name of upgrade in the list view on left (panel will be set when clicked)

			// Assign its parent
			currSlot.transform.SetParent (upgradesListPanel.transform);
		}
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
		// Clear slots when leaving specific powerup upgrades screen
		if (activeSlots.Count > 0) {
			foreach (GameObject go in activeSlots) {
				Destroy (go);
			}
			Debug.Log (activeSlots.Count + " SLOTS CLEARED!");
			activeSlots.Clear ();
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
