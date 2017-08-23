using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipSpawn : MonoBehaviour
{

    public GameObject shipToSpawn;
    public EnemySpawner enemySpawner;
    public Vector3 spawnLocation;

    void Start()
    {
        //spawnLocation = transform.position;
        enemySpawner = GameManager.Singleton.enemySpawner;
    }

    public void Spawn()
    {
        PoolManager.Instance.ReuseObject(shipToSpawn, transform.position, Quaternion.identity);
        if (enemySpawner != null)
        {
            enemySpawner.NUM_BOMBERS_ALIVE += 1;    // Must record mobs we spawn
        }
        else
        {
            Debug.Log("ENEMY_SPAWNER_NULL");
        }
    }
}
