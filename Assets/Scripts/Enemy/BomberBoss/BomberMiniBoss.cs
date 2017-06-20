using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class BomberMiniBoss : Ship
{

    #region Variables
    public float rotationFactor;
    public bool rushedIntoPlayer = false;
    public GameObject jointContainer;
    public Collider collider;

    IEnumerator rushedIntoPlayerRoutine;
    #endregion

    #region Unity Life Cycle
    protected override void Start()
    {

        base.Start();
        enemyType = EnemyType.Boss;
        collider = GetComponent<Collider>();

        // Reset values from defaultValues scrObj
        health = defaultValues.health;
        rotationSpeed = defaultValues.rotationSpeed;
        rotationFactor = defaultValues.rotationFactor;

        // Also set rotation to match the just-destroyed Stage 1 boss!
        sprite.transform.localRotation = defaultValues.spriteInitialRotation;

        // Component state initialization
        moveState = GetComponent<IMoveState>();
        //moveState.OnObjectReuse();
    }

    public override void Move()
    {

    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {
        StopAllCoroutines();
        Start();

        // Color / alpha reset
        Color resetColor = startColor;
        resetColor.a = 1f;
        sprite.material.color = resetColor;
    }
    #endregion



    #region Game Logic
    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.activeSelf && other.gameObject.CompareTag(Constants.PlayerShot))
        {

            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us
            Damage(GameManager.Singleton.playerDamage);         // We lost health

        }
        else if (other.gameObject.CompareTag(Constants.PlayerTag))
        {
            if (!rushedIntoPlayer)
            {
                //jointContainer.transform.position = collider.ClosestPointOnBounds(other.transform.position);
                jointContainer.transform.position = other.transform.position;

                rushedIntoPlayerRoutine = RushedIntoPlayer(other.gameObject.GetComponent<PlayerShip>());
                StartCoroutine(rushedIntoPlayerRoutine);
            }
        }
    }

    // Called when a RUSH_ATK brings us in collision w/ player
    IEnumerator RushedIntoPlayer(PlayerShip player)
    {
        rushedIntoPlayer = true;
        // Stick the player and this object together temporarily
        var connectionJoint = jointContainer.AddComponent<FixedJoint>();
        connectionJoint.connectedBody = player.GetComponent<Rigidbody>();

        GameManager.Singleton.axisInput = false;                            // So we can't move while charging
        GameManager.Singleton.turnInput = false;        // Can't turn whilst rushing

        player.sprite.material.color = Color.red;
        yield return new WaitForSeconds(4f);
        player.sprite.material.color = Color.white;

        //Debug.Break();
        Destroy(connectionJoint);
        GameManager.Singleton.axisInput = true;     // Re-enable movement
        GameManager.Singleton.turnInput = true;

        rushedIntoPlayer = false;
    }

    #endregion
}
