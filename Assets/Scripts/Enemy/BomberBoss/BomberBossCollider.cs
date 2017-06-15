using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BomberBossCollider : MonoBehaviour
{
    public float knockbackForce = 4000.0f;
    public int knockbackDamage = 40;
    public float collisionCooldown = 2.0f;
    public bool rushRoutineRunning = false;

    public Collider bomberBossCollider;
    public Vector3 velocity;
    public Quaternion playerDirection;
    IEnumerator rushAttackRoutine;

    void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.CompareTag(Constants.PlayerTag))
        {
            if (!rushRoutineRunning)
            {
                //rushAttackRoutine = RushAttackRoutine(other);
                //StartCoroutine(rushAttackRoutine);
                //Vector3 dist = (other.transform.position - transform.position).normalized;
                velocity = bomberBossCollider.GetComponent<Rigidbody>().velocity.normalized;
                other.gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;
                other.gameObject.GetComponent<Rigidbody>().AddForce(velocity * knockbackForce, ForceMode.Impulse);
                StartCoroutine(EnableEMPEffect());
                //Debug.Break();
            }
        }
    }

    IEnumerator EnableEMPEffect()
    {
        rushRoutineRunning = true;

        InputManager.Singleton.GetInputComponent().DisableControls(collisionCooldown);      // This has a coroutine underneath that re-enables controls
        yield return new WaitForSeconds(collisionCooldown);

        rushRoutineRunning = false;

    }

    IEnumerator RushAttackRoutine(Collider other)
    {

        rushRoutineRunning = true;

        // Rotate to face player
        playerDirection = Quaternion.LookRotation(other.transform.position);
        transform.rotation = playerDirection;
        //transform.rotation = Quaternion.identity;

        // Apply knockback and damage to player
        other.gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;
        InputManager.Singleton.GetInputComponent().DisableControls();      // This has a coroutine underneath that re-enables controls
        other.gameObject.GetComponent<Rigidbody>().AddForce(other.gameObject.transform.up * knockbackForce);
        //other.gameObject.GetComponent<PlayerShip>().Damage(knockbackDamage);

        // Cooldown, no more collisions
        yield return new WaitForSeconds(collisionCooldown);
        //yield return null;
        rushRoutineRunning = false;
    }
}
