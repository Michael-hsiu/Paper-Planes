using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthPickup : Powerup
{

    public int healthAmnt = 100;
    //public GameObject pickupParticlePrefab;     // Particle system that plays on particle pickup
    IEnumerator destroyAfterAudioRoutine;


    public override void OnTriggerEnter(Collider other)
    {
        // Triggers on collision with rigidbody's colliderg
        if (other.gameObject.CompareTag(Constants.PlayerTag) && GameManager.Singleton.playerHealth > 0)
        {

            //if (pickupParticlePrefab != null)
            //{
            //    PoolManager.Instance.ReuseObject(pickupParticlePrefab, transform.position, Quaternion.identity);
            //}
            if (GameManager.Singleton.playerHealth < GameManager.Singleton.playerMaxHealth)
            {
                ActivatePowerup();
                DestroyForReuse();
            }
            else
            {
                GameManager.Singleton.numPowerupsCollected += 1;
                powerupAudioSource.PlayOneShot(pickupAudioClip, 0.5f);
                if (destroyAfterAudioRoutine != null)
                {
                    StopCoroutine(destroyAfterAudioRoutine);
                    destroyAfterAudioRoutine = null;
                }
                destroyAfterAudioRoutine = DestroyAfterAudioPlaysRoutine();
                StartCoroutine(destroyAfterAudioRoutine);
            }
        }
    }

    public override void ActivatePowerup()
    {

        // Can't add more health than max health
        int healthToAdd = Mathf.Min(healthAmnt, GameManager.Singleton.playerMaxHealth - GameManager.Singleton.playerHealth);
        //Debug.Log("HEALTH TO ADD: " + healthToAdd);

        GameManager.Singleton.playerHealth += healthToAdd;   // Set new health in GameManager
        UIManager.Singleton.UpdateHealth(); // Update health in UI

        base.ActivatePowerup();
    }

    // Play sound effect, then explode/recycle
    IEnumerator DestroyAfterAudioPlaysRoutine()
    {
        transform.position = new Vector3(200, 0, 0);    // Appears to disappear
        yield return new WaitForSeconds(pickupAudioClip.length);
        DestroyForReuse();
    }
}
