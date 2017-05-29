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
	public GameObject maxLevelPanel;		// Used to cover up powerup after it's max level
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
	//public Dictionary<string, GameObject> visitedPowerupSlots = new Dictionary<string, GameObject>();
	//public HashSet<PowerupHolder> visitedPowerupsSet = new HashSet<PowerupHolder>();

	// Individually selected powerup
	public PowerupHolder activePowerupHolder;

	public static ShopMenu instance;
	void Awake(){

		DontDestroyOnLoad (this);
		if (instance == null) {
			instance = this;
			SetupShop ();
		} else {
			DestroyImmediate(gameObject);
		}
	}

	// Loads the basic UI of shop (Open / close, back buttons)
	public void SetupShop() {
		shopBaseUI.SetActive (true);		// THIS UI IS ALWAYS PRESENT
	}
		
	public void OpenShop() {

		if (!isOpen) {
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

		GameManager.Singleton.playerShip.gameObject.SetActive (true);
		GameManager.Singleton.uiElements.SetActive (true);
		gameObject.SetActive (false);					// Close the Shop

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
			//currSlot.GetComponent <ShopSlot> ().assignedSlot = currSlot;	// Link the ShopSlot and the GO slot it's assigned to

			// Set event listener that will update Shop Info panel
			Button currButton = currSlot.GetComponent<Button>();
			currButton.onClick.AddListener(() => UpgradePressed(currSlot));

			// Disable upgrade slot if max lvl achieved
			UpgradableScriptableObject currUpgrade = currSlot.GetComponent <ShopSlot> ().upgrade;
			currUpgrade = upgradesList [i];
			if (currUpgrade.currLvl >= currUpgrade.MAX_LEVEL) {
				maxLevelPanel.SetActive (true);			// Block out the upgrade panel on RHS so player KNOWs they can't upgrade anymore
				DisableSlot (currButton);
			}

			// Populate slot info in list view
			currSlot.GetComponent<ShopSlot>().nameText.text = upgradesList[i].powerupName.ToString();		// Set name of upgrade in the list view on left (panel will be set when clicked)

			// Assign its parent
			currSlot.transform.SetParent (upgradesListPanel.transform);
			currSlot.GetComponent<RectTransform>().localScale = new Vector3(1f, 1f, 1f);	// So slot doesn't scale up (THIS WORKS!!!)

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
		if (currActiveUpgrade.currLvl >= currActiveUpgrade.MAX_LEVEL) {
			maxLevelPanel.SetActive (true);			// Block out the upgrade panel on RHS so player KNOWs they can't upgrade anymore
			DisableSlot (currButton);
		}  else {
			maxLevelPanel.SetActive (false);			// Block out the upgrade panel on RHS so player KNOWs they can't upgrade anymore
		}

		// Now populate fields
		UpdateShopPanel ();
	}

	public void UpdateShopPanel() {

		// These fields are updated when UpgradePowerup() is called
		currButton.GetComponent<ShopSlot>().nameText.text = currActiveUpgrade.powerupName;	// Update the name (remember that ShopSlots are components of a Button, called currButton)
		upgradeName.text = currActiveUpgrade.powerupName.ToString ();
		if (currActiveUpgrade.GetPrice () > 0) {		// Since we set to -1 if it's fully upgraded
			upgradePrice.text = currActiveUpgrade.GetPrice ().ToString ();		// This also updates the price of the item
		}
		upgradeInfo.text = currActiveUpgrade.powerupInfo.ToString ();
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
			UpdateShopPanel ();

			playerBalance.GetComponent <Text> ().text = GameManager.Singleton.playerBalance.ToString ();		// Update player balance text

			if (currActiveUpgrade.GetPrice () < 0) {
				maxLevelPanel.SetActive (true);			// Block out the upgrade panel on RHS so player KNOWs they can't upgrade anymore
				// Disable button
				DisableSlot (currButton);
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

	public void DisableSlot(Button button) {
		button.interactable = false;
		button.GetComponent<Image>().color = Color.red;
	}
}
