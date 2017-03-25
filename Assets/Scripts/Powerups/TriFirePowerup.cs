using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriFirePowerup : Powerup {

	public override void ActivatePower() {
		player.SetWeapons (PlayerShip.Weapons.TRI);
		base.ActivatePower ();
	}

	public override void DeactivatePower() {
		player.activeSS = prevSS;
		base.DeactivatePower ();
	}
}
