using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TripMineWeapon : Powerup
{

    public GameObject mine;

    public float mineSeparationAngle = 72.0f;       // Angle btwn mines
    public float radius = 2.5f;
    public float mineFuse = 19.0f;
    public float explosionForce = 30.0f;
    public List<Mine> mines = new List<Mine>();
    //protected bool isVisible;
    //public GameObject pickupParticlePrefab;     // Particle system that plays on particle pickup

    private IEnumerator cr;
    //private GameObject player;

    private SpecialWeapons id = SpecialWeapons.TRIPMINES;


    //public override void Start()
    //{
    //    player = GameObject.FindGameObjectWithTag(Constants.PlayerTag);     // Get Player at runtime	
    //}

    //void ActivateWeapon(string id)
    //{
    //    WeaponsManager.Instance.ActivateWeapon(id); // Logic should be flipped
    //}

    //void OnTriggerEnter(Collider other)
    //{

    //    if (other.gameObject.CompareTag(Constants.PlayerTag))
    //    {
    //        if (pickupParticlePrefab != null)
    //        {
    //            GameManager.Singleton.numPowerupsCollected += 1;
    //            PoolManager.Instance.ReuseObject(pickupParticlePrefab, transform.position, Quaternion.identity);
    //        }
    //        // Do weapons logic; spawn things
    //        SpawnMines();
    //        HideInScene();
    //    }
    //}

    public override void ActivatePowerup()
    {
        SpawnMines();
        base.ActivatePowerup();
    }

    void SpawnMines()
    {
        // spawns, radius, rotations, explosions
        Vector3 pos = player.transform.position;
        float angle = 0f;
        float angleTwo = 0f;
        while (angle < 360.0f)
        {

            float newX = pos.x + radius * Mathf.Sin(angle * Mathf.Deg2Rad);
            float newY = pos.y + radius * Mathf.Cos(angle * Mathf.Deg2Rad);
            float newZ = pos.z;

            Vector3 newPos = new Vector3(newX, newY, newZ);
            Mine mine1 = (Mine)PoolManager.Instance.ReuseObjectRef(mine, newPos, Quaternion.identity);

            mine1.GetComponent<Rigidbody>().AddForce(new Vector3(radius * Mathf.Sin(angle * Mathf.Deg2Rad), radius * Mathf.Cos(angle * Mathf.Deg2Rad), pos.z) * explosionForce);        // Outwards radiating movement, using position relative to world origin

            mines.Add(mine1);       // Add mines to a list

            // Logic for Super edition
            if (isSuperPowerup && angleTwo < 360.0f)
            {
                float newXOuter = pos.x + radius * Mathf.Sin(angleTwo * Mathf.Deg2Rad);
                float newYOuter = pos.y + radius * Mathf.Cos(angleTwo * Mathf.Deg2Rad);
                float newZOuter = pos.z;
                Vector3 newPosOuter = new Vector3(newXOuter, newYOuter, newZOuter);

                // Outer ring of mines
                //Mine mine2 = (Mine)PoolManager.Instance.ReuseObjectRef(mine, newPosOuter, Quaternion.identity);
                //mine2.GetComponent<Rigidbody>().AddForce(new Vector3(radius * Mathf.Sin(angleTwo * Mathf.Deg2Rad), radius * Mathf.Cos(angleTwo * Mathf.Deg2Rad), newPosOuter.z) * explosionForce * 2f);        // Outwards radiating movement, using position relative to world origin

                //mines.Add(mine2);       // Add mines to a list
                angleTwo += 72.0f;
            }
            angle += mineSeparationAngle;     // Spawn in 5 times (or whatever appropriate for angle)
        }
        cr = BeginCountdown(mineFuse);
        StartCoroutine(cr);     // Begin detonation countdown
    }

    IEnumerator BeginCountdown(float mineFuse)
    {
        yield return new WaitForSeconds(mineFuse);

        // Destroy for reuse by pool
        foreach (Mine m in mines)
        {
            if (m != null)
            {
                // Need to object pool explosions too
                if (m.isActiveAndEnabled)
                {
                    m.Explode();
                }
            }
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
}
