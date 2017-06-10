using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellShotSpawn : ShotSpawn
{

    public GameObject bulletHellProjectile;
    public float rotationAngle;
    public float rotationSpeed;

    public float delayBtwnShots;

    IEnumerator bulletHellRoutine;
    //public GameObject targetRotation;   // Reference rotation

    public override void CreateShot(bool isFiringBuffed = false)
    {

        // The parent should be the player or enemy sprite
        //targetRotation = transform.parent.parent.gameObject;        

        // Rotate shotSpawn relative to parent Player
        //transform.localRotation = targetRotation.transform.rotation;    

        PoolManager.Instance.ReuseObject(bulletHellProjectile, transform.position, transform.rotation);
    }

    // Make this into a time-controlled coroutine
    IEnumerator RotateOverTime(float endTime)
    {
        rotationAngle = Random.Range(-90.0f, 90.0f);

        while (Time.time < endTime)
        {
            //Quaternion desiredRotation = Quaternion.Euler(0, 0, 0) /* Quaternion.Inverse(transform.parent.rotation)*/;        // Store rotation as an Euler, then Quaternion
            Quaternion desiredRotation = Quaternion.Euler(0, 0, rotationAngle);        // Store rotation as an Euler, then Quaternion


            // Rotate as long as we're within X degrees of desiredRotation
            //while (true) {
            //    transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, Time.deltaTime * rotationSpeed);
            //    //transform.rotation = transform.rotation * Quaternion.AngleAxis(0.0f, Vector3.up);
            //    yield return null;
            //}
            while (Quaternion.Angle(transform.localRotation, desiredRotation) > 3.0f)
            {
                transform.rotation = Quaternion.RotateTowards(transform.localRotation, desiredRotation, Time.deltaTime * rotationSpeed);
                yield return null;
            }
            //Debug.Break();
            // Generate 2 possible new target angles. Choose one randomly and clamp btwn 0 and 360 degrees.
            float lowerRotationAngle = rotationAngle - Random.Range(20.0f, 60.0f);
            float higherRotationAngle = rotationAngle + Random.Range(20.0f, 60.0f);

            float chosenAngle = (Random.value <= 0.5f) ? lowerRotationAngle : higherRotationAngle;

            rotationAngle = Mathf.Clamp(chosenAngle, -90.0f, 90.0f);

            yield return null;
            //Debug.Break();

        }
    }

    IEnumerator UseBulletHellAttackRoutine(float endTime)
    {
        // Start the rotation routine
        StartCoroutine(RotateOverTime(endTime));
        while (Time.time < endTime)
        {
            // Fire a shot, rotate, and wait btwn shots
            CreateShot();
            yield return new WaitForSeconds(delayBtwnShots);
        }
    }

    // Called from FS
    public void UseBulletHellAttack(float endTime)
    {
        //if (bulletHellRoutine == null) { StopCoroutine(bulletHellRoutine); }
        bulletHellRoutine = UseBulletHellAttackRoutine(endTime);
        StartCoroutine(bulletHellRoutine);
        //CreateShot();
    }
}