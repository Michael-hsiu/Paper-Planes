using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

[SelectionBase]
public class PawnShip : Ship {
	// States
	public IMoveState moveState;
	//public IFireState firingState;

	#region Unity Life Cycle
	protected override void Start () {
		// Call our overridden initalization method
		Initialize ();
		enemyType = EnemyType.Pawn;
		//Debug.Log("PAWN SHIP START");

		// Component state initialization
		moveState = GetComponent<IMoveState>();
		//firingState = new PawnFS ();

	}

	protected override void Update() {
		//base.Update ();
		Move ();
	}

	#endregion

	#region Game Logic

	public override void Kill() {
		float randomVal = UnityEngine.Random.value;
		if (randomVal <= 0.4f) {
			GameObject powerup = GameManager.Singleton.activeLevel.powerups [UnityEngine.Random.Range (0, GameManager.Singleton.activeLevel.powerups.Count)];
			Instantiate (powerup, transform.position, Quaternion.identity);	
		}
		base.Kill ();
		GameManager.Singleton.RecordKill (enemyType);	// This should cover Missiles and Shurikens registering damage / kills

	}

	public override void Move () {
		// Allows movement state to control movement
		moveState.UpdateState (this);
	}	
		
	void OnTriggerEnter(Collider other) {

		// Handle collisions with player shots
		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us

			health -= GameManager.Singleton.playerDamage;			// We lost health

			if (health <= 0) {
				
				Instantiate (explosion, transform.position, transform.rotation);
				DestroyForReuse ();

				//Destroy (this.gameObject);		// We're dead, so get rid of this object :/
				if (GameManager.Singleton.lvlActive) {
					
					GameManager.Singleton.RecordKill (this.enemyType);
					GameManager.Singleton.UpdateScore (enemyPoints);
					//GameManager.Singleton.playerScore += enemyPoints;	// Add new score in GameManager
					UIManager.Singleton.UpdateScore ();	// Update score in UI

					Debug.Log("PAWN KILLED! Obtained: " + enemyPoints + "points!");
				}
			}

		// Handle collisions with player
		} else if (other.gameObject.CompareTag(Constants.PlayerTag)) {

			Debug.Log ("INNER REACHED!");

			other.gameObject.GetComponent<PlayerShip> ().Damage(10);
			Instantiate (explosion, transform.position, transform.rotation);
			DestroyForReuse ();
			//Destroy (transform.gameObject);

		}
	}

	#endregion
}
