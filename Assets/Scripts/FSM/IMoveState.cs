using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IMoveState : IEntityState
{
	Direction Direction
	{
		get;
		set;
	}
}

public enum Direction
{

	FORWARDS,
	IDLE,
	BACKWARDS,
	PLAYER_TOO_CLOSE,
	PLAYER_UNDETECTED,
	PLAYER_DETECTED

}
