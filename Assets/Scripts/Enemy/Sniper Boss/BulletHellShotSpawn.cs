using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellShotSpawn : ShotSpawn
{

    public GameObject bulletHellProjectile;
    public float rotationAngle;
    public float rotationSpeed;
    public float numRotations;
    public bool isFirstRotation = true;
    public float rotAngle = 90.0f;



    public float delayBtwnShots;
    //public Vector3 targetRot;

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
        //rotationAngle = Random.Range(-90.0f, 90.0f);
        numRotations = 0;

        while (true)
        {

            // Switch direction after first rotation
            if (!isFirstRotation)
            {
                if (numRotations == 0)
                {
                    rotAngle = 178.0f;
                }
                else
                {
                    rotAngle = rotAngle * -1;
                    Debug.Log("ROT_ANGLE #" + numRotations + ": " + rotAngle);
                    //rotationSpeed *= -1;
                    //Debug.Break();
                }
                numRotations += 1;
            }

            if (isFirstRotation)
            {
                isFirstRotation = false;
            }


            Quaternion desiredRotation = transform.rotation * Quaternion.AngleAxis(rotAngle, Vector3.forward);
            while (Quaternion.Angle(transform.rotation, desiredRotation) > Mathf.Epsilon)
            {
                transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, Time.deltaTime * rotationSpeed);
                Debug.Log("ROTATING!: #" + numRotations);
                yield return null;
            }
            Debug.Log("FINISHED ROTATION #: " + numRotations);
            //Debug.Break();
            yield return null;
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