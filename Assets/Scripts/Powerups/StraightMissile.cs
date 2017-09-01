using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class StraightMissile : PoolObject
{

    public float thrust;        // Force multiplier
    public int missileDmg = 20; // Damage missile does to player
    public GameObject explosion;
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
    public AudioClip explosionAudioClip;


    Rigidbody rigidBody;
    IEnumerator destroyAfterLifetimeRoutine;
    IEnumerator destroyAfterAudioRoutine;
    IEnumerator fadeRoutine;
    // Reset speed on reuse
    // Give a speed boost on use

    void Awake()
    {
        audioSource = GetComponent<AudioSource>();
        rigidBody = GetComponent<Rigidbody>();    // Find rigidbody
    }

    public override void OnObjectReuse()
    {
        // Anything to reset? Transform, velocity, etc.
        if (sprite != null)
        {
            Color rawStartColor = sprite.material.color;
            rawStartColor.a = 1f;
            startColor = rawStartColor;
            sprite.material.color = startColor;
        }
        rigidBody.velocity = Vector3.zero;
        rigidBody.AddForce(transform.up * thrust);
        //Debug.Log("STRAIGHT MISSILE RESET");
    }

    void OnEnable()
    {
        rigidBody.velocity = Vector3.zero;      // Reset velocity=
        if (sprite == null)
        {
            try
            {
                sprite = Utils.FindChildWithTag(gameObject, "Sprite").GetComponent<Renderer>();
            }
            catch (Exception exception)
            {
                Debug.Log("NO SPRITE FOR EMPWAVE!");
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
            Debug.Log("STILL NO SPRITE FOR EMPWAVE!");
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

    // For explosions triggered by contact
    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.PlayerTag))
        {

            if (other.gameObject != null)
            {

                if (other.gameObject.GetComponent<IDamageable<int>>() != null)
                {

                    if (((Ship)other.GetComponent<PlayerShip>()) != null)
                    {
                        ((Ship)other.GetComponent<PlayerShip>()).Damage(missileDmg);
                    }

                    PoolManager.Instance.ReuseObject(explosion, transform.position, Quaternion.identity);
                    //Debug.Log ("STRAIGHT MISSILE EXPLODED!");

                    if (GameManager.Singleton.sfxEnabled)
                    {
                        if (Utils.SquaredEuclideanDistance(GameManager.Singleton.playerShip.gameObject, gameObject) < 625.0f)
                        {
                            audioSource.PlayOneShot(explosionAudioClip, 0.3f);
                            //Debug.Log("AUDIO_PLAYING: " + audioSource.isPlaying);
                            //Debug.Break();
                        }
                    }
                    if (destroyAfterAudioRoutine != null)
                    {
                        StopCoroutine(destroyAfterAudioRoutine);
                        destroyAfterAudioRoutine = null;
                    }
                    destroyAfterAudioRoutine = DestroyAfterAudioPlaysRoutine();
                    StartCoroutine(destroyAfterAudioRoutine);
                    //DestroyForReuse();      // We explode after one hit
                }
            }
        }
    }

    // Play sound effect, then explode/recycle
    IEnumerator DestroyAfterAudioPlaysRoutine()
    {
        transform.position = new Vector3(200, 0, 0);    // Appears to disappear
        yield return new WaitForSeconds(explosionAudioClip.length);
        DestroyForReuse();
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
