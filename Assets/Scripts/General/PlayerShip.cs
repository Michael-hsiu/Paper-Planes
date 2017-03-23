using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShip : FiringShip {

	#region Variables
	public Weapons weapon;
	private List<GameObject> weapons;
	private Rigidbody rb;
	protected float _speed = 2.0f;	
	protected int _shotDamage = 20;

	public enum Weapons {NORMAL, DUAL, TRI}; 
	#endregion

	#region Unity Life Cycle
	protected override void Start () {
		this.weapon = Weapons.NORMAL;
		//this.Speed = _speed;
		//this.ShotDamage = _shotDamage;

		Debug.Log ("Player's shotDamage: " + ShotDamage);

		GameObject parentShotSpawn;
		foreach(Transform s in transform) {
			if (s.gameObject.CompareTag(Constants.ParentSS)) {
				parentShotSpawn = s.gameObject;
				break;
			}
		}
		List<GameObject> ss = Utils.GetChildren (parentShotSpawn);
		foreach (GameObject go in ss) {
			switch (go.tag) {
				case "NORMAL":
					break;
				case "DUAL":
					break;
				case "TRI":
					break;
			}
		}
		rb = GetComponent<Rigidbody>();
	}

	protected override void Update () {

		// Firing logic
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {
			// Debug.Log ("FIRING");
			Fire ();
		}

		// Temp logic for player destruction
		if (GameManager.Singleton.playerHealth <= 0) {
			Instantiate (explosion, transform.position, transform.rotation);
			transform.gameObject.SetActive (false);
		}

		// Check for user input
		CheckForInput ();

	}
	#endregion

	#region Game Logic
	public void ChangeWeapons(Weapons id) {
		switch(id) {
			case Weapons.DUAL:
				this.weapon = Weapons.DUAL;
				break;
			case Weapons.TRI:
				this.weapon = Weapons.TRI;
				break;
			default:
				this.weapon = Weapons.NORMAL;
				break;
		}
	}

	public override void Fire() {

		if (!isFiringBuffed) {
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing
		} else {
			nextFire = Time.time + fireRate / buffedFiringRateFactor;
		}
			

	}

	public override void Damage(int damageTaken) {

		base.Damage (damageTaken);
		Debug.Log ("OLD PLAYER HEALTH: " + GameManager.Singleton.playerHealth);
		GameManager.Singleton.playerHealth -= damageTaken;
		Debug.Log ("NEW PLAYER HEALTH: " + GameManager.Singleton.playerHealth);
		UIManager.Singleton.UpdateHealth ();

	}

	private void CheckForInput() {

		if (Input.GetKey(KeyCode.D)) {
			transform.Rotate(new Vector3(0, 0, 90) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.A)) {
			transform.Rotate(new Vector3(0, 0, -90) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.W)) {
			rb.AddForce(transform.up * speed);
		}

		if (Input.GetKey(KeyCode.S)) {
			rb.AddForce(-transform.up * speed);
		}
	}
	#endregion
}
