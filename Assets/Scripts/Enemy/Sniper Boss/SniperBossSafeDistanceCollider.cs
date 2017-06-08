using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Helps detect and control movement if player is too close.
public class SniperBossSafeDistanceCollider : MonoBehaviour
{

	public IMoveState moveState;

	void Start()
	{
		moveState = GetComponentInParent<IMoveState>();
	}

	void OnTriggerStay(Collider other)
	{
		if (other.gameObject.CompareTag(Constants.PlayerTag))
		{
			((SniperBossMS)moveState).safeDistanceColliderActive = true;
			moveState.Direction = Direction.PLAYER_TOO_CLOSE;
		}
	}

	void OnTriggerExit(Collider other)
	{
		if (other.gameObject.CompareTag(Constants.PlayerTag))
		{
			((SniperBossMS)moveState).safeDistanceColliderActive = false;
			moveState.Direction = Direction.PLAYER_DETECTED;
		}
	}
	
}
