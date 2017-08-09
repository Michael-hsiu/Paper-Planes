using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurstChargeColliders : MonoBehaviour
{

    public GameObject explosion;
    public int dmg = 100;       // Damage param for burstRush

    void OnTriggerStay(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.EnemyTag))
        {
            // Damage the enemy profusely
            if (other.gameObject != null)
            {
                if (other.gameObject.GetComponent<IDamageable<int>>() != null)
                {
                    other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);      // Inflict damage
                    PoolManager.Instance.ReuseObject(explosion, other.transform.position, Quaternion.identity);
                }
            }
        }
    }
}
