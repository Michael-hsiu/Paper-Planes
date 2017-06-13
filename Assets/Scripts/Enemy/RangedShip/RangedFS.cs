using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum FiringMode
{
    Firing,
    NotFiring
}

public class RangedFS : MonoBehaviour, IFireState
{

    public FiringMode mode = FiringMode.NotFiring;
    public FiringMode Mode
    {
        get
        {
            return mode;
        }
        set
        {
            mode = value;
        }
    }
    public RangedShip rangedShip;

    void Start()
    {
        rangedShip = GetComponent<RangedShip>();
    }

    public void EnterState()
    {

    }

    public void ExitState()
    {

    }

    public void UpdateState()
    {

        bool playerOnDashCooldown = GameManager.Singleton.onDashCooldown;

        // If player is dashing, use math to check if player is too far from us.
        if (playerOnDashCooldown)
        {
            if (Utils.SquaredEuclideanDistance(rangedShip.gameObject, rangedShip.target.gameObject) > rangedShip.sqFireDist)
            {
                Debug.Log("PLAYER TOO FAR AWAY TO FIRE!");
                mode = FiringMode.NotFiring;
            }
            else
            {
                mode = FiringMode.Firing;
            }
        }


        // Apply method based on player direction
        if (mode == FiringMode.Firing)
        {
            FireAtPlayer();
        }
    }

    public void FireAtPlayer()
    {

        if (!rangedShip.isFiringBuffed)
        {
            rangedShip.nextFire = Time.time + rangedShip.fireRate;  // Cooldown time for projectile firing
        }
        else
        {
            rangedShip.nextFire = Time.time + rangedShip.fireRate / rangedShip.buffedFiringRateFactor;
        }

        // Check for all shotspawns in children
        foreach (Transform t in rangedShip.transform)
        {

            ShotSpawn shotSpawn = t.GetComponent<ShotSpawn>();  // Get ShotSpawn in children

            if (shotSpawn != null)
            {
                shotSpawn.CreateShot(rangedShip.isFiringBuffed);    // Fire the shot!
            }
        }
    }

    public void OnObjectReuse()
    {

    }
}
