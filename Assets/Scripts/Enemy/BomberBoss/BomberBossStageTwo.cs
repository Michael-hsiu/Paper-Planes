using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class BomberBossStageTwo : Ship
{
    #region Variables
    public float rotationFactor;
    public float rushCollisionDuration = 4.0f;
    public float nextAttackTime;
    public bool rushedIntoPlayer = false;

    [Header("RUSH_ATTACK")]
    public int rushDamage = 30;
    public GameObject powerupFab;       // Currently just for Firing Powerup
    public Queue<Powerup> launchedPowerups = new Queue<Powerup>();     // Keep track of launched powerups
    public float powerupLaunchForce = 10.0f;

    [Header("SHARED_BY_STATES")]
    public float initialSlingshotRotationDelay = 1.0f;
    public float secondSlingshotRotationDelay = 1.0f;
    public float rushAttackChargeDelay = 2.0f;
    public float rushAttackDuration = 3.0f;

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
        fireState = GetComponent<IFireState>();
        //moveState.OnObjectReuse();
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {
        StopAllCoroutines();

        // Reset component states
        moveState = GetComponent<IMoveState>();
        fireState = GetComponent<IFireState>();

        moveState.OnObjectReuse();

        // Color / alpha reset
        Color resetColor = startColor;
        resetColor.a = 1f;
        //sprite.material.color = resetColor;

        nextAttackTime = Time.time + Random.Range(2.0f, 4.0f);
        //Debug.Break();
    }

    public override void DestroyForReuse()
    {
        if (rushedIntoPlayerRoutine != null)
        {
            StopCoroutine(rushedIntoPlayerRoutine);     // So we can move again and aren't pinned programmatically to boss pos
            rushedIntoPlayerRoutine = null;

            // Just in case rush coroutine was interrupted
            GameManager.Singleton.playerShip.sprite.material.color = Color.white;
            GameManager.Singleton.playerShip.GetComponent<Collider>().enabled = true;
            GameManager.Singleton.axisInput = true;     // Re-enable movement
            GameManager.Singleton.turnInput = true;
            rushedIntoPlayer = false;

            //Debug.Break();
        }
        base.DestroyForReuse();
    }
    public override void Move()
    {
        moveState.UpdateState();
    }

    protected override void Update()
    {
        Move();
        if (Time.time > nextAttackTime)
        {
            //Debug.Log(Time.time);
            //Debug.Break();
            Attack();
        }
    }

    public void Attack()
    {
        ((BomberBossStageTwoFS)fireState).UseAttack();
    }

    public override void Kill()
    {
        // Graphics
        PoolManager.Instance.ReuseObject(explosion, transform.position, transform.rotation);

        // Powerup spawn chance
        float randomVal = Random.value;
        if (randomVal <= 1f)
        {
            GameManager.Singleton.powerupSpawner.SpawnPowerupDrop(transform.position);
        }
        // Kill logic
        base.Kill();
    }

    // Tells MS to use appropriate movement
    public void ActivateMovementState(float endTime, Direction direction)
    {
        ((BomberBossStageTwoMS)moveState).ActivateMovementState(endTime, direction);
    }

    public void DeactivateMovementState()
    {
        ((BomberBossStageTwoMS)moveState).DeactivateMovementState();
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
            Debug.Log(((BomberBossStageTwoMS)moveState).direction);
            //Debug.Break();
            if (((BomberBossStageTwoMS)moveState).direction == Direction.BOMBER_BOSS_RUSH_FORWARDS_MOVEMENT)
            {
                //GetComponent<Rigidbody>().velocity = Vector3.zero;
                //Vector3 playerDir = (other.transform.position - transform.position).normalized;
                //other.GetComponent<PlayerShip>().GetComponent<Rigidbody>().AddForce(playerDir * 200f, ForceMode.Impulse);
                //other.GetComponent<PlayerShip>().GetComponent<Rigidbody>().AddTorque(other.transform.up * 2000f, ForceMode.Impulse);

                //Debug.Break();

                // OLD sticky joint logic
                //jointContainer.transform.position = collisionCollider.ClosestPointOnBounds(other.transform.position);     // This may not work due to 3D colliders
                //jointContainer.transform.position = other.transform.position;
                //Vector3 newPosition = collisionCollider.ClosestPoint(other.transform.position);
                //newPosition.z = 0f;
                //jointContainer.transform.position = newPosition;     // This may not work due to 3D colliders
                //Debug.Break();
                if (!rushedIntoPlayer)
                {
                    if (rushedIntoPlayerRoutine != null)
                    {
                        StopCoroutine(rushedIntoPlayerRoutine);
                    }
                    rushedIntoPlayerRoutine = null;
                    rushedIntoPlayer = true;
                    rushedIntoPlayerRoutine = RushedIntoPlayer(other.gameObject.GetComponent<PlayerShip>());
                    StartCoroutine(rushedIntoPlayerRoutine);
                }
            }
        }
    }

    // Called when a RUSH_ATK brings us in collision w/ player
    IEnumerator RushedIntoPlayer(PlayerShip playerShip)
    {
        rushedIntoPlayer = true;
        playerShip.Damage(rushDamage);      // Damage the player
        // Stick the player and this object together temporarily
        //var connectionJoint = jointContainer.AddComponent<FixedJoint>();
        //connectionJoint.connectedBody = playerShip.GetComponent<Rigidbody>();

        //GameManager.Singleton.axisInput = false;                            // So we can't move while charging
        //GameManager.Singleton.turnInput = false;        // Can't turn whilst rushing

        playerShip.GetComponent<Collider>().enabled = false;
        playerShip.sprite.material.color = Color.red;

        Vector3 playerDir = (playerShip.transform.position - transform.position).normalized;

        // Remove all firing powerups from player, and represent them as powerups getting knocked out of player at random angles
        while (playerShip.firingPowerupEnabled)
        {
            playerShip.DeactivateFiringPowerup();

            if (playerShip.firingPowerupEnabled)
            {
                GameObject powerup = PoolManager.Instance.ReuseObjectRef(powerupFab, playerShip.transform.position + playerDir * 3f, Quaternion.identity).gameObject;
                Powerup powerupData = powerup.GetComponent<Powerup>();
                launchedPowerups.Enqueue(powerupData);
                powerupData.enabled = false;        // Can't be picked up by player, merely there for visual effect

                // Generate random angle and knockback the powerup fab
                float randomAngle = Random.Range(-75.0f, 75.0f);
                Quaternion desiredRotation = Quaternion.Euler(0, 0, randomAngle);        // Store rotation as an Euler, then Quaternion

                Vector3 launchDirection = desiredRotation * playerDir;
                powerup.GetComponent<Rigidbody>().AddForce(launchDirection * powerupLaunchForce, ForceMode.Impulse);
                powerup.GetComponent<Rigidbody>().AddTorque(playerShip.transform.up * 10f, ForceMode.Impulse);
            }
            yield return null;
        }
        Debug.Log("QUEUE LENGTH: " + launchedPowerups.Count);
        //Debug.Break();
        Vector3 displacement = (playerShip.transform.position - transform.position).normalized * GetComponent<SphereCollider>().radius;

        // Disable controls and programatically push player along
        InputManager.Singleton.GetInputComponent().DisableControls(rushCollisionDuration);

        float endTime = Time.time + rushCollisionDuration;
        while (Time.time < endTime)
        {
            playerShip.transform.position = transform.position + displacement;
            playerShip.sprite.material.color = Color.red;
            yield return null;
        }
        playerShip.GetComponent<Collider>().enabled = true;

        //Debug.Break();
        //yield return new WaitForSeconds(rushCollisionDuration);
        while (launchedPowerups.Count > 0)
        {
            launchedPowerups.Dequeue().GetComponent<Powerup>().enabled = true;
            yield return null;
        }

        //Debug.Break();
        //Destroy(connectionJoint);
        //GameManager.Singleton.axisInput = true;     // Re-enable movement
        //GameManager.Singleton.turnInput = true;

        yield return new WaitForSeconds(0.15f);
        playerShip.sprite.material.color = Color.white;

        rushedIntoPlayer = false;
    }
    #endregion
}
