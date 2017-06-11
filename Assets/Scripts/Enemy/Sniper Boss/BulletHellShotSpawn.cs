using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellShotSpawn : ShotSpawn
{

    public GameObject bulletHellProjectile;
    public BulletHellPatternGenerator bulletHellPatternGenerator;       // Generates pairwise-matching random values for us!
    //public float rotationAngle;
    public float rotationSpeed;
    public int numRotations;
    public bool isFirstRotation = true;
    public float rotationAngle = -89.0f;
    public float rotationAngleCopy;
    public Quaternion desiredRotation;
    public Quaternion currRotation;


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

        // Reset variables
        numRotations = 0;
        //rotationAngle = -88.0f;
        isFirstRotation = true;
        transform.localRotation = Quaternion.Euler(Vector3.zero);     // Reset rotation
        rotationAngleCopy = rotationAngle;

        //Debug.Break();  // Not v3.zero b/c program too fast?
        while (Time.time < endTime)
        {

            // Switch direction after first rotation
            if (!isFirstRotation)
            {
                if (numRotations % 2 == 0)
                {
                    // Create new set of values
                    bulletHellPatternGenerator.GenerateRandomPatterns();
                    //if (rotationAngleCopy < 0)
                    //{
                    //    rotationAngleCopy = 176.0f;     // Almost full half-circle rotation
                    //}
                    //else
                    //{
                    //    rotationAngleCopy = -176.0f;     // Almost full half-circle rotation
                    //}
                    //Debug.Break();
                }
                else if (numRotations % 2 == 1)
                {
                    //rotationAngleCopy = rotationAngleCopy * -1;
                    // 2nd time around, rotate the other way
                    rotationAngleCopy *= -1;
                    //Debug.Break();

                }
                else
                {
                    bulletHellPatternGenerator.GenerateRandomPatterns();
                    Debug.Log("ELSE CASE REACHED!");
                    //Debug.Break();
                }
                numRotations += 1;
            }
            else
            {
                isFirstRotation = false;
            }


            // Rotation logic
            desiredRotation = transform.rotation * Quaternion.AngleAxis(rotationAngleCopy, Vector3.forward);
            while (Quaternion.Angle(transform.rotation, desiredRotation) > 2.0f)
            {
                currRotation = transform.rotation;
                transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, Time.deltaTime * rotationSpeed);
                Debug.Log("ROTATING");
                yield return null;
            }
            Debug.Log("CYCLE COMPLETED");
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