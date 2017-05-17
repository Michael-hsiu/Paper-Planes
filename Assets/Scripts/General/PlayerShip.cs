using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class PlayerShip : FiringShip {

	//public List<GameObject> waveSpawns = new List<GameObject>();
	//public bool waveShotEnabled = true;

	public class SSContainer : IComparable<SSContainer> {
		public static float weaponTime;

		private Weapons id;
		private int priority;
		private List<ShotSpawn> ss;
		public Powerup activePowerup;

		public SSContainer(Weapons id, int priority, List<ShotSpawn> ss) {
			this.id = id;
			this.priority = priority;
			this.ss = ss;
		}

		public int CompareTo(SSContainer other) {
			if (this.priority < other.priority) {
				return -1;
			} else if (this.priority > other.priority) {
				return 1;
			} else {
				return 0;
			}
		}

		public Weapons ID { get { return id; } }
		public int Priority { get { return priority; } }
		public List<ShotSpawn> SS { get { return ss; } }

	}

	#region Variables
	public InputComponent input;
	public Stack<SSContainer> activeSS = new Stack<SSContainer>();
	public Dictionary<Weapons, SSContainer> ssDict = new Dictionary<Weapons, SSContainer>();
	private Rigidbody rb;
	protected float _speed = 2.0f;	
	protected int _shotDamage = 20;
	public float maxForward = 3.0f;

	public float colliderRadius = 1.2f;		// This is set manually based on normal colliders of player
	public float dashEndTime = 0.0f;
	public float thrust = 300.0f;
	public float maxDash = 20.0f;
	public float dashDuration = 5f;
	public bool dashStarted = false;

	public bool rushStarted = false;

	public enum Weapons {NORMAL, DUAL, TRI, SIDE};
	#endregion

	#region Unity Life Cycle
	protected override void Start () {
		input = InputManager.Instance.GetActiveInput();		// Get valid input source
		InitializeSS ();		// Get active shotspawn
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
		//CheckForInput ();
		//UpdateInput ();

	}

	void FixedUpdate() {
		UpdateInput ();		// This currently takes care of both input and physics; consider separating them
	}

	public void OnDrawGizmos() {
		// Only draw when we're dashing
		if (dashStarted) {
			Gizmos.color = Color.white;
			Gizmos.DrawWireSphere(transform.position, colliderRadius);
		}
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

		// Collections of shotspawns
		List<ShotSpawn> normalSS = new List<ShotSpawn> ();
		List<ShotSpawn> dualSS = new List<ShotSpawn> ();
		List<ShotSpawn> triSS = new List<ShotSpawn> ();
		List<ShotSpawn> sideSS = new List<ShotSpawn> ();

		foreach (GameObject go in ss) {		// Get ref to all player shotspawns
			ShotSpawn spawn = go.GetComponent<ShotSpawn>();
			if (spawn != null) {
				switch (go.tag) {
					case "NormalSS":
						normalSS.Add (spawn);
						//triSS.Add (spawn);
						sideSS.Add (spawn);
						break;
					case "DualSS":
						dualSS.Add (spawn);
						break;
					case "TriSS":
						triSS.Add (spawn);
						break;
					case "SideSS":
						sideSS.Add (spawn);
						break;
				}
			}
		}

		// Mapping enum vals to shotspawn lists
		ssDict.Add (Weapons.NORMAL, new SSContainer(Weapons.NORMAL, (int) Weapons.NORMAL, normalSS));
		ssDict.Add (Weapons.DUAL, new SSContainer(Weapons.DUAL, (int) Weapons.DUAL, dualSS));
		ssDict.Add (Weapons.TRI, new SSContainer(Weapons.TRI, (int) Weapons.TRI, triSS));
		//ssDict.Add (Weapons.SIDE, sideSS);

		// Starting properties - add normal SS list to stack
		this.activeSS.Push((SSContainer) ssDict[Weapons.NORMAL]);
	}

	public void SetWeapons(Weapons id) {
		this.activeSS.Push(ssDict[id]);
	}

	public void RemovePowerup() {
		this.activeSS.Pop ();
	}

	public override void Fire() {
		if (!isFiringBuffed) {
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing
		} else {
			nextFire = Time.time + fireRate / buffedFiringRateFactor;
		}

		try {
			SSContainer ss = activeSS.Peek ();		// Get active ss container object
			List<ShotSpawn> list = ss.SS;	// Get list of shotspawns
			if (list != null) {
				foreach(ShotSpawn spawn in list) {
					spawn.CreateShot (isFiringBuffed);	// Fire the shot!
				}
			}
			// Simple wave shot logic
			WaveShotManager.Instance.CreateWaveShots();
		} catch (InvalidOperationException e) {
			Debug.Log ("INVALID Peek() call");
		}

	}

	public override void Damage(int damageTaken) {
		//base.Damage (damageTaken);
		//Debug.Log ("OLD PLAYER HEALTH: " + GameManager.Singleton.playerHealth);
		GameManager.Singleton.playerHealth -= damageTaken;
		//Debug.Log ("NEW PLAYER HEALTH: " + GameManager.Singleton.playerHealth);
		UIManager.Singleton.UpdateHealth ();
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag(Constants.EnemyShot)) {
			other.gameObject.GetComponent<PoolObject> ().DestroyForReuse ();
			Damage (10);
		}
	}

	/*private void CheckForInput() {

		if (Input.GetKey(KeyCode.D)) {
			transform.Rotate(new Vector3(0, 0, 110) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.A)) {
			transform.Rotate(new Vector3(0, 0, -110) * Time.deltaTime);
		}

		if (Input.GetKey(KeyCode.W)) {
			transform.Translate (Vector2.up * Time.deltaTime * speed);
			//rb.AddForce(transform.up * speed);
		}

		if (Input.GetKey(KeyCode.S)) {
			transform.Translate (Vector2.down * Time.deltaTime * speed);
			//rb.AddForce(-transform.up * speed);
		}
	}*/

	private void UpdateInput() {
		input.UpdateInput (this);
	}

	public void BurstRush() {
		
	}

	#endregion
}
