using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface InputComponent {


	//public PlayerShip player = GameObject.FindGameObjectWithTag(Constants.PlayerTag);
	void DisableControls ();
	void UpdateInput (PlayerShip player);

}
