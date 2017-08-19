using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

// API inspired by: https://github.com/antfarmar/Unity-3D-Asteroids/blob/master/Assets/Asteroids/Scripts/Powerups/Powerup.cs
public class Powerup : PoolObject
{

    public PowerupScriptableObject powerupData;         // Ref to data container; data about upgrades, etc.

    public PlayerShip player;
    //public List<ShotSpawn> prevSS = new List<ShotSpawn> ();
    public Stack<ShotSpawn> prevSS = new Stack<ShotSpawn>();
    public float powerDuration = 3.0f;
    public float existsInWorldDuration = 10.0f;
    public float endTime;
    public float timeObtained;
    public GameObject pickupParticlePrefab;     // Particle system that plays on particle pickup
    protected bool isVisible;

    IEnumerator destroyAfterDurationRoutine;
    public string powerupID;

    public override void Start()
    {
        player = GameManager.Singleton.playerShip.GetComponent<PlayerShip>();
        ShowInScene();
        base.Start();
    }

    void Update()
    {
        if (player == null)
        {
            player = GameManager.Singleton.playerShip.GetComponent<PlayerShip>();
        }
    }

    public override void OnObjectReuse()
    {
        Start();
        DestroyAfterDuration();     // Destroy if not picked up for a set duration
    }

    public virtual void ActivatePowerup()
    {
        // Stop destroy routine if picked up
        if (destroyAfterDurationRoutine != null)
        {
            StopCoroutine(destroyAfterDurationRoutine);
            destroyAfterDurationRoutine = null;
        }
        GameManager.Singleton.numPowerupsCollected += 1;
    }

    public void DestroyAfterDuration()
    {
        if (destroyAfterDurationRoutine != null)
        {
            StopCoroutine(destroyAfterDurationRoutine);
            destroyAfterDurationRoutine = null;
        }
        destroyAfterDurationRoutine = DestroyAfterDurationRoutine();
        StartCoroutine(destroyAfterDurationRoutine);
    }
    IEnumerator DestroyAfterDurationRoutine()
    {
        // Wait for set duration
        yield return new WaitForSeconds(existsInWorldDuration);

        // Destroy if not picked up
        DestroyForReuse();
    }

    public virtual void DeactivatePowerup()
    {
        //CancelInvoke ("DeactivatePower");			// Just in case we removed a powerup through override
        Debug.Log(String.Format("{0} POWERUP DEACTIVATED AT ENDTIME: {1}", powerupID, Time.time));
        DestroyForReuse();
    }

    public virtual void OnTriggerEnter(Collider other)
    {
        // Play effect, activate powerup, destroy
        if (other.gameObject.CompareTag(Constants.PlayerTag))
        {
            if (pickupParticlePrefab != null)
            {
                PoolManager.Instance.ReuseObject(pickupParticlePrefab, transform.position, Quaternion.identity);
            }
            ActivatePowerup();
            HideInScene();      // Can't destroy it yet b/c it needs to invoke a method

            //DestroyForReuse();
            //HideInScene();
        }
    }

    //void Spawn()
    //{
    //    transform.position = Vector3.zero;  // Temp fixed location
    //    SetVisibility(true);
    //}

    //void Despawn()
    //{
    //    SetVisibility(false);
    //}

    void ShowInScene()
    {
        //Spawn();
        SetVisibility(true);
    }

    public void HideInScene()
    {
        //Despawn();
        SetVisibility(false);
    }

    void SetVisibility(bool isVisible)
    {
        this.isVisible = isVisible;
        gameObject.GetComponent<Renderer>().enabled = this.isVisible;
        gameObject.GetComponent<Collider>().enabled = this.isVisible;
    }

    /*public void CancelInvoke() {
		CancelInvoke ("DeactivatePower");				// Enables powerup duration extension
	}*/
}

