using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SniperBossMS : MonoBehaviour, IMoveState
{

	// Here, playerUndetected == player is far enough away. Sniper Boss always knows where player is.
	// playerDetected == player is too close. We either back up or use our small explosives.

	public Direction direction = Direction.PLAYER_UNDETECTED;

	public Direction Direction
	{
		get
		{
			return direction;
		}
		set
		{
			direction = value;
		}
	}

	public SniperBoss sniperBoss;

	void Start()
	{

		sniperBoss = GetComponent<SniperBoss>();

	}

	public void UpdateState()
	{

		if (direction == Direction.PLAYER_DETECTED)
		{
			MoveToPlayer();	// Change to be AWAY from player if too close

		}
		else if (direction == Direction.PLAYER_TOO_CLOSE)
		{
			MoveBackwards();
		}
		else if (direction == Direction.IDLE)
		{
			// This means that we're close enough to the player to attack; no need to move.
		}

	}



	// Call this during if PLAYER_DETECTED
	public void MoveToPlayer()
	{

		if (sniperBoss.target != null)
		{

			Vector3 dist = (sniperBoss.target.transform.position - sniperBoss.transform.position).normalized;	// Find unit vector difference between target and this

			float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;	// Angle of rotation around z-axis (pointing upwards)
			Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);		// Store rotation as an Euler, then Quaternion
			sniperBoss.transform.rotation = Quaternion.RotateTowards(sniperBoss.transform.rotation, desiredRotation, sniperBoss.rotationSpeed * Time.deltaTime);	// Rotate the enemy
			
			/** MOVEMENT UPDATE */
			if (!sniperBoss.isSpeedBuffed)
			{
				sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed);
				//sniperBoss.transform.position = Vector2.MoveTowards (sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed);
			}
			else
			{
				sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed * sniperBoss.buffedSpeedFactor);
			}
		}
	}

	// Call this if TOO_CLOSE
	public void MoveBackwards()
	{

		if (sniperBoss.target != null)
		{

			Vector3 dist = -(sniperBoss.target.transform.position - sniperBoss.transform.position).normalized;  // Find unit vector difference between target and this
			Vector3 angleDist = -dist;

			float zAngle = (Mathf.Atan2(angleDist.y, angleDist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
			Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);       // Store rotation as an Euler, then Quaternion
			sniperBoss.transform.rotation = Quaternion.RotateTowards(sniperBoss.transform.rotation, desiredRotation, sniperBoss.rotationSpeed * Time.deltaTime);   // Rotate the enemy
            
			/** MOVEMENT UPDATE */
			if (!sniperBoss.isSpeedBuffed)
			{
				sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.transform.position + dist, Time.deltaTime * sniperBoss.speed);
				//sniperBoss.transform.position = Vector2.MoveTowards (sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed);
			}
			else
			{
				sniperBoss.transform.position = Vector2.MoveTowards(sniperBoss.transform.position, sniperBoss.target.transform.position, Time.deltaTime * sniperBoss.speed * sniperBoss.buffedSpeedFactor);
			}
		}

	}

}

