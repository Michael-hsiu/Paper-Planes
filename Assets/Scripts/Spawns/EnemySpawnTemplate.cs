using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawnTemplate : MonoBehaviour {

	public GameObject enemy;
	public float spawnDelay = 3.0f;
	//public int maxEnemies = 100;	// Could be capped per lvl
	public float spawnRadius = 3.0f;
	public bool startSpawning = true;	// Should be controlled by GameManager

	[Range(0,360)]
	public float spawnAngle;

	private IEnumerator cr;
	private int numEnemies = 0;
	private GameObject spawnContainer;
	//private Ship spawnedEnemy;

	void Start() {
		spawnContainer = new GameObject ("SpawnContainer");		// Create container to hold all spawned enemies
		cr = WaitAndFire(spawnDelay);	// Assign co-routine
		StartCoroutine(cr);				// Begin eternal enemy spawn
	}

	private IEnumerator WaitAndFire(float spawnDelay) {

		GameObject player = GameManager.Singleton.playerShip.gameObject;
		while (true) {
		//while (numEnemies < maxEnemies) {
			
			//GameObject spawnedEnemy = Instantiate (enemy, transform.position, Quaternion.identity);	// Instantiate an enemy prefab
			Vector3 target = player.transform.position;
			if (startSpawning) {
				
				Vector3 randomPos = Utils.RandomPos (transform, spawnRadius);
				Ship spawnedEnemy = (Ship) PoolManager.Instance.ReuseObjectRef(enemy, randomPos, Quaternion.identity);

				//Quaternion newRot = Quaternion.LookRotation ((target - spawnedEnemy.transform.position).normalized);
				//Quaternion newRot = Quaternion.LookRotation ((spawnedEnemy.transform.position - target).normalized);
				Vector3 dist = target - spawnedEnemy.transform.position;
				float zAngle = (Mathf.Atan2(dist.y, dist.x) * Mathf.Rad2Deg) + 180;	// Angle of rotation around z-axis (pointing upwards)
				Quaternion desiredRotation = Quaternion.Euler (0, 0, zAngle);		// Store rotation as an Euler, then Quaternion


				//Debug.Log ((spawnedEnemy as RangedShip).enemyType);

				// Appears that this prevents rotation around x and y-axes
				//newRot.x = 0;
				//newRot.y = 0;
				spawnedEnemy.transform.rotation = desiredRotation;	// Set immediately to face the player (vector logic now expressed thru quaternion)

				numEnemies += 1;	// Increment number of enemies this spawn has created

				//print ("Enemy # " + numEnemies + " spawned!");

				yield return new WaitForSeconds (spawnDelay);	// Delay between spawning new enemies
			}
			yield return null;
		}
	}
}
