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

    // GENERAL ENEMY MOVEMENTS
    FORWARDS,
    IDLE,
    BACKWARDS,
    PLAYER_TOO_CLOSE,
    PLAYER_UNDETECTED,
    PLAYER_DETECTED,

    // SNIPER BOSS
    SNIPER_BOSS_LASER_MOVEMENT,
    SNIPER_BOSS_BULLET_HELL_MOVEMENT,
    SNIPER_BOSS_TELEPORT_MOVEMENT,

    // BOMBER BOSS
    BOMBER_BOSS_RUSH_CHARGE_MOVEMENT,
    BOMBER_BOSS_RUSH_FORWARDS_MOVEMENT,
    BOMBER_BOSS_SLINGSHOT_MOVEMENT,
    BOMBER_BOSS_CANNON_MOVEMENT,
    BOMBER_BOSS_BULLET_HELL_MOVEMENT,
    BOMBER_BOSS_DEATH_MOVEMENT


}
