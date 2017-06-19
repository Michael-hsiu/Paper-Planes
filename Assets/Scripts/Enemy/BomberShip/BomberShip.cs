using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

[SelectionBase]
public class BomberShip : Ship
{

    #region Variables

    [Header("BOMBER_SHIP")]
    public int explosionDamage = 50;
    public float explosionDelay = 3.0f;
    public float damageRange = 8.0f;
    public float rotationFactor = 150.0f;
    public bool isExploding = false;
    public bool explosionActive = false;
    public bool canExplode = true;
    public bool isCore = false;
    public BomberBoss bomberBoss;

    private Rigidbody rb;
    #endregion

    #region Unity Life Cycle
    protected override void Start()
    {

        // Call our overridden initalization method
        //Initialize ();
        base.Start();

        rb = GetComponent<Rigidbody>(); // For use in adjusting velocity
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

        // Check that we're calling the right Start() method
        //Debug.Log("BOMBER SHIP START");

    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {
        StopAllCoroutines();
        Start();

        //if (sprite != null)
        //{
        Color resetColor = startColor;
        resetColor.a = 1f;
        sprite.material.color = resetColor;
        Debug.Log("BOMBER SPRITE RESET!");
        //}
    }

    protected override void Update()
    {

        // Use default movement
        base.Update();

    }
    #endregion

    #region Game Logic
    /*	protected override void Initialize() {

            // Do normal initalization
            //base.Initialize ();
            //damageRange = GetComponentInChildren<BomberCollisionHelper> ().GetComponent<CapsuleCollider> ().radius;
        }
    */
    public override void Kill()
    {

        // Graphics
        Instantiate(explosion, transform.position, transform.rotation);
        float randomVal = UnityEngine.Random.value;
        if (randomVal <= 0.3f)
        {
            GameManager.Singleton.powerupSpawner.SpawnPowerupDrop(transform.position);
        }

        // Kill logic
        // CORE logic is only for BomberBoss-utilized Bombers
        if (isCore)
        {
            bomberBoss.numCoresAlive -= 1;
            if (bomberBoss.numCoresAlive == 0)
            {
                bomberBoss.ActivateStageTwo();
            }
        }
        base.Kill();        // Bare-bones destroyForReuse()

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

    /** CO-ROUTINES */

    IEnumerator BeginExplosion()
    {

        // Set this to have only one co-routine running
        explosionActive = true;

        // The following 2 'color's are different! The first one, changing material color, is what we want!
        sprite.material.color = Color.red;        // This will show a change in the material color
        //GetComponentInChildren<SpriteRenderer>().color = Color.red;     // This will show a change in color field of Sprite Renderer, which isn't what we want in this case

        //Debug.Log ("EXPLOSION COUNTDOWN BEGINS!");

        yield return new WaitForSeconds(explosionDelay);     // Wait for a few seconds while beeping animation plays

        // Get all colliders in area
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, damageRange);


        //List<GameObject> targets = new List<GameObject> ();
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

        Kill();     // We're dead, so hide this object!
        Instantiate(explosion, transform.position, transform.rotation); // Explode! 

    }
    #endregion
}
