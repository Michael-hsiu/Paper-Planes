using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurstRushPowerup : Powerup
{

    public GameObject burstChargeColliders;     // Assign in inspector
    public GameObject burstRushColliders;
    public bool isActive;
    public bool isCharging = false;
    public float chargeTime = 3.0f;
    public float rushTime = 3.0f;
    public float thrust = 80.0f;
    public float radius = 2.5f;
    public List<Collider> colliders;
    //protected bool isVisible;
    //public GameObject pickupParticlePrefab;     // Particle system that plays on particle pickup


    private IEnumerator chargeRoutine;
    private IEnumerator rushRoutine;
    //public PlayerShip player;
    public Vector3 oldVelocity;

    public SpecialWeapons id = SpecialWeapons.RUSH;


    public override void Start()
    {
        //player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
        burstChargeColliders = BurstRushManager.Instance.burstChargeColliders;
        burstRushColliders = BurstRushManager.Instance.burstRushColliders;
        //player = GameManager.Singleton.playerShip;
        base.Start();
        //burstChargeColliders.SetActive (false);
        //burstRushColliders.SetActive (false);
        //colliders = Utils.GetChildren (burstRushColliders);		// Get all phase II (rush) colliders
    }


    //void ActivatePower(string id)
    //{
    //    GameManager.Singleton.numPowerupsCollected += 1;
    //    WeaponsManager.Instance.ActivateWeapon(id); // Logic should be flipped
    //}

    public override void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.PlayerTag) && !GameManager.Singleton.isBurstRushCharging && !GameManager.Singleton.isBurstRushing)
        {
            // Do weapons logic; spawn things
            if (pickupParticlePrefab != null)
            {
                PoolManager.Instance.ReuseObject(pickupParticlePrefab, transform.position, Quaternion.identity);
            }
            ActivatePowerup();
            HideInScene();      // Can't destroy it yet b/c it needs to invoke a method
        }
    }

    public override void ActivatePowerup()
    {
        GameManager.Singleton.rushes.Enqueue(this);     // Add a Rush to our count
        TriggerCharge(player);          // Immediately activate powerup on pickup
        base.ActivatePowerup();
    }

    // Draw Charge ring
    public void OnDrawGizmos()
    {
        if (isCharging)
        {
            Gizmos.color = Color.white;
            Gizmos.DrawWireSphere(player.transform.position, radius);
        }
    }


    // This is called from our Input module
    public void TriggerCharge(PlayerShip player)
    {
        // Begin Phase I, which will initiate Phase II
        //this.player = player;	// Keep track of the player so we can chage its rushStarted bool flag

        //UIManager.Singleton.UpdateBurstRushText();
        //StopAllCoroutines();
        if (chargeRoutine != null)
        {
            StopCoroutine(chargeRoutine);
            chargeRoutine = null;
        }
        chargeRoutine = StartCharge();
        StartCoroutine(chargeRoutine);
    }

    // Phase I - charge stage.
    IEnumerator StartCharge()
    {

        player.rushStarted = true;          // Player cannot use other powerups
        GameManager.Singleton.isBurstRushCharging = true;
        GameManager.Singleton.playerShip.canBeDamaged = false;

        // Activate Burst Rush colliders and disable firing and moving
        // Also de-activate player collider, cannot be hit
        oldVelocity = player.GetComponent<Rigidbody>().velocity;
        player.GetComponent<Rigidbody>().velocity = Vector3.zero;           // Naive fix: non-force impl of halting player entirely
        isCharging = true;
        GameManager.Singleton.axisInput = false;                            // So we can't move while charging
        BurstRushManager.Instance.burstChargeColliders.SetActive(true); // Enable charge collider

        yield return new WaitForSeconds(chargeTime);

        //BurstRushManager.Instance.burstChargeColliders.SetActive (false);		// Disable charge collider

        // Begin Phase II - rush stage.
        isCharging = false;
        GameManager.Singleton.isBurstRushCharging = false;
        rushRoutine = StartRush();
        StartCoroutine(rushRoutine);

        yield return null;
    }

    IEnumerator StartRush()
    {
        GameManager.Singleton.isBurstRushing = true;

        GameManager.Singleton.speedCapped = false;
        GameManager.Singleton.turnInput = false;        // Can't turn whilst rushing
        BurstRushManager.Instance.burstRushColliders.SetActive(true);


        player.GetComponent<Rigidbody>().AddForce(player.transform.up * thrust, ForceMode.Impulse);     // Propel player forward

        yield return new WaitForSeconds(rushTime);      // Also need to disable inputs

        BurstRushManager.Instance.burstChargeColliders.SetActive(false);        // Disable charge collider
        BurstRushManager.Instance.burstRushColliders.SetActive(false);

        rushRoutine = null;
        player.rushStarted = false;     // Allow player to now use other powerups
        GameManager.Singleton.speedCapped = true;

        // Player cannot be hit during or for a little after a rush
        yield return new WaitForSeconds(0.5f);
        GameManager.Singleton.playerShip.canBeDamaged = true;
        GameManager.Singleton.axisInput = true;     // Re-enable movement
        GameManager.Singleton.turnInput = true;
        GameManager.Singleton.isBurstRushing = false;

        //player.GetComponent<Collider>().enabled = true;
    }

    //void HideInScene()
    //{
    //    SetVisibility(false);
    //}

    //void SetVisibility(bool isVisible)
    //{
    //    this.isVisible = isVisible;
    //    gameObject.GetComponent<Renderer>().enabled = this.isVisible;
    //    gameObject.GetComponent<Collider>().enabled = this.isVisible;

    //}
}
