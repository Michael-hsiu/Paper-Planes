using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class InputComponent : MonoBehaviour {

	//public PlayerShip player = GameObject.FindGameObjectWithTag(Constants.PlayerTag);

	public abstract void UpdateInput (PlayerShip player);

}
