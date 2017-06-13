using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PawnMS : MonoBehaviour, IMoveState
{

    public Direction direction;
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
    public PawnShip pawnShip;

    void Start()
    {
        pawnShip = GetComponent<PawnShip>();
    }

    // Setup activities after being activated from Object Pool
    public void OnObjectReuse()
    {

    }

    public void EnterState()
    {

    }

    public void ExitState()
    {

    }

    public void UpdateState()
    {
        MoveToPlayer();
    }


    public void MoveToPlayer()
    {

        if (pawnShip.target != null)
        {
            Vector3 dist = pawnShip.target.transform.position - pawnShip.transform.position;    // Find vector difference between target and this
            dist.Normalize();       // Get unit vector

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)

            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion

            pawnShip.transform.rotation = Quaternion.RotateTowards(pawnShip.transform.rotation, desiredRotation, pawnShip.rotationSpeed * Time.deltaTime);  // Rotate the enemy

            /** MOVEMENT UPDATE */
            if (!pawnShip.isSpeedBuffed)
            {
                pawnShip.transform.position = Vector2.MoveTowards(pawnShip.transform.position, pawnShip.target.transform.position, Time.deltaTime * pawnShip.speed);
            }
            else
            {
                pawnShip.transform.position = Vector2.MoveTowards(pawnShip.transform.position, pawnShip.target.transform.position, Time.deltaTime * pawnShip.speed * pawnShip.buffedSpeedFactor);
            }
        }
    }
}

