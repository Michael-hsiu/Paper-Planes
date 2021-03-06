﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EMPWaveShot : PoolObject, IMovement
{

    /** INSTANCE VARS */

    [Header("References")]
    public GameObject shotSpawn;
    public int waveDamage = 10;
    public float speed = 1.0f;
    public float speedMultiplier = 1.0f;
    public float lifeTime = 3.0f;
    public float knockbackForce = 3000.0f;
    public float endTime;

    public GameObject playerHitParticle;

    [Header("FADE_LERP_LOGIC")]
    public float fadeLerpDuration = 1.0f;
    public float fadeLerpRatio;
    public float currFadeLerpTime;

    [Header("RENDERER/FLICKER_DATA")]
    public Color startColor;
    public Renderer sprite;
    public float flickerTime = 0.05f;

    Rigidbody rigidBody;
    IEnumerator destroyAfterLifetimeRoutine;
    IEnumerator fadeRoutine;

    /** INTERFACE METHODS */

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

    public void Move()
    {
        rigidBody.velocity = transform.up * speed * speedMultiplier * Time.deltaTime;      // Propel shot forward
    }


    /** UNITY CALLBACKS */

    // Activate shot countdown when object is enabled
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

    void Awake()
    {
        rigidBody = GetComponent<Rigidbody>();    // Find rigidbody
    }
    protected void Start()
    {

        //rigidBody = GetComponent<Rigidbody>();    // Find rigidbody
        //shotSpawn = transform.parent.gameObject;      // Initially spawned as child of shotSpawn
        //transform.parent = shotSpawn.transform;   // Set the shotSpawn as parent for shots
    }

    protected void FixedUpdate()
    {
        Move();    // Shot starts traveling
    }

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.PlayerTag))
        {
            other.gameObject.GetComponent<Rigidbody>().AddForce(transform.up * knockbackForce);
            other.gameObject.GetComponent<PlayerShip>().Damage(waveDamage);
            StartCoroutine(EnableEMPEffect());
        }
    }

    IEnumerator EnableEMPEffect()
    {
        InputManager.Singleton.GetInputComponent().DisableControls();      // This has a coroutine underneath that re-enables controls
        PoolManager.Instance.ReuseObject(playerHitParticle, transform.position, Quaternion.identity);
        DestroyForReuse();
        yield return null;

    }

    //IEnumerator DestroyAfterLifeTime(float lifeTime)
    //{
    //    yield return new WaitForSeconds(lifeTime);
    //    DestroyForReuse();     // "Destroy" the shot, place in object pool
    //}

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
