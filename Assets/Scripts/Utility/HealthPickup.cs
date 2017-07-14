using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthPickup : PoolObject
{

    public int healthAmnt = 100;

    void OnTriggerEnter(Collider other)
    {
        // Triggers on collision with rigidbody's colliderg
        if (other.gameObject.CompareTag(Constants.PlayerTag) && GameManager.Singleton.playerHealth > 0)
        {

            if (GameManager.Singleton.playerHealth < GameManager.Singleton.playerMaxHealth)
            {
                // Can't add more health than max health
                int healthToAdd = Mathf.Min(healthAmnt, GameManager.Singleton.playerMaxHealth - GameManager.Singleton.playerHealth);
                Debug.Log("HEALTH TO ADD: " + healthToAdd);

                GameManager.Singleton.playerHealth += healthToAdd;   // Set new health in GameManager
                UIManager.Singleton.UpdateHealth(); // Update health in UI
            }
            DestroyForReuse();
        }
    }
}
