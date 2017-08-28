using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Mine : PoolObject
{

    public GameObject explosion;
    public float rotationFactor = 150.0f;
    public int explosionDmg = 20;
    public float dmgRange = 4.0f;

    [Header("AUDIO")]
    public AudioSource audioSource;
    public AudioClip explosionAudioClip;

    private IEnumerator cr;
    IEnumerator destroyAfterAudioRoutine;

    void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }

    void OnEnable()
    {
        GetComponent<Rigidbody>().velocity = Vector3.zero;
        cr = CircularRotate();
        StartCoroutine(cr);
    }

    // For explosions triggered by contact
    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.EnemyTag))
        {
            Explode();
        }
    }

    void DamageArea()
    {
        // Get all colliders in area
        Collider[] hitColliders = Physics.OverlapSphere(transform.position, dmgRange);
        List<GameObject> targets = (from c in hitColliders select c.gameObject).ToList();

        foreach (GameObject go in targets)
        {
            IDamageable<int> i = go.GetComponent(typeof(IDamageable<int>)) as IDamageable<int>;
            if (i != null && go.CompareTag(Constants.EnemyTag))
            {
                i.Damage(explosionDmg);
            }
        }
    }

    public void Explode()
    {
        StopCoroutine(cr);
        DamageArea();   // Deal AoE dmg
        PoolManager.Instance.ReuseObject(explosion, transform.position, Quaternion.identity);

        if (GameManager.Singleton.sfxEnabled)
        {
            if (Utils.SquaredEuclideanDistance(GameManager.Singleton.playerShip.gameObject, gameObject) < 625.0f)
            {
                audioSource.PlayOneShot(explosionAudioClip, 0.3f);
                Debug.Log("AUDIO_PLAYING: " + audioSource.isPlaying);
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
        //DestroyForReuse();      // Recycle this fab
    }

    IEnumerator CircularRotate()
    {
        while (true)
        {
            transform.Rotate(Vector3.forward * rotationFactor * Time.deltaTime);    // Enemy normally rotates in circle
                                                                                    //GetComponent<Rigidbody> ().AddForce (transform.forward * 100);		// Outwards radiating movement
                                                                                    //Debug.Log(transform.forward);
            yield return null;
        }
    }

    // Play sound effect, then explode/recycle
    IEnumerator DestroyAfterAudioPlaysRoutine()
    {
        transform.position = new Vector3(200, 0, 0);    // Appears to disappear
        yield return new WaitForSeconds(explosionAudioClip.length);
        DestroyForReuse();
    }
}
