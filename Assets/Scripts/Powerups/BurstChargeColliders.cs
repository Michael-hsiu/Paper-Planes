using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurstChargeColliders : MonoBehaviour
{

    public GameObject explosion;
    public int dmg = 100;       // Damage param for burstRush

    [Header("AUDIO")]
    public AudioClip rushAudioClip;
    public AudioClip scorchAudioClip;


    void OnTriggerStay(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.EnemyTag))
        {
            // Damage the enemy profusely
            if (other.gameObject != null)
            {
                if (other.gameObject.GetComponent<IDamageable<int>>() != null)
                {
                    GameManager.Singleton.cameraController.audioSource.PlayOneShot(rushAudioClip, 0.5f);
                    GameManager.Singleton.cameraController.audioSource.PlayOneShot(scorchAudioClip, 0.4f);

                    other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);      // Inflict damage
                    PoolManager.Instance.ReuseObject(explosion, other.transform.position, Quaternion.identity);
                }
            }
        }
    }
}
