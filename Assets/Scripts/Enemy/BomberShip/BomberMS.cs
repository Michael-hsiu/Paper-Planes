using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberMS : MonoBehaviour, IMoveState
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
    public BomberShip bs;

    void Start()
    {
        bs = GetComponent<BomberShip>();

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

        float movementSpeedCopy = bs.speed;
        if (bs.isExploding && bs.target != null)
        {

            transform.Rotate(Vector3.forward * bs.rotationFactor * Time.deltaTime); // Rotate the enemy MUCH FASTER; needs adjustment
            bs.rotationFactor += 5.0f;      // Could maybe use lerp for incrementing exponentially

            // If co-routine not running
            if (!bs.explosionActive)
            {
                //Debug.Log ("STARTED COROUTINE");
                bs.StartExploding();        // Alert bomber ship to start exploding
            }
            if (bs.isSlingShotBomber)
            {
                bs.speed = bs.explodingMoveSpeed;   // Generalize?
                //Debug.Break();
            }
            //return;     // Break out of method

        }
        if (GameManager.Singleton.playerShip.gameObject.activeInHierarchy)
        {

            // Enemy ship turns to face player
            Vector3 dist = bs.target.transform.position - transform.position;   // Find vector difference between target and this
            dist.Normalize();       // Get unit vector

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion

            transform.Rotate(Vector3.forward * bs.rotationFactor * Time.deltaTime); // Enemy normally rotates in circle
            transform.position = Vector2.MoveTowards(transform.position, bs.target.transform.position, Time.deltaTime * bs.speed);
            //Debug.Break();

        }
        bs.speed = movementSpeedCopy;
    }

    public void MoveBackwards(Ship s)
    {

    }

}
