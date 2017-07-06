using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberMiniBossRushCollider : MonoBehaviour
{

    public CircleCollider2D collisionCollider;  // Assign in inspector
    public BomberMiniBoss bomberMiniBoss;       // Ref to parent miniBoss

    //void OnTriggerEnter2D(Collider2D other)
    //{
    //    Debug.Log("2DCOLLISION OCCURRED!");
    //    Debug.Break();
    //    // If player is detected, alert BomberMiniBoss class
    //    if (other.transform.CompareTag(Constants.PlayerColliders))
    //    {
    //        //ContactPoint2D contactPoint = coll.contacts[0];
    //        bomberMiniBoss.RushIntoPlayerStart(other.transform.position);
    //    }
    //}
}
