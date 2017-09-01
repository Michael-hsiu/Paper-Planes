using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurstRushCollider : MonoBehaviour
{

    public GameObject explosion;
    public int dmg = 20;

    void OnTriggerStay(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.EnemyTag))
        {
            if (other.gameObject != null)
            {

                if (other.gameObject.GetComponent<IDamageable<int>>() != null)
                {

                    //Ship shipComp = other.gameObject.GetComponent<Ship>();
                    //if (shipComp != null)
                    //{
                    //    // Do reduced damage if it's a boss
                    //    if (shipComp.enemyType == EnemyType.Boss)
                    //    {
                    //        other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg / 4);      // Inflict damage
                    //        Debug.Log("BOSS BURST RUSH DMG DONE!");
                    //    }
                    //    // Do normal damage if it's a ship
                    //    else
                    //    {
                    //        other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);      // Inflict damage
                    //    }
                    //}
                    //// Do normal damage if it's a turret
                    //else
                    //{
                    //    other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);      // Inflict damage

                    //}
                    other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);      // Inflict damage
                    // Spawn an explosion in either case
                    PoolManager.Instance.ReuseObject(explosion, other.transform.position, Quaternion.identity);
                }
            }
        }
    }

}
