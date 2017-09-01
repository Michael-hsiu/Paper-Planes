using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenObj : PoolObject
{

    public ShurikenScrObj powerupData;      // Data about upgrades, etc.
    public CapsuleCollider capsuleCollider;     // On same child as Sprite
    public GameObject explosion;

    public float initialColliderRadius;
    public Vector3 initialLocalScale;

    public float rotationFactor = 300.0f;
    public bool isSuperShuriken = false;
    public int damageDealt = -1;
    public float growTimeMult = 2.5f;

    public float MAX_SIZE = 3.0f;           // Maximum size as per prefab

    public bool dmgDone = false;
    public bool growingBigger = false;

    public float damageDelay = 0.1f;
    public bool canDamage = true;

    [Header("AUDIO")]
    public AudioSource audioSource;
    public AudioClip sliceAudioClip;

    Rigidbody rigidBody;
    IEnumerator circularRotationRoutine;
    IEnumerator damageDelayRoutine;

    void Awake()
    {
        initialColliderRadius = capsuleCollider.radius;
        initialLocalScale = capsuleCollider.transform.localScale;
        audioSource = GetComponent<AudioSource>();
        //rigidBody = GetComponent<Rigidbody>();
        //rigidBody.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;    // To handle shurikens slipping thru colliders
    }

    public override void OnObjectReuse()
    {
        // Anything to reset? Transform, velocity, etc.
        //transform.position = Vector3.zero;
        //transform.rotation = Quaternion.identity;
        GetComponent<Rigidbody>().velocity = Vector3.zero;

        // Reset collider and scale
        capsuleCollider.radius = initialColliderRadius;
        capsuleCollider.transform.localScale = initialLocalScale;

        // Reset coroutines
        if (circularRotationRoutine != null)
        {
            StopCoroutine(circularRotationRoutine);
            circularRotationRoutine = null;
        }
        circularRotationRoutine = CircularRotate();
        StartCoroutine(circularRotationRoutine);

        if (damageDelayRoutine != null)
        {
            StopCoroutine(damageDelayRoutine);
            damageDelayRoutine = null;
        }
    }

    //void OnEnable()
    //{
    //    //StopAllCoroutines();
    //    //// Reset size
    //    //transform.localScale = Vector3.one * 1.3f;      // This float mult is for this specific prefab

    //    //canDmg = true;
    //    //GetComponent<Rigidbody>().velocity = Vector3.zero;
    //    //cr = CircularRotate();
    //    //StartCoroutine(cr);
    //}

    void Update()
    {
        if (isSuperShuriken)
        {
            if (growingBigger && capsuleCollider.transform.localScale.x < MAX_SIZE)
            {
                Resize();
            }
        }
    }

    // Increase our size gradually after reaching damage quota
    // TODO: cache initial localSize and collider radius, reset every time fab reused
    public void Resize()
    {
        capsuleCollider.gameObject.transform.localScale += Vector3.one * powerupData.sizeMultiplier / growTimeMult;            // Gradually increase size of object
        //capsuleCollider.radius += powerupData.sizeMultiplier / growTimeMult;

        //Debug.Log("RESIZING");
        if (transform.localScale.x >= powerupData.sizeMultiplier)
        {
            growingBigger = false;
            //Debug.Log("RESIZING ENDED!");
        }
    }

    void OnTriggerEnter(Collider other)
    {

        // Ricochet logic
        if (other.gameObject.CompareTag(Constants.GameBorderTop))
        {
            if (other.gameObject != null)
            {
                Vector3 oldVel = transform.GetComponent<Rigidbody>().velocity;
                transform.GetComponent<Rigidbody>().velocity = Vector3.Reflect(oldVel, other.transform.rotation * Vector3.right);
            }
        }
        else if (other.gameObject.CompareTag(Constants.GameBorderSide))
        {
            if (other.gameObject != null)
            {
                Vector3 oldVel = transform.GetComponent<Rigidbody>().velocity;
                transform.GetComponent<Rigidbody>().velocity = Vector3.Reflect(oldVel, Vector3.right);
            }
        }
    }

    // For explosions triggered by contact
    void OnTriggerStay(Collider other)
    {

        // Damage logic
        if (other.gameObject.CompareTag(Constants.EnemyTag))
        {
            if (other.gameObject != null)
            {
                if (canDamage && other.gameObject.GetComponent<IDamageable<int>>() != null)
                {
                    other.gameObject.GetComponent<IDamageable<int>>().Damage(powerupData.damage);       // Inflict damage

                    if (GameManager.Singleton.sfxEnabled)
                    {
                        if (Utils.SquaredEuclideanDistance(GameManager.Singleton.playerShip.gameObject, gameObject) < 625.0f)
                        {
                            audioSource.PlayOneShot(sliceAudioClip, 0.3f);
                        }
                    }

                    // The initial setting of damage boundary
                    if (!dmgDone)
                    {
                        damageDealt = powerupData.damageBoundary;       // Reset damage we need to deal to resize Shuriken
                        dmgDone = true;
                    }

                    // Resize ourselves if needed
                    damageDealt -= powerupData.damage;
                    if (damageDealt <= 0)
                    {
                        damageDealt = powerupData.damageBoundary;
                        growingBigger = true;       // Start the resizing process
                    }

                    // Visual cue that shuriken is hitting enemy
                    PoolManager.Instance.ReuseObject(explosion, transform.position, Quaternion.identity);

                    // Delay btwn hits to prevent super-fast dmg
                    if (damageDelayRoutine != null)
                    {
                        StopCoroutine(damageDelayRoutine);
                        damageDelayRoutine = null;
                    }
                    damageDelayRoutine = DamageDelay();
                    StartCoroutine(damageDelayRoutine);
                }
            }
        }

    }


    public void FinishExistence()
    {
        StopCoroutine(circularRotationRoutine);
        PoolManager.Instance.ReuseObject(explosion, transform.position, Quaternion.identity);

        DestroyForReuse();      // Recycle this fab
    }

    IEnumerator CircularRotate()
    {
        float deathTime = Time.time + powerupData.duration;         // How long the shuriken stays alive
        while (Time.time < deathTime)
        {
            transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);    // Enemy normally rotates in circle
            yield return null;
        }
        FinishExistence();
    }

    IEnumerator DamageDelay()
    {
        canDamage = false;
        yield return new WaitForSeconds(damageDelay);
        canDamage = true;
    }


}
