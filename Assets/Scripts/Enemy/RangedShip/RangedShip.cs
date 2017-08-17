using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[SelectionBase]
public class RangedShip : FiringShip, IEnemy
{

    #region Variables

    // States
    public GameObject firingRangeColliders;
    public GameObject safeDistanceColliders;
    public float offsetY = 3.0f;
    public float sqFireDist;
    public float sqMoveDist;
    #endregion


    #region Unity Life Cycle
    protected override void Start()
    {

        base.Start();
        enemyType = EnemyType.Ranged;
        health = defaultValues.health;

        firingRangeColliders = Utils.FindChildWithTag(gameObject, Constants.FiringRangeColliders);
        safeDistanceColliders = Utils.FindChildWithTag(gameObject, Constants.SafeDistanceColliders);

        // This is the squared distance, used when Player dashes and we need to see if they're too far from enemy
        sqMoveDist = Mathf.Pow(((CapsuleCollider)safeDistanceColliders.GetComponent<Collider>()).radius, 2);
        sqFireDist = Mathf.Pow(((CapsuleCollider)firingRangeColliders.GetComponent<Collider>()).radius, 2);

        // Component state initialization
        moveState = GetComponent<IMoveState>();
        fireState = GetComponent<IFireState>();

        moveState.OnObjectReuse();
        fireState.OnObjectReuse();

    }

    public override void OnObjectReuse()
    {

        Start();
        if (sprite != null)
        {
            Color resetColor = startColor;
            resetColor.a = 1f;
            sprite.material.color = resetColor;
            //Debug.Log("SPRITE RESET!");
        }
    }

    protected override void Update()
    {

        // Use default movement
        //base.Update ();

        // State controls movement (satisfies inheritance impl, with state modularizing control)
        Move();

        // Basic AI - firing logic
        if (Time.time > nextFire)
        {
            Fire();
        }
    }
    #endregion

    #region Game Logic

    public override void Kill()
    {
        // Graphics
        PoolManager.Instance.ReuseObject(explosion, transform.position, transform.rotation);
        float randomVal = UnityEngine.Random.value;
        if (randomVal <= 0.3f)
        {
            GameManager.Singleton.powerupSpawner.SpawnPowerupDrop(transform.position);
        }

        // Kill logic
        base.Kill();        // Bare-bones destroyForReuse()

    }

    public override void Move()
    {
        // Allows movement state to control movement
        moveState.UpdateState();

    }

    public override void Fire()
    {
        fireState.UpdateState();
    }

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.activeSelf && other.gameObject.CompareTag(Constants.PlayerShot))
        {

            Debug.Log(String.Format("RANGED SHIP HIT BY PLAYER {0}", other.name));

            if (other != null)
            {
                other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us
            }

            Damage(GameManager.Singleton.playerDamage);         // We lost health
        }
    }
    #endregion
}
