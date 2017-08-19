﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerupSpawner : MonoBehaviour
{
    [Header("SPAWNING_LOGIC")]
    public int initialStartIndex = 0;   // Powerups up to and including this index can be spawned in beginning, rest must be unlocked by gaining points
    public int currLevelIndex;
    public bool levelWasIncreasedOnce = false;

    public float xBound;
    public float yBound;

    public float xBoundLeft;
    public float xBoundRight;
    public float yBoundLeft;
    public float yBoundRight;
    public GameObject mapCentre;

    public float spawnDelayLowerBound = 5.0f;
    public float spawnDelayUpperBound = 5.0f;

    public bool spawnEnabled = false;
    public int numPowerupsSpawned = 0;

    public IEnumerator powerupSpawnRoutine;
    public IEnumerator cr2;

    public List<Collider> mapColliders = new List<Collider>();     // Reference to GameManager list
    public List<GameObject> powerupsList = new List<GameObject>();
    public List<GameObject> enemyShips = new List<GameObject>();


    private static PowerupSpawner singleton;
    public static PowerupSpawner Singleton
    {
        get
        {
            if (singleton == null)
            {
                singleton = new PowerupSpawner();
            }
            return singleton;
        }
    }

    void Awake()
    {
        if (singleton == null)
        {
            singleton = this;

        }
        else
        {
            DestroyImmediate(this);
        }
        // Set variables
        currLevelIndex = initialStartIndex;     // Start off only allowing certain powerups to be used
        Vector3 boxSize = GetComponent<BoxCollider>().size;

        xBoundLeft = gameObject.transform.position.x - (boxSize.x / 2);
        xBoundRight = gameObject.transform.position.x + (boxSize.x / 2);

        yBoundLeft = gameObject.transform.position.y - (boxSize.y / 2);
        yBoundRight = gameObject.transform.position.y + (boxSize.y / 2);
    }


    void Start()
    {

        // Subscribe to events
        GameManager.Singleton.StartLevelEvent += OnLevelStartEnablePowerupSpawners;

        // Start routines
        powerupSpawnRoutine = StartSpawningPowerups();
        StartCoroutine(powerupSpawnRoutine);

    }

    public void OnLevelStartEnablePowerupSpawners()
    {
        // TODO: add new powerups every lvl
        spawnEnabled = true;

    }

    // Called from ENEMY KILL
    public void SpawnPowerupDrop(Vector3 pos)
    {
        PoolManager.Instance.ReuseObject(powerupsList[Random.Range(0, powerupsList.Count)], pos, Quaternion.identity);
    }

    IEnumerator StartSpawningPowerups()
    {
        mapColliders = GameManager.Singleton.mapColliders;  // Ref to map colliders
        int colliderCountEndIndex = mapColliders.Count - 1;
        // Keep true while in current round
        while (true)
        {
            // Wait for a bit before we check to see if spawns are enabled (naive level restart logic)
            yield return new WaitForSeconds(2.0f);
            List<float> possibleSpawnAngles = new List<float>() { 90f, -30f, 30f };
            // Spawn a fixed # of powerups at the beginning of every lvl
            while (/*numPowerupsSpawned <= 5 &&*/ spawnEnabled)
            {
                int colliderIndex = Random.Range(0, colliderCountEndIndex);
                //int colliderIndex = 0;
                BoxCollider targetCollider = (BoxCollider)mapColliders[colliderIndex];


                // Convert collider size vector to local space, then store it.
                // Scale these vectors, flip sign

                // Convert collider local space dimensions to world space
                Vector3 rawWidth = mapCentre.transform.TransformDirection(new Vector3(targetCollider.size.x / 2, 0, 0));
                Vector3 rawHeight = mapCentre.transform.TransformDirection(new Vector3(0, targetCollider.size.y / 2, 0));

                //Debug.Log("RAW WIDTH: " + rawWidth);
                //Debug.Log("RAW HEIGHT: " + rawHeight);

                rawWidth.x = rawWidth.x + mapCentre.transform.position.x;
                rawHeight.y = rawHeight.y + mapCentre.transform.position.y;

                // Rotation logic
                float randomRotation = possibleSpawnAngles[colliderIndex];
                Vector3 rotateDirWidth = rawWidth - new Vector3(mapCentre.transform.position.x, 0, 0);
                rotateDirWidth = Quaternion.Euler(new Vector3(0, 0, randomRotation)) * rotateDirWidth;
                //Debug.Log("ROTATE_WIDTH: " + rotateDirWidth);
                // This is making width become height! Just scale every value?
                //rawWidth.x = rotateDir.x + mapCentre.transform.position.x;

                Vector3 rotateDirHeight = rawHeight - new Vector3(0, mapCentre.transform.position.y, 0);
                rotateDirHeight = Quaternion.Euler(new Vector3(0, 0, randomRotation)) * rotateDirHeight;

                rotateDirWidth *= Random.Range(0.1f, 1f);
                rotateDirHeight *= Random.Range(0.1f, 1f);

                //// Possible sign flips
                if (Random.Range(0f, 1f) > 0.5f)
                {
                    rotateDirWidth *= -1;
                }
                if (Random.Range(0f, 1f) > 0.5f)
                {
                    rotateDirHeight *= -1;
                }
                // Sum up hori and vert components, and shift center to mapCentre as the origin
                Vector3 totalVector = rotateDirWidth + rotateDirHeight + mapCentre.transform.position;

                //Vector3 spawnLoc = new Vector3(Random.Range(-xBound, xBound), Random.Range(-yBound, yBound), 0);
                //Vector3 spawnLoc = new Vector3(Random.Range(xBoundLeft, xBoundRight), Random.Range(yBoundLeft, yBoundRight), 0);

                // Actual powerup spawning logic
                // Assume health pack is always at index 0
                float randomValue = Random.value;
                int spawnIndex = 0;
                if (currLevelIndex >= 6)
                {
                    // Spawn health pack
                    if (randomValue < 0.1f)
                    {
                        spawnIndex = 0;
                    }
                    // Spawn burst rush
                    else if (randomValue < 0.2f)
                    {
                        spawnIndex = 6;
                    }
                    // Spawn firing powerup
                    else if (randomValue < 0.3f)
                    {
                        spawnIndex = 1;
                    }
                    // Any other powerup
                    else
                    {
                        //while (spawnIndex == 6)
                        //{
                        spawnIndex = Random.Range(2, currLevelIndex + 1);
                        //    yield return null;
                        //}
                    }
                }
                else
                {
                    spawnIndex = Random.Range(0, currLevelIndex + 1);
                }

                PoolManager.Instance.ReuseObject(powerupsList[spawnIndex], totalVector, Quaternion.identity);
                //Debug.Log ("POWERUP SPAWNED!");
                yield return new WaitForSeconds(Random.Range(spawnDelayLowerBound, spawnDelayUpperBound));
                //numPowerupsSpawned += 1;
                //Instantiate (powerups [Random.Range (0, powerups.Count)], spawnLoc, Quaternion.identity);
            }
            /*if (!spawnEnabled) {
                numPowerupsSpawned = 0;		// Reset after each lvl
             }*/
            yield return null;
        }
    }

    public void IncreaseLevel()
    {
        // Unlocks additional powerups
        if (currLevelIndex < powerupsList.Count - 1)
        {
            currLevelIndex += 1;
            //Debug.Break();
            //Debug.Log("POWERUP LEVEL INCREASED!");
        }
    }

    public void EndLevel()
    {
        spawnEnabled = false;
    }

    public void RestartLevel()
    {
        spawnEnabled = true;
        currLevelIndex = initialStartIndex;     // Reset valid powerups

        StopCoroutine(powerupSpawnRoutine);
        powerupSpawnRoutine = StartSpawningPowerups();
        StartCoroutine(powerupSpawnRoutine);
    }
}
