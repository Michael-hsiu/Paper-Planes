using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class BomberBoss : Ship, IEnemy
{

    /** 
		Spec:

        Movement:
		- Slowly moves to player.
		- Background gear slowly rotates when not attacking.    
		- Eye slowly moves towards player.

        Attacking:
        - Rush attack.
        - Fire Bombers like Cannon Balls attack.
        - Bullet Hell attack.
        - Explodes when killed attack.

		 */

    #region Variables
    public float nextAttackTime = 3.0f;     // When we start attacking after spawning

    #endregion


    #region Unity Life Cycle

    protected override void Start()
    {

        base.Start();
        moveState = GetComponent<IMoveState>();
        fireState = GetComponent<IFireState>();

        //nextAtkTime = Time.time + Random.Range(2.0f, 5.0f);
    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {

        moveState = GetComponent<IMoveState>();
        fireState = GetComponent<IFireState>();

        moveState.OnObjectReuse();
        fireState.OnObjectReuse();
    }

    #endregion

    #region Game Logic

    protected override void Update()
    {

        Move();

        if (Time.time > nextAttackTime)
        {
            Attack();
        }
    }

    public override void Move()
    {
        moveState.UpdateState();
    }

    public void Attack()
    {
        ((SniperBossFS)fireState).UseAttack();
    }

    // Tells MS to use appropriate movement
    public void ActivateMovementState(float endTime, Direction direction)
    {
        ((SniperBossMS)moveState).ActivateMovementState(endTime, direction);

    }

    public void DeactivateMovementState()
    {
        ((SniperBossMS)moveState).DeactivateMovementState();
    }

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.activeSelf && other.gameObject.CompareTag(Constants.PlayerShot))
        {

            other.gameObject.GetComponent<PoolObject>().DestroyForReuse();      // Destroy the shot that hit us
            Damage(GameManager.Singleton.playerDamage);         // We lost health

        }
    }

    #endregion

}
