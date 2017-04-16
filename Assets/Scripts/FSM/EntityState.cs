using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class EntityState : MonoBehaviour {

	public abstract void EnterState ();
	public abstract void ExitState();
	public abstract void UpdateState();

}
