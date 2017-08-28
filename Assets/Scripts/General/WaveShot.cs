using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaveShot : PoolObject, IMovement
{

    [Header("References")]
    public GameObject shotSpawn;
    public GameObject debugExplosion;
    public int waveShotDamage = 30;
    public float speed = 1.0f;
    public float speedMultiplier = 1.0f;
    public float lifeTime = 3.0f;
    public float endTime;

    [Header("FADE_LERP_LOGIC")]
    public float fadeLerpDuration = 1.0f;
    public float fadeLerpRatio;
    public float currFadeLerpTime;

    [Header("RENDERER/FLICKER_DATA")]
    public Color startColor;
    public Renderer sprite;
    public float flickerTime = 0.05f;

    [Header("AUDIO")]
    public AudioSource audioSource;
    public AudioClip sliceAudioClip;

    Rigidbody rigidBody;
    IEnumerator destroyAfterLifetimeRoutine;
    IEnumerator fadeRoutine;

    public override void OnObjectReuse()
    {
        if (sprite != null)
        {
            Color rawStartColor = sprite.material.color;
            rawStartColor.a = 1f;
            startColor = rawStartColor;
            sprite.material.color = startColor;
            //Debug.Break();
        }
    }

    void OnEnable()
    {
        rigidBody.velocity = Vector3.zero;      // Reset velocity=
        if (sprite == null)
        {
            sprite = Utils.FindChildWithTag(gameObject, "Sprite").GetComponent<Renderer>();
        }
        Color rawStartColor = sprite.material.color;
        rawStartColor.a = 1f;
        startColor = rawStartColor;

        if (destroyAfterLifetimeRoutine != null)
        {
            StopCoroutine(destroyAfterLifetimeRoutine);
            destroyAfterLifetimeRoutine = null;
        }
        if (fadeRoutine != null)
        {
            StopCoroutine(fadeRoutine);
            fadeRoutine = null;
        }
        destroyAfterLifetimeRoutine = DestroyAfterLifeTime();
        StartCoroutine(destroyAfterLifetimeRoutine);
    }

    public void Move()
    {
        rigidBody.velocity = transform.up * speed * speedMultiplier * Time.deltaTime;      // Propel shot forward
    }

    // Activate shot countdown when object is enabled
    //void OnEnable()
    //{
    //    StartCoroutine(DestroyAfterLifeTime(lifeTime));     // Delay, then "destroy" aka hide
    //}

    void Awake()
    {
        rigidBody = GetComponent<Rigidbody>();    // Find rigidbody
        audioSource = GetComponent<AudioSource>();
    }
    protected void Start()
    {

        if (sprite == null)
        {
            sprite = Utils.FindChildWithTag(gameObject, "Sprite").GetComponent<Renderer>();
            startColor = sprite.material.color;
        }
        //shotSpawn = transform.parent.gameObject;		// Initially spawned as child of shotSpawn
        //transform.parent = shotSpawn.transform;	// Set the shotSpawn as parent for shots

    }

    protected void FixedUpdate()
    {
        Move(); // Shot starts traveling
    }

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.EnemyTag))
        {
            IDamageable<int> idamageable = other.gameObject.GetComponent<IDamageable<int>>();
            if (idamageable != null)
            {
                idamageable.Damage(waveShotDamage);

                if (GameManager.Singleton.sfxEnabled)
                {
                    if (Utils.SquaredEuclideanDistance(GameManager.Singleton.playerShip.gameObject, gameObject) < 625.0f)
                    {
                        audioSource.PlayOneShot(sliceAudioClip, 0.3f);
                    }
                }
                PoolManager.Instance.ReuseObject(debugExplosion, transform.position, Quaternion.identity);       // Visual indication that we hit an enemy
                //Debug.Log("ENEMY HIT BY WAVE!");
            }
        }
    }

    IEnumerator DestroyAfterLifeTime()
    {
        // Track total lifetime
        endTime = Time.time + lifeTime;

        // Start moving
        float nonFadeTime = lifeTime - fadeLerpDuration;
        yield return new WaitForSeconds(nonFadeTime);

        // Start fading
        if (fadeRoutine != null)
        {
            StopCoroutine(fadeRoutine);
            fadeRoutine = null;
        }
        fadeRoutine = FadeRoutine();
        StartCoroutine(fadeRoutine);

        yield return new WaitForSeconds(fadeLerpDuration);

        // Destroy
        DestroyForReuse();      // "Destroy" the shot, place in object pool

    }

    IEnumerator FadeRoutine()
    {
        fadeLerpRatio = 0.0f;
        Color initialTextColor = startColor;
        initialTextColor.a = 1f;
        sprite.material.color = initialTextColor;
        //Debug.Break();
        while (fadeLerpRatio < 1.0f)
        {
            // Gradually fade alpha
            // Maybe add exponential modifier?
            Color currColor = sprite.material.color;
            currColor.a = Mathf.Lerp(1f, 0f, fadeLerpRatio);
            sprite.material.color = currColor;

            //Debug.Log("WAVESHOT ALPHA: " + currColor.a);
            fadeLerpRatio += (Time.deltaTime / fadeLerpDuration);
            yield return null;
        }
    }
}