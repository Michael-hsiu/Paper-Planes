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
		base.Start ();
		//Initialize ();
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
		// Graphics
		Instantiate (explosion, transform.position, transform.rotation);

		// Powerup spawn chance
		/*float randomVal = UnityEngine.Random.value;
		if (randomVal <= 0.2f) {
			GameObject powerup = GameManager.Singleton.activeLevel.powerups [UnityEngine.Random.Range (0, GameManager.Singleton.activeLevel.powerups.Count)];
			Instantiate (powerup, transform.position, Quaternion.identity);	
		}*/

		// Kill logic
		base.Kill ();

		if (GameManager.Singleton.levelActive) {

			GameManager.Singleton.OnEnemyKilled (this.enemyType);
			GameManager.Singleton.UpdateScore (enemyPoints);
			UIManager.Singleton.UpdateScore ();	// Update score in UI

			Debug.Log("PAWN KILLED! Obtained: " + enemyPoints + "points!");
		}

	}

	public override void Move () {
		// Allows movement state to control movement
		moveState.UpdateState (this);
	}	
		
	void OnTriggerEnter(Collider other) {

		// Handle collisions with player shots
		if (other.gameObject.CompareTag (Constants.PlayerShot)) {

			other.gameObject.GetComponent<PoolObject>().DestroyForReuse();		// Destroy the shot that hit us

			Damage(GameManager.Singleton.playerDamage);			// We lost health

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
