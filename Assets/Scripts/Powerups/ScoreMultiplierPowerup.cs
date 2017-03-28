using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreMultiplierPowerup : Powerup {


	public override void ActivatePower() {
		GameManager.Singleton.scoreMultiplier *= 2;		// Scale score multiplier by 2
	}

	public override void DeactivatePower() {
		if (GameManager.Singleton.scoreMultiplier > 1) {
			GameManager.Singleton.scoreMultiplier *= 1 / 2;
		}
	}
}
