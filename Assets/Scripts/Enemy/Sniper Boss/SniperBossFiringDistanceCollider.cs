using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SniperBossFiringDistanceCollider : MonoBehaviour
{

	public SniperBossMS moveState;
	public CapsuleCollider capsuleCollider;

	void Awake()
	{
        moveState = GetComponentInParent<SniperBossMS>();
		capsuleCollider = GetComponent<CapsuleCollider>();
	}

	void Start()
	{
		// Establish our move state when this boss spawns
		//Debug.Log(Mathf.Pow(capsuleCollider.radius, 2));
		if (Vector3.SqrMagnitude(
            GameManager.Singleton.playerShip.transform.position - transform.parent.transform.position) > 
            Mathf.Pow(capsuleCollider.radius, 2))
		{
			// Player out of range of collider, move closer!
			moveState.Direction = Direction.PLAYER_DETECTED;
		}
		else
		{
			// Player in range, stay put.
			moveState.Direction = Direction.IDLE;
		}

	}

	void OnTriggerStay(Collider other)
	{
		// We don't want to pursue the player if we're within a certain range.
        // Only if not overridden by FiringState.
		if (other.gameObject.CompareTag(Constants.PlayerTag))
		{
            if (!moveState.safeDistanceColliderActive && !moveState.moveStateOverridden)
			{
				moveState.Direction = Direction.IDLE;
			}
		}
	}

	void OnTriggerExit(Collider other)
	{
		// If the player isn't touching this collider, they're too far away. Move closer!
		if (other.gameObject.CompareTag(Constants.PlayerTag))
		{
            if (!moveState.safeDistanceColliderActive && !moveState.moveStateOverridden)
			{
				moveState.Direction = Direction.PLAYER_DETECTED;
			}
		}
	}

}
