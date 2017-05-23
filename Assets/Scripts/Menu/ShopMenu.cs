using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

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
	public GameObject playerBalance;		// Container for player balance and icons

	// Shop Panel
	public GameObject shopInfoPanel;		// Populate price of upgrade, player balance
	public GameObject buyButton;
	public UpgradableScriptableObject currActiveUpgrade;
	public Button currButton;
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

	void Awake() {
		DontDestroyOnLoad (this);		
	}
		
	public void OpenShop() {

		if (!isOpen) {
			shopBaseUI.SetActive (true);		// THIS UI IS ALWAYS PRESENT
			welcomeScreen.SetActive (true);		// All other screens are disabled until button press

			screenStack.Push (welcomeScreen);	// Store in-order progression of screens accessed
			activeScreen = welcomeScreen;		// Track the currently active screen
			isOpen = true;

			playerBalance.GetComponent<Text>().text = GameManager.Singleton.playerBalance.ToString ();		// Update player balance UI
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
		ClearSlots ();		// Clear any specific upgrade slots
		SceneManager.LoadSceneAsync ("GameScene");		// Reload the game scene
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
		int numSlots = upgradesList.Count;

		for (int i = 0; i < numSlots; i++) {
			// Create a new slot
			GameObject currSlot = Instantiate (shopSlot);	
			activeSlots.Add (currSlot);						// So we know which slots to destroy upon leaving screen
			currSlot.GetComponent <ShopSlot> ().id = i;		// Set the slot's position
			// Populate slot info in list view
			currSlot.GetComponentInChildren <Text>().text = upgradesList[i].powerupName.ToString();		// Set name of upgrade in the list view on left (panel will be set when clicked)

			// Assign its parent
			currSlot.transform.SetParent (upgradesListPanel.transform);

			// Set event listener that will update Shop Info panel
			Button currButton = currSlot.GetComponent<Button>();
			currButton.onClick.AddListener(() => UpgradePressed(currSlot));

		}
	}

	// This is called when player taps on a single upgrade, bringing up its info in the Shop Info panel.
	// Populate fields programatically.
	public void UpgradePressed(GameObject buttonPressed) {
		// Populate name, price, info, sprite. Use 'activePowerupHolder', and the list of UpgradableScrObj. 
		// Since each Upgrade will be ID'ed by its index in the list, can identify appropriate upgrade using equivalent indices.
		int id = buttonPressed.GetComponent <ShopSlot> ().id;
		UpgradableScriptableObject activeUpgrade = activePowerupHolder.powerup.GetComponent<Powerup>().powerupData.upgradeList[id];
		currActiveUpgrade = activeUpgrade;	// Track slot we just pressed
		currButton = buttonPressed.GetComponent<Button> ();

		// Now populate fields
		upgradeName.text = activeUpgrade.powerupName.ToString ();
		upgradePrice.text = activeUpgrade.powerupPrice.ToString ();
		upgradeInfo.text = activeUpgrade.powerupInfo.ToString ();

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
		ClearSlots ();
	}

	public void ClearSlots() {
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
		int balance = GameManager.Singleton.playerBalance;
		int upgradePrice = currActiveUpgrade.GetPrice ();

		Debug.Log ("OLD BALANCE" + balance);
		if (balance >= upgradePrice && upgradePrice > 0) {
			// Deduce $ from player balance
			GameManager.Singleton.playerBalance -= upgradePrice;	// Price specific to that upgrade
			currActiveUpgrade.UpgradePowerup ();					// Logic specific to that upgrade

			if (currActiveUpgrade.GetPrice () < 0) {
				// Disable button
				currButton.interactable = false;
				currButton.GetComponent<Image>().color = Color.red;
			}

			Debug.Log ("NEW BALANCE" + GameManager.Singleton.playerBalance);
			AlertPurchaseSuccess ();
		} else {
			AlertPurchaseFailed ();
		}
	}

	public void AlertPurchaseSuccess() {
		Debug.Log ("PURCHASE SUCCESSFUL!");
	}

	public void AlertPurchaseFailed() {
		Debug.Log ("PURCHASE FAILED");
	}

}
