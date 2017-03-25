using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShip : FiringShip {

	#region Variables
	//public Weapons weapon;
	public List<ShotSpawn> activeSS;
	//private List<GameObject> weapons;
	public Dictionary<Weapons, List<ShotSpawn>> ssDict = new Dictionary<Weapons, List<ShotSpawn>>();
	private Rigidbody rb;
	protected float _speed = 2.0f;	
	protected int _shotDamage = 20;

	public enum Weapons {NORMAL, DUAL, TRI}; 
	#endregion

	#region Unity Life Cycle
	protected override void Start () {
		InitializeSS ();
		rb = GetComponent<Rigidbody>();
	}
		
	protected override void Update () {

		// Firing logic
		if (Input.GetButton ("Fire1") && Time.time > nextFire) {
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
	private void InitializeSS() {
		GameObject parentShotSpawn = null;		// This contains all shotspawns
		foreach(Transform s in transform) {
			if (s.gameObject.CompareTag(Constants.ParentSS)) {
				parentShotSpawn = s.gameObject;
				break;
			}
		}
		List<GameObject> ss;
		if (parentShotSpawn != null) {
			ss = Utils.GetChildren (parentShotSpawn);	// Find all shotspawns
		} else {
			Debug.Log ("Didn't get parentShotSpawn (InitializeSS)");
			return;
		}

		List<ShotSpawn> normalSS = new List<ShotSpawn> ();
		List<ShotSpawn> dualSS = new List<ShotSpawn> ();
		List<ShotSpawn> triSS = new List<ShotSpawn> ();

		foreach (GameObject go in ss) {		// Get ref to all player shotspawns
			ShotSpawn spawn = go.GetComponent<ShotSpawn>();
			if (spawn != null) {
				switch (go.tag) {
					case "NormalSS":
						normalSS.Add (spawn);
						triSS.Add (spawn);
						break;
					case "DualSS":
						dualSS.Add (spawn);
						break;
					case "TriSS":
						triSS.Add (spawn);
						break;
				}
			}
		}

		// Mapping enum vals to shotspawn lists
		ssDict.Add (Weapons.NORMAL, normalSS);
		ssDict.Add (Weapons.DUAL, dualSS);
		ssDict.Add (Weapons.TRI, triSS);

		// Starting properties
		this.activeSS = ssDict [Weapons.NORMAL];
		//this.weapon = Weapons.NORMAL;
	}

	public void ChangeWeapons(Weapons id) {
		this.activeSS = ssDict [id];
	}

	public override void Fire() {

		if (!isFiringBuffed) {
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing
			//Debug.Log("COOLDOWN REACHED #1");
			//Debug.Log ("NEXTFIRE: " + nextFire);
		} else {
			nextFire = Time.time + fireRate / buffedFiringRateFactor;
			//Debug.Log("COOLDOWN REACHED #2");
		}

		// Look inside list of active shotspawns
		//Debug.Log ("FIRING");

		foreach(ShotSpawn s in activeSS) {
			if (s != null) {
				//Debug.Log("SHOT CREATED");
				s.CreateShot (isFiringBuffed);	// Fire the shot!
			}
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
