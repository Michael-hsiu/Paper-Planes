using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Helps detect and control movement if player is too close.
public class SniperBossSafeDistanceCollider : MonoBehaviour
{

    public SniperBossMS moveState;
    public SniperBoss sniperBoss;

    void Awake()
    {
        sniperBoss = GetComponent<SniperBoss>();
        moveState = GetComponentInParent<SniperBossMS>();
    }

    void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag(Constants.PlayerTag))
        {
            if (!moveState.moveStateOverridden)
            {
                moveState.safeDistanceColliderActive = true;
                moveState.Direction = Direction.PLAYER_TOO_CLOSE;
            }

        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag(Constants.PlayerTag))
        {
            if (!moveState.moveStateOverridden)
            {
                moveState.safeDistanceColliderActive = false;
                moveState.Direction = Direction.PLAYER_DETECTED;
            }
        }
    }

}
