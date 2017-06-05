﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class PlayerShip : FiringShip
{

	#region Helper Class

	public enum Weapons
	{
		LEVEL_ONE,
		LEVEL_TWO,
		LEVEL_THREE,
        LEVEL_FOUR,
		SIDE

    };

	public class OldShotSpawnsContainer : IComparable<OldShotSpawnsContainer>
	{

		public static float powerupExpirationTime;

		private Weapons weaponID;
		private int priority;
		private List<ShotSpawn> ss;
		public Powerup activePowerup;

		public OldShotSpawnsContainer(Weapons id, int priority, List<ShotSpawn> shotSpawnList)
		{
			this.weaponID = id;
			this.priority = priority;
			this.ss = shotSpawnList;
		}

		public int CompareTo(OldShotSpawnsContainer other)
		{
			if (this.priority < other.priority)
			{
				return -1;
			}
			else if (this.priority > other.priority)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

		public Weapons WeaponID { get { return weaponID; } }

		public int Priority { get { return priority; } }

		public List<ShotSpawn> ShotSpawnList { get { return ss; } }

	}

	#endregion

	#region Variables

	public InputComponent input;
	public Stack<OldShotSpawnsContainer> activeShotSpawn = new Stack<OldShotSpawnsContainer>();
	public Dictionary<Weapons, OldShotSpawnsContainer> shotSpawnDictionary = new Dictionary<Weapons, OldShotSpawnsContainer>();
	private Rigidbody rb;
	public float maxForward = 3.0f;

	public float colliderRadius = 1.2f;
	// This is set manually based on normal colliders of player

	[Header("POWERUPS")]
	public int numShots = 0;
	public bool dashStarted = false;
	public float dashEndTime = 0.0f;
	public float thrust = 300.0f;
	public float maxDash = 20.0f;
	public float dashDuration = 5f;
	public bool rushStarted = false;

	// Wave shot dependencies
	public List<GameObject> waveSpawns = new List<GameObject>();
	public bool waveShotEnabled = false;
	public float waveRandomVal;
	public float waveChance = 0.15f;

	// Front-facing missile dependencies
	public List<GameObject> sideMissileSpawns;
	public bool sideMissileEnabled;
	public float sideMissileRandomVal;
	public float sideMissileChance = 0.1f;

	[Header("FIRING RIG")]
	public GameObject firingRig;
	public GameObject chargeColliderRig;

	[Header("SHOTSPAWN LISTS")]
	// Collections of shotspawns
	List<ShotSpawn> normalShotSpawnList = new List<ShotSpawn>();
	//List<ShotSpawn> dualShotSpawnList = new List<ShotSpawn>();
	List<ShotSpawn> triShotSpawnList = new List<ShotSpawn>();
	List<ShotSpawn> quadShotSpawnList = new List<ShotSpawn>();
    List<ShotSpawn> pentaShotSpawnList = new List<ShotSpawn>();

	List<ShotSpawn> sideSS = new List<ShotSpawn>();
	//[Header("RENDERER/FLICKER")]
	//public IEnumerator hitFlickerRoutine;
	//public Color startColor;
	//public Renderer sprite;
	//public float flickerTime = 0.05f;


	public static PlayerShip instance;

	void Awake()
	{
		
		DontDestroyOnLoad(this);
		if (instance == null)
		{
			instance = this;
		}
		else
		{
			DestroyImmediate(gameObject);
		}

	}

	#endregion

	#region Unity Life Cycle

	protected override void Start()
	{
		input = InputManager.Instance.GetInputComponent();		// Get valid input source
		InitializeShotSpawns();		// Get active shotspawn
		rb = GetComponent<Rigidbody>();
		startColor = sprite.material.color;
	}

	protected override void Update()
	{

		// Firing logic
		if (Input.GetButton("Fire1") && Time.time > nextFire && ((AIInput)input).controlsEnabled)
		{
			Fire();
		}

		// Temp logic for player destruction
		if (GameManager.Singleton.playerHealth <= 0)
		{
			Instantiate(explosion, transform.position, transform.rotation);
			transform.gameObject.SetActive(false);
		}

		// Check for user input
		//CheckForInput ();
		//UpdateInput ();

	}

	void FixedUpdate()
	{
		UpdateInput();		// This currently takes care of both input and physics; consider separating them
	}

	public void OnDrawGizmos()
	{
		// Only draw when we're dashing
		if (dashStarted)
		{
			Gizmos.color = Color.white;
			Gizmos.DrawWireSphere(transform.position, colliderRadius);
		}
	}

	#endregion

	#region Game Logic

	private void InitializeShotSpawns()
	{
		GameObject parentShotSpawn = null;		// This contains all shotspawns

        // Do this in inspector
		foreach (Transform s in transform)
		{
			if (s.gameObject.CompareTag(Constants.ParentSS))
			{
				parentShotSpawn = s.gameObject;
				break;
			}
		}
		List<GameObject> ss;
		if (parentShotSpawn != null)
		{
			ss = Utils.GetChildren(parentShotSpawn);	// Find all shotspawns
		}
		else
		{
			Debug.Log("Didn't get parentShotSpawn (InitializeShotSpawns)");
			return;
		}


        // Unextensible to more shot types
        // Need some sort of data container for each ShotSpawn
		foreach (GameObject go in ss)
		{		// Get ref to all player shotspawns
			ShotSpawn spawn = go.GetComponent<ShotSpawn>();
			if (spawn != null)
			{
				switch (go.tag)
				{
					case "NormalSS":
						normalShotSpawnList.Add(spawn);
						//triSS.Add (spawn);
						sideSS.Add(spawn);
						break;
				/*case "DualSS":
						dualShotSpawnList.Add(spawn);
						break;*/
					case "TriSS":
						triShotSpawnList.Add(spawn);
						break;
					case "QuadSS":
						quadShotSpawnList.Add(spawn);
						break;
                    case "PentaSS":
                        pentaShotSpawnList.Add(spawn);
                        break;
					case "SideSS":
						sideSS.Add(spawn);
						break;
				}
			}
		}

		// Mapping enum vals to shotspawn lists
		shotSpawnDictionary.Add(Weapons.LEVEL_ONE, new OldShotSpawnsContainer(Weapons.LEVEL_ONE, (int) Weapons.LEVEL_ONE, normalShotSpawnList));
		shotSpawnDictionary.Add(Weapons.LEVEL_TWO, new OldShotSpawnsContainer(Weapons.LEVEL_TWO, (int) Weapons.LEVEL_TWO, triShotSpawnList));
		shotSpawnDictionary.Add(Weapons.LEVEL_THREE, new OldShotSpawnsContainer(Weapons.LEVEL_THREE, (int) Weapons.LEVEL_THREE, quadShotSpawnList));
        shotSpawnDictionary.Add(Weapons.LEVEL_FOUR, new OldShotSpawnsContainer(Weapons.LEVEL_FOUR, (int) Weapons.LEVEL_FOUR, pentaShotSpawnList));

		// Starting properties - add normal SS list to stack
		this.activeShotSpawn.Push((OldShotSpawnsContainer) shotSpawnDictionary[Weapons.LEVEL_ONE]);
	}

	public void SetWeapons(Weapons id, Powerup powerup)
	{
		this.activeShotSpawn.Push(shotSpawnDictionary[id]);
		this.activeShotSpawn.Peek().activePowerup = powerup;		// Record the powerup so we can deactivate its CancelInvoke call as needed
	}

	public void RemovePowerup()
	{
		this.activeShotSpawn.Pop();
	}

	public override void Fire()
	{
		if (!isFiringBuffed)
		{
			nextFire = Time.time + fireRate;	// Cooldown time for projectile firing
		}
		else
		{
			nextFire = Time.time + fireRate / buffedFiringRateFactor;
		}

		try
		{
			// Consult the stack for active shot spawn
			OldShotSpawnsContainer activeShotSpawn = this.activeShotSpawn.Peek();		// Get active ShotSpawn container object
			List<ShotSpawn> list = activeShotSpawn.ShotSpawnList;					// Get list of active shotspawns

			if (list != null && list.Count > 0)
			{
				foreach (ShotSpawn spawn in list)
				{
					spawn.CreateShot(isFiringBuffed);	// Fire the shot!
					numShots += 1;
				}
			}
			// Simple wave shot logic
			if (waveShotEnabled)
			{
				CreateWaveShots();
			}
			if (sideMissileEnabled)
			{
				CreateFrontMissiles();
			}
		}
		catch (InvalidOperationException e)
		{
			Debug.Log("INVALID Peek() call");
		}

	}

	public override void Damage(int damageTaken)
	{


		Debug.Log("PLAYER DAMAGED!");
		// Restart flicker animation
		if (hitFlickerRoutine != null)
		{
			StopCoroutine(hitFlickerRoutine);
		}
		hitFlickerRoutine = FlickerHit();
		StartCoroutine(hitFlickerRoutine);

		GameManager.Singleton.playerHealth -= damageTaken;
		if (GameManager.Singleton.playerHealth <= 0)
		{
			GameManager.Singleton.LevelFailed();			// Initiate level failure logic
		}
		UIManager.Singleton.UpdateHealth();
	}

	// Flicker when hit
	IEnumerator FlickerHit()
	{
		Debug.Log("FLICKERING");
		Color flickerColor = sprite.material.color;
		flickerColor.a = 0.55f;

		sprite.material.color = flickerColor;
		yield return new WaitForSeconds(flickerTime);

		sprite.material.color = startColor;
		yield return new WaitForSeconds(flickerTime);

		sprite.material.color = flickerColor;
		yield return new WaitForSeconds(flickerTime);

		sprite.material.color = startColor;
		yield return new WaitForSeconds(flickerTime);

		sprite.material.color = flickerColor;
		yield return new WaitForSeconds(flickerTime);

		sprite.material.color = startColor;
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.CompareTag(Constants.EnemyShot))
		{
			other.gameObject.GetComponent<PoolObject>().DestroyForReuse();
			Damage(10);
		}
	}

	private void UpdateInput()
	{
		input.UpdateInput(this);
	}

	public void CreateWaveShots()
	{
		waveRandomVal = UnityEngine.Random.value;		// Set the random value
		if (waveRandomVal <= waveChance)
		{
			foreach (GameObject go in waveSpawns)
			{
				if (go.GetComponent<ShotSpawn>() != null)
				{
					go.GetComponent<ShotSpawn>().CreateShot();	// Fire the shot!
				}
			}
		}
	}

	// This is not for the homing missile powerup; it is for front-firing missiles.
	public void CreateFrontMissiles()
	{
		sideMissileRandomVal = UnityEngine.Random.value;		// Set the random value
		if (sideMissileRandomVal <= sideMissileChance && numShots % 20 == 0)
		{
			foreach (GameObject go in sideMissileSpawns)
			{
				if (go.GetComponent<ShotSpawn>() != null)
				{
					go.GetComponent<WaveShotSpawn>().CreateFrontMissiles();	// Fire the shot!
				}
			}			
		}
	}

	#endregion
}
