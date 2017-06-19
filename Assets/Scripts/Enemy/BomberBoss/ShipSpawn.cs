using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipSpawn : MonoBehaviour
{

    public GameObject shipToSpawn;
    public Vector3 spawnLocation;

    void Start()
    {
        spawnLocation = transform.position;
    }

    public void Spawn()
    {
        PoolManager.Instance.ReuseObject(shipToSpawn, spawnLocation, Quaternion.identity);
    }
}
