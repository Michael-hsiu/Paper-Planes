using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class BomberBossStageTwo : Ship
{
    #region Variables
    public float rotationFactor;
    public float rushCollisionDuration = 4.0f;
    public bool rushedIntoPlayer = false;
    public GameObject jointContainer;
    public SphereCollider collisionCollider;              // Used for RUSH_ATTACK and SLINGSHOT_ATTACK

    IEnumerator rushedIntoPlayerRoutine;
    #endregion

    #region Unity Life Cycle
    protected override void Start()
    {

        base.Start();
        enemyType = EnemyType.Boss;
        collisionCollider = GetComponent<SphereCollider>();

        // Reset values from defaultValues scrObj
        health = defaultValues.health;
        rotationSpeed = defaultValues.rotationSpeed;
        rotationFactor = defaultValues.rotationFactor;

        // Also set rotation to match the just-destroyed Stage 1 boss!
        //sprite.transform.localRotation = defaultValues.spriteInitialRotation;

        // Component state initialization
        moveState = GetComponent<IMoveState>();
        //moveState.OnObjectReuse();
    }

    public override void Move()
    {
        moveState.UpdateState();
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {
        StopAllCoroutines();
        Start();

        // Reset component states
        moveState.OnObjectReuse();

        // Color / alpha reset
        Color resetColor = startColor;
        resetColor.a = 1f;
        sprite.material.color = resetColor;
    }
    #endregion



    #region Game Logic

    void OnTriggerEnter(Collider other)
    {

        //if (other.gameObject.activeSelf && other.gameObject.CompareTag(Constants.PlayerShot))
        //{

        //    other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us
        //    Damage(GameManager.Singleton.playerDamage);         // We lost health

        //}
        //else if (other.gameObject.CompareTag(Constants.PlayerTag))
        //{
        //    if (!rushedIntoPlayer && jointContainer != null)
        //    {
        //        //jointContainer.transform.position = collisionCollider.ClosestPointOnBounds(other.transform.position);     // This may not work due to 3D colliders
        //        //jointContainer.transform.position = other.transform.position;
        //        Vector3 newPosition = collisionCollider.ClosestPoint(other.transform.position);
        //        newPosition.z = 0f;
        //        jointContainer.transform.position = newPosition;     // This may not work due to 3D colliders
        //        //Debug.Break();

        //        rushedIntoPlayerRoutine = RushedIntoPlayer(other.gameObject.GetComponent<PlayerShip>());
        //        StartCoroutine(rushedIntoPlayerRoutine);
        //    }
        //}
    }

    // Called when a RUSH_ATK brings us in collision w/ player
    //IEnumerator RushedIntoPlayer(PlayerShip playerShip)
    //{

    //    rushedIntoPlayer = true;

    //    // Stick the player and this object together temporarily
    //    var connectionJoint = jointContainer.AddComponent<FixedJoint>();
    //    connectionJoint.connectedBody = playerShip.GetComponent<Rigidbody>();

    //    GameManager.Singleton.axisInput = false;                            // So we can't move while charging
    //    GameManager.Singleton.turnInput = false;        // Can't turn whilst rushing

    //    playerShip.sprite.material.color = Color.red;
    //    yield return new WaitForSeconds(rushCollisionDuration);
    //    playerShip.sprite.material.color = Color.white;

    //    //Debug.Break();
    //    Destroy(connectionJoint);
    //    GameManager.Singleton.axisInput = true;     // Re-enable movement
    //    GameManager.Singleton.turnInput = true;

    //    rushedIntoPlayer = false;
    //}

    #endregion
}
