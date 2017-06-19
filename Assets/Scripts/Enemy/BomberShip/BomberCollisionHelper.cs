using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberCollisionHelper : MonoBehaviour
{


    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.PlayerTag))
        {

            GetComponentInParent<Rigidbody>().velocity = Vector3.zero;  // We stop moving, precautionary measure

            if (GetComponentInParent<BomberShip>() != null)
            {
                if (GetComponentInParent<BomberShip>().canExplode)
                {
                    GetComponentInParent<BomberShip>().isExploding = true;      // Tell parent to start explosion protocol

                }

            }
        }
    }
}
