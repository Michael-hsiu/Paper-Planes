using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IMoveState : IEntityState {
	Direction Direction
	{
		get;
		set;
	}
}

public enum Direction {

    Forwards,
    Idle,
    Backwards,
    TooClose,
    PlayerUndetected,
    PlayerDetected

}
