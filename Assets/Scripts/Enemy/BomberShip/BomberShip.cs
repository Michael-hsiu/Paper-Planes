using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;

[SelectionBase]
public class BomberShip : Ship
{
    #region Variables
    [Header("BOMBER_SHIP")]
    public int explosionDamage = 50;
    public float explosionDelay = 3.0f;
    public float damageRange = 8.0f;
    public float rotationFactor = 150.0f;
    public float explodingMoveSpeed = 5.0f;
    public bool isExploding = false;
    public bool explosionActive = false;
    public bool canExplode = true;
    public bool isCore = false;
    public bool isSlingShotBomber = false;
    public bool inSlingChargeMode = false;
    public BomberBoss bomberBoss;
    public GameObject selfExplosionPrefab;

    private Rigidbody rigidBody;
    #endregion

    #region Unity Life Cycle
    protected override void Start()
    {
        // Call our overridden initalization method
        //Initialize ();
        base.Start();

        rigidBody = GetComponent<Rigidbody>(); // For use in adjusting velocity
        if (rigidBody != null)
        {
            rigidBody.velocity = Vector3.zero;
            rigidBody.angularVelocity = Vector3.zero;
        }
        enemyType = EnemyType.Bomber;

        // Reset values from defaultValues scrObj
        health = defaultValues.health;
        rotationSpeed = defaultValues.rotationSpeed;
        rotationFactor = defaultValues.rotationFactor;

        isExploding = false;
        explosionActive = false;

        // Component state initialization
        moveState = GetComponent<IMoveState>();
        moveState.OnObjectReuse();
        //fireState = GetComponent<IFireState>();
    }
    public override void DestroyForReuse()
    {
        //transform.parent = poolObjHolder.transform;       // Move back to pool object container
        //Debug.Log(name);
        //Debug.Break();
        base.DestroyForReuse();
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {
        //StopAllCoroutines();
        Start();

        if (sprite != null)
        {
            Color resetColor = startColor;
            resetColor.a = 1f;
            sprite.material.color = resetColor;
            Debug.Log("BOMBER SPRITE RESET!");
        }
    }

    #endregion

    #region Game Logic
    public override void Kill()
    {
        // Kill logic
        // CORE logic is only for BomberBoss-utilized Bombers
        if (isCore)
        {
            //Debug.Break();
            bomberBoss.numCoresAlive -= 1;
            if (bomberBoss.numCoresAlive == 0)
            {
                bomberBoss.ActivateStageTwo();
            }
        }
        else if (isSlingShotBomber)
        {
            inSlingChargeMode = true;       // Used to keep slingshot bomber attached to boss when spinning
        }

        PoolManager.Instance.ReuseObject(explosion, transform.position, transform.rotation);
        if (!explosionActive)
        {
            float randomVal = UnityEngine.Random.value;
            if (randomVal <= 0.3f)
            {
                GameManager.Singleton.powerupSpawner.SpawnPowerupDrop(transform.position);
            }
            base.Kill();        // Bare-bones destroyForReuse()
        }
        else
        {
            // Handles self-death by explosion case
            OnKillReset();
            //sprite.material.color = startColor;
            //hitFlickerRoutine = null;

            //DestroyForReuse();
        }
    }

    public override void Move()
    {
        moveState.UpdateState();
    }

    // For shots
    protected void OnTriggerEnter(Collider other)
    {

        // If player shot hits us...
        if (other.gameObject.CompareTag(Constants.PlayerShot))
        {

            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us

            Damage(GameManager.Singleton.playerDamage);         // We lost health

            //Debug.Log ("ENEMY HEALTH: " + health);	// Print message to console */
        }
    }

    public void StartExploding()
    {
        if (canExplode)
        {
            StartCoroutine(BeginExplosion());
        }
    }

    public override void Damage(int damageTaken)
    {

        // Restart flicker animation
        if (hitFlickerRoutine == null)
        {
            //StopCoroutine(hitFlickerRoutine);
            hitFlickerRoutine = FlickerHit();
            StartCoroutine(hitFlickerRoutine);
        }

        health -= damageTaken;      // We lose health
        if (health <= 0)
        {
            Kill();
            //Debug.Log ("Killed via projectile weapon");
        }
    }

    // Flicker when hit
    protected override IEnumerator FlickerHit()
    {
        Color beforeFlickerColor = sprite.material.color;
        Color flickerColor = beforeFlickerColor;
        flickerColor.a = 0.45f;

        sprite.material.color = flickerColor;
        yield return new WaitForSeconds(flickerTime);
        if (explosionActive)
        {
            sprite.material.color = Color.red;
        }
        else
        {
            sprite.material.color = beforeFlickerColor;
        }
        // Open up flicker routine to next hit
        hitFlickerRoutine = null;
    }

    /** CO-ROUTINES */

    IEnumerator BeginExplosion()
    {

        // Set this to have only one co-routine running
        explosionActive = true;
        //Debug.Log(name + "EXPLODING");
        // The following 2 'color's are different! The first one, changing material color, is what we want!
        sprite.material.color = Color.red;        // This will show a change in the material color
        //GetComponentInChildren<SpriteRenderer>().color = Color.red;     // This will show a change in color field of Sprite Renderer, which isn't what we want in this case

        //Debug.Log ("EXPLOSION COUNTDOWN BEGINS!");

        yield return new WaitForSeconds(explosionDelay);     // Wait for a few seconds while beeping animation plays

        // Get all colliders in area
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, damageRange);
        List<GameObject> targets = (from c in hitColliders select c.gameObject).ToList();

        // Damage all gameobjects 
        foreach (GameObject go in targets)
        {
            // Retrieve the script that implements IDamageable
            IDamageable<int> i = go.GetComponent(typeof(IDamageable<int>)) as IDamageable<int>;
            if (i != null)
            {
                i.Damage(explosionDamage);
            }
        }
        PoolManager.Instance.ReuseObject(selfExplosionPrefab, transform.position, transform.rotation);  // Explosion effect w/ custom prefab!
        Kill();     // We're dead, so hide this object!

    }
    #endregion
}
