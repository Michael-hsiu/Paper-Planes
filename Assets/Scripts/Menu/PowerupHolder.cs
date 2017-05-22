using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerupHolder : MonoBehaviour {

	// This class is used to determine which Powerup to load in the next screen if this button is pressed.
	public GameObject powerup;	// This functions as the entry point to determining what info to load.
	public ShopMenu SHOP_MENU;

	public void IndividualPowerupPressed() {
		
		SHOP_MENU.powerupHolder = this;				// We will hold the info for shop_menu to load
		SHOP_MENU.IndividualPowerupPressed ();		// Enable / disable screens, load correct info

	}
}
