using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Shot : PoolObject, IMovement
{

    /** INSTANCE VARS */

    [Header("References")]
    public GameObject shotSpawn;
    public int shotDamage = 10;
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

    float nonFadeTime;      // Used in coroutine
    WaitForSeconds existsInWorldDurWaitForSec;
    WaitForSeconds nonFadeTimeWaitForSec;
    WaitForSeconds fadeLerpWaitForSec;
    Rigidbody rigidBody;
    IEnumerator destroyAfterLifetimeRoutine;
    IEnumerator fadeRoutine;

    /** INTERFACE METHODS */

    public override void OnObjectReuse()
    {
        rigidBody.velocity = Vector3.zero;      // Reset velocity

        existsInWorldDurWaitForSec = new WaitForSeconds(lifeTime);
        fadeLerpWaitForSec = new WaitForSeconds(fadeLerpDuration);
        nonFadeTime = lifeTime - fadeLerpDuration;
        nonFadeTimeWaitForSec = new WaitForSeconds(nonFadeTime);

        if (sprite != null)
        {
            Color rawStartColor = sprite.material.color;
            rawStartColor.a = 1f;
            startColor = rawStartColor;
            sprite.material.color = startColor;
            //Debug.Break();
        }
        if (sprite == null)
        {
            try
            {
                sprite = Utils.FindChildWithTag(gameObject, "Sprite").GetComponent<Renderer>();
            }
            catch (Exception exception)
            {
                //Debug.Log("NO SPRITE FOR SHOT!");
            }
        }
        try
        {
            Color rawStartColor = sprite.material.color;
            rawStartColor.a = 1f;
            startColor = rawStartColor;
        }
        catch (Exception exception)
        {
            //Debug.Log("STILL NO SPRITE FOR SHOT!");
        }


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

    // Activate shot countdown when object is enabled
    //void OnEnable()
    //{
    //    rigidBody.velocity = Vector3.zero;      // Reset velocity=
    //    if (sprite == null)
    //    {
    //        try
    //        {
    //            sprite = Utils.FindChildWithTag(gameObject, "Sprite").GetComponent<Renderer>();
    //        }
    //        catch (Exception exception)
    //        {
    //            //Debug.Log("NO SPRITE FOR SHOT!");
    //        }
    //    }
    //    try
    //    {
    //        Color rawStartColor = sprite.material.color;
    //        rawStartColor.a = 1f;
    //        startColor = rawStartColor;
    //    }
    //    catch (Exception exception)
    //    {
    //        //Debug.Log("STILL NO SPRITE FOR SHOT!");
    //    }


    //    if (destroyAfterLifetimeRoutine != null)
    //    {
    //        StopCoroutine(destroyAfterLifetimeRoutine);
    //        destroyAfterLifetimeRoutine = null;
    //    }
    //    if (fadeRoutine != null)
    //    {
    //        StopCoroutine(fadeRoutine);
    //        fadeRoutine = null;
    //    }
    //    destroyAfterLifetimeRoutine = DestroyAfterLifeTime();
    //    StartCoroutine(destroyAfterLifetimeRoutine);
    //}

    void Awake()
    {

        rigidBody = GetComponent<Rigidbody>(); // Find rigidbody
                                               //shotSpawn = transform.parent.gameObject;		// Initially spawned as child of shotSpawn
                                               //transform.parent = shotSpawn.transform;	// Set the shotSpawn as parent for shots

    }
    //public override void Start()
    //{
    //    existsInWorldDurWaitForSec = new WaitForSeconds(lifeTime);
    //    fadeLerpWaitForSec = new WaitForSeconds(fadeLerpDuration);
    //    nonFadeTime = lifeTime - fadeLerpDuration;
    //    nonFadeTimeWaitForSec = new WaitForSeconds(nonFadeTime);

    //    base.Start();
    //}

    protected void FixedUpdate()
    {
        Move(); // Shot starts traveling
    }

    public void Move()
    {
        rigidBody.velocity = transform.up * speed * speedMultiplier * Time.deltaTime;      // Propel shot forward
    }

    //IEnumerator DestroyAfterLifeTime(float lifeTime)
    //{
    //    yield return new WaitForSeconds(lifeTime);
    //    DestroyForReuse();      // "Destroy" the shot, place in object pool
    //}

    IEnumerator DestroyAfterLifeTime()
    {
        // Track total lifetime
        endTime = Time.time + lifeTime;

        // Start moving
        //nonFadeTime = lifeTime - fadeLerpDuration;
        yield return nonFadeTimeWaitForSec;

        // Start fading
        if (fadeRoutine != null)
        {
            StopCoroutine(fadeRoutine);
            fadeRoutine = null;
        }
        fadeRoutine = FadeRoutine();
        StartCoroutine(fadeRoutine);

        yield return fadeLerpWaitForSec;

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

            fadeLerpRatio += (Time.deltaTime / fadeLerpDuration);
            yield return null;
        }
    }

}