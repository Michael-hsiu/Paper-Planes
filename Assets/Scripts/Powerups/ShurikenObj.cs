using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenObj : PoolObject
{

    public ShurikenScrObj powerupData;      // Data about upgrades, etc.

    public GameObject explosion;
    public float rotationFactor = 300.0f;
    public bool isSuperShuriken = false;
    public int damageDealt = -1;
    public float growTimeMult = 2.5f;
    public float MAX_SIZE = 3.0f;           // Maximum size as per prefab
    public bool dmgDone = false;
    public bool growingBigger = false;

    public float dmgDelay = 0.1f;
    public bool canDmg = true;

    private IEnumerator cr;
    private IEnumerator damageDelayRoutine;

    void OnEnable()
    {
        StopAllCoroutines();
        // Reset size
        transform.localScale = Vector3.one * 1.3f;      // This float mult is for this specific prefab

        canDmg = true;
        GetComponent<Rigidbody>().velocity = Vector3.zero;
        cr = CircularRotate();
        StartCoroutine(cr);
    }

    void Update()
    {
        if (isSuperShuriken)
        {
            if (growingBigger && transform.localScale.x < MAX_SIZE)
            {
                Resize();
            }
        }
    }

    // Increase our size gradually after reaching damage quota
    public void Resize()
    {
        transform.localScale += Vector3.one * powerupData.sizeMultiplier / growTimeMult;            // Gradually increase size of object
        Debug.Log("RESIZING");
        if (transform.localScale.x >= powerupData.sizeMultiplier)
        {
            growingBigger = false;
            Debug.Log("RESIZING ENDED!");
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
                transform.GetComponent<Rigidbody>().velocity = Vector3.Reflect(oldVel, Vector3.up);
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
                if (canDmg && other.gameObject.GetComponent<IDamageable<int>>() != null)
                {
                    other.gameObject.GetComponent<IDamageable<int>>().Damage(powerupData.damage);       // Inflict damage

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

                    // Visual cue that shuriken has been destroyed
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
        StopCoroutine(cr);
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
        canDmg = false;
        yield return new WaitForSeconds(dmgDelay);
        canDmg = true;
    }

    public virtual void OnObjectReuse()
    {
        // Anything to reset? Transform, velocity, etc.
        transform.position = Vector3.zero;
        transform.rotation = Quaternion.identity;
    }
}
