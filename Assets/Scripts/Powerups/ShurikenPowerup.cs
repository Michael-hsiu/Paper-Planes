using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShurikenPowerup : Powerup
{

    public GameObject shuriken;
    public float thrustForce = 500f;
    //public GameObject player;
    //protected bool isVisible;
    public float shurikenLifeTime = 10.0f;

    private IEnumerator countdownRoutine;
    private ShurikenObj shurikenObj;

    private SpecialWeapons id = SpecialWeapons.SHURIKEN;

    /*
        void Start() {
            player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
        }*/

    //public override void OnTriggerEnter(Collider other)
    //{

    //    if (other.gameObject.CompareTag(Constants.PlayerTag))
    //    {
    //        // Do weapons logic; spawn things
    //        if (pickupParticlePrefab != null)
    //        {
    //            GameManager.Singleton.numPowerupsCollected += 1;
    //            PoolManager.Instance.ReuseObject(pickupParticlePrefab, transform.position, Quaternion.identity);
    //        }
    //        ActivatePowerup();
    //        //SpawnShuriken();
    //        //HideInScene();
    //    }
    //}

    public override void ActivatePowerup()
    {
        SpawnShuriken();
        base.ActivatePowerup();
    }

    void SpawnShuriken()
    {

        // spawns, radius, rotations, explosions
        //Vector3 pos = player.transform.position;
        Vector3 pos = GameManager.Singleton.shurikenShotSpawn.transform.position;

        //Debug.Log ("PLAYER POS: " + pos);
        //Debug.Log ("PLAYER FORWARD: " + player.transform.forward);

        ShurikenObj s = (ShurikenObj)PoolManager.Instance.ReuseObjectRef(shuriken, pos, Quaternion.identity);

        s.GetComponent<Rigidbody>().AddForce(player.transform.up * thrustForce);        // Outwards radiating movement, using position relative to y-axis of player

        countdownRoutine = BeginCountdown(shurikenLifeTime);
        StartCoroutine(countdownRoutine);     // Begin detonation countdown
    }

    IEnumerator BeginCountdown(float lifeTime)
    {
        yield return new WaitForSeconds(lifeTime);

        // Destroy for reuse by pool
        if (shurikenObj != null)
        {
            shurikenObj.FinishExistence();
        }
    }

    //void HideInScene()
    //{
    //    SetVisibility(false);
    //}

    //void SetVisibility(bool isVisible)
    //{
    //    this.isVisible = isVisible;
    //    gameObject.GetComponent<Renderer>().enabled = this.isVisible;
    //    gameObject.GetComponent<Collider>().enabled = this.isVisible;

    //}

    //void Update()
    //{
    //    //Debug.Log ("LOCAL EULER Z: " + -1 * (360 - player.transform.localEulerAngles.z));
    //}
}
