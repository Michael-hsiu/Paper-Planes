using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface EntityState {

	void EnterState (Ship s);
	void ExitState(Ship s);
	void UpdateState(Ship s);

}
