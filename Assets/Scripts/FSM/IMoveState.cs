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

    //void ActivateLaserMovement(Direction direction, float endTime);
}

public enum Direction
{

	FORWARDS,
	IDLE,
	BACKWARDS,
	PLAYER_TOO_CLOSE,
	PLAYER_UNDETECTED,
	PLAYER_DETECTED,
    SNIPER_BOSS_LASER_MOVEMENT

}
