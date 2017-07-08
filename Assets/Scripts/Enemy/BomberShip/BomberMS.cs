using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberMS : MonoBehaviour, IMoveState
{

    public Direction direction;
    public float destroyDelay = 6.0f;
    IEnumerator destroyRoutine;
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
    public BomberShip bomberShip;

    void Start()
    {
        bomberShip = GetComponent<BomberShip>();

    }

    // Setup activities after being activated from Object Pool
    public void OnObjectReuse()
    {

    }

    public void UpdateState()
    {
        MoveToPlayer();
    }

    IEnumerator DestroyAfterDuration()
    {
        yield return new WaitForSeconds(destroyDelay);
        bomberShip.DestroyForReuse();
    }

    public void MoveToPlayer()
    {

        float movementSpeedCopy = bomberShip.speed;
        // Trigger different movement when exploding
        if (bomberShip.isExploding && bomberShip.target != null)
        {
            transform.Rotate(Vector3.forward * bomberShip.rotationFactor * Time.deltaTime); // Rotate the enemy MUCH FASTER; needs adjustment
            bomberShip.rotationFactor += 5.0f;      // Could maybe use lerp for incrementing exponentially

            // If co-routine not running
            if (!bomberShip.explosionActive)
            {
                //Debug.Log ("STARTED COROUTINE");
                if (destroyRoutine != null)
                {
                    StopCoroutine(destroyRoutine);
                    destroyRoutine = null;
                }
                bomberShip.StartExploding();        // Alert bomber ship to start exploding
            }
            if (bomberShip.isSlingShotBomber && !bomberShip.inSlingChargeMode)
            {
                bomberShip.speed = bomberShip.explodingMoveSpeed;   // Generalize?
            }
        }
        // Destroy after it's been out of map for awhile
        if (!bomberShip.inSlingChargeMode && destroyRoutine == null)
        {
            destroyRoutine = DestroyAfterDuration();
            StartCoroutine(destroyRoutine);
        }
        if (GameManager.Singleton.playerShip.gameObject.activeInHierarchy)
        {

            // Enemy ship turns to face player
            Vector3 dist = bomberShip.target.transform.position - transform.position;   // Find vector difference between target and this
            dist.Normalize();       // Get unit vector

            float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) - 90;  // Angle of rotation around z-axis (pointing upwards)
            Quaternion desiredRotation = Quaternion.Euler(0, 0, zAngle);        // Store rotation as an Euler, then Quaternion

            transform.Rotate(Vector3.forward * bomberShip.rotationFactor * Time.deltaTime); // Enemy normally rotates in circle
            transform.position = Vector2.MoveTowards(transform.position, bomberShip.target.transform.position, Time.deltaTime * bomberShip.speed);
            //Debug.Break();

        }
        bomberShip.speed = movementSpeedCopy;
    }

    public void MoveBackwards(Ship s)
    {

    }

}
