
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberBossMS : MonoBehaviour, IMoveState
{

    public Direction direction = Direction.PLAYER_UNDETECTED;
    public Direction Direction { get; set; }



    public BomberBoss bomberBoss;

    void Start()
    {
        bomberBoss = GetComponent<BomberBoss>();


    }

    public void UpdateState()
    {

        if (direction == Direction.PLAYER_DETECTED)
        {
            MoveToPlayer(); // Change to be AWAY from player if too close

        }
    }


    public void ActivateMovementState(float endTime, Direction newDirection)
    {
        if (newDirection == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        {
            //ActivateLaserMovement(endTime);
        }
    }

    public void DeactivateMovementState()
    {
        if (direction == Direction.SNIPER_BOSS_LASER_MOVEMENT)
        {
            //DeactivateLaserMovement();
        }
    }




    // Call this if IDLE
    public void TurnToPlayer()
    {
        if (bomberBoss.target != null)
        {

            Vector3 dist = (bomberBoss.target.transform.position - bomberBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            bomberBoss.transform.rotation = Quaternion.RotateTowards(bomberBoss.transform.rotation, desiredRotation, bomberBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

        }
    }


    public void MoveToPlayer()
    {

        if (bomberBoss.target != null)
        {


            Vector3 dist = (bomberBoss.target.transform.position - bomberBoss.transform.position).normalized;   // Find unit vector difference between target and this

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion
            bomberBoss.transform.rotation = Quaternion.RotateTowards(bomberBoss.transform.rotation, desiredRotation, bomberBoss.rotationSpeed * Time.deltaTime);    // Rotate the enemy

            bomberBoss.transform.position = Vector2.MoveTowards(bomberBoss.transform.position, bomberBoss.target.transform.position, Time.deltaTime * bomberBoss.speed);

        }
    }

    public void MoveBackwards()
    {

        if (bomberBoss.target != null)
        {

            Vector3 dist = -(bomberBoss.target.transform.position - bomberBoss.transform.position).normalized;  // Find unit vector difference between target and this
            Vector3 angleDist = -dist;

            float zAngle = (Mathf.Atan2(angleDist.y, angleDist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);       // Store rotation as an Euler, then Quaternion
            bomberBoss.transform.rotation = Quaternion.RotateTowards(bomberBoss.transform.rotation, desiredRotation, bomberBoss.rotationSpeed * Time.deltaTime);   // Rotate the enemy

            bomberBoss.transform.position = Vector2.MoveTowards(bomberBoss.transform.position, bomberBoss.transform.position + dist, Time.deltaTime * bomberBoss.speed);

        }

    }

    public void OnObjectReuse()
    {

    }
}

