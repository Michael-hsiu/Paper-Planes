using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

[SelectionBase]
public class PawnShip : Ship
{

    public int touchDamage = 10;

    #region Unity Life Cycle
    protected override void Start()
    {
        base.Start();
        enemyType = EnemyType.Pawn;
        moveState = GetComponent<IMoveState>();
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {

        moveState = GetComponent<IMoveState>();
        moveState.OnObjectReuse();

    }

    protected override void Update()
    {
        //base.Update ();
        Move();
    }

    #endregion

    #region Game Logic

    public override void Kill()
    {
        // Graphics
        Instantiate(explosion, transform.position, transform.rotation);

        // Powerup spawn chance
        float randomVal = UnityEngine.Random.value;
        if (randomVal <= 0.2f)
        {
            GameManager.Singleton.powerupSpawner.SpawnPowerupDrop(this.transform.position);
        }

        // Kill logic
        base.Kill();

    }

    public override void Move()
    {
        // Allows movement state to control movement
        moveState.UpdateState();
    }

    void OnTriggerEnter(Collider other)
    {

        // Handle collisions with player shots
        if (other.gameObject.CompareTag(Constants.PlayerShot))
        {

            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us
            Damage(GameManager.Singleton.playerDamage);         // We lost health

            // Handle collisions with player
        }
        else if (other.gameObject.CompareTag(Constants.PlayerTag))
        {

            other.gameObject.GetComponent<PlayerShip>().Damage(touchDamage);

            // Quick fix to prevent pt increase from a pawn suicide
            int tempPts = enemyPoints;
            enemyPoints = 0;
            Kill();     // Don't spawn powerup; also shouldn't record pts; should record # still alive!
            enemyPoints = tempPts;
        }
    }

    #endregion
}
