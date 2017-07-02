using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IFireState : IEntityState
{
    FiringMode Mode
    {
        get;
        set;
    }

}

public enum AttackStatus
{
    NOT_ATTACKING,

    // Attacks for SNIPER_BOSS
    SNIPER_BOSS_LASER_ATTACK,
    SNIPER_BOSS_BULLET_HELL_ATTACK,
    SNIPER_BOSS_TELEPORT_ATTACK,
    SNIPER_BOSS_SUMMON_MOBS,

    // Attacks for BOMBER_BOSS
    BOMBER_BOSS_SLINGSHOT_ATTACK
}
