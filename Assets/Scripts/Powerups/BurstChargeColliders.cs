using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurstChargeColliders : MonoBehaviour
{

    public GameObject explosion;
    public int dmg = 100;       // Damage param for burstRush

    public float delayBtwnHits = 0.01f;
    public float nextHitTime;

    public float delayBtwnParticles = 0.01f;
    public float nextParticleTime;
    //public float delayBtwnHits = 0.01f;
    //public float nextHitTime;

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
                    //other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);      // Inflict damage

                    // Reduce # of particles spawned
                    //if (Time.time > nextParticleSpawnTime)
                    //{
                    //    PoolManager.Instance.ReuseObject(explosion, other.transform.position, Quaternion.identity);
                    //    nextParticleSpawnTime = Time.time + timeBtwnParticleSpawns;

                    //}

                    // Only hit if time is satisfied
                    if (Time.time > nextHitTime)
                    {
                        other.gameObject.GetComponent<IDamageable<int>>().Damage(dmg);      // Inflict damage
                        nextHitTime = Time.time + delayBtwnHits;       // Set time til next atk
                        //Debug.Log("CHARGE_HIT!");
                    }
                    if (Time.time > nextParticleTime)
                    {
                        PoolManager.Instance.ReuseObject(explosion, other.transform.position, Quaternion.identity);

                        if (GameManager.Singleton.sfxEnabled)
                        {
                            GameManager.Singleton.cameraController.audioSource.PlayOneShot(rushAudioClip, 0.5f);
                            GameManager.Singleton.cameraController.audioSource.PlayOneShot(scorchAudioClip, 0.4f);
                        }
                        nextParticleTime = Time.time + delayBtwnParticles;
                        //Debug.Log("CHARGE_RUSH_HIT!");
                    }
                }
            }
        }
    }
}
