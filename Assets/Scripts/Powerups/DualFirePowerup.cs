using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DualFirePowerup : Powerup {

	public override void ActivatePower() {
		player.SetWeapons (PlayerShip.Weapons.DUAL);
		base.ActivatePower ();
	}

	public override void DeactivatePower() {
		Debug.Log ("POWERUP DEACTIVATED: " + id);
	}
}
