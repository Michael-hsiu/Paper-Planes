using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnEnd : PoolObject
{
    public ParticleSystem targetParticleSystem;
    public ParticleSystem.MainModule particleSystemMainModule;
    public float destroyDelay;      // Short delay to make sure particle plays fully before being destroyed

    IEnumerator destroyAfterPlay;

    void Awake()
    {
        targetParticleSystem = GetComponent<ParticleSystem>();
        particleSystemMainModule = targetParticleSystem.main;     // Duration accessed through main module
    }

    public override void OnObjectReuse()
    {
        targetParticleSystem.Play();
        if (destroyAfterPlay != null)
        {
            StopCoroutine(destroyAfterPlay);
            destroyAfterPlay = null;
        }
        destroyAfterPlay = DestroyAfterPlay();
        StartCoroutine(destroyAfterPlay);
    }

    IEnumerator DestroyAfterPlay()
    {
        yield return new WaitForSeconds(particleSystemMainModule.duration + destroyDelay);
        targetParticleSystem.Stop();
        DestroyForReuse();
    }
}
