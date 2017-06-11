using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellShotSpawn : ShotSpawn
{

    public GameObject bulletHellProjectile;
    public float rotationAngle;
    public float rotationSpeed;

    public float delayBtwnShots;
    public Vector3 targetRot;

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
            //Quaternion desiredRotation = Quaternion.Euler(transform.InverseTransformVector(0, 0, 90f));        // Store rotation as an Euler, then Quaternion
            //Quaternion desiredRotation = Quaternion.Inverse(transform.rotation) * Quaternion.Euler(0, 0, 0);        // Store rotation as an Euler, then Quaternion


            // Rotate as long as we're within X degrees of desiredRotation
            //while (true) {
            //    transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, Time.deltaTime * rotationSpeed);
            //    //transform.rotation = transform.rotation * Quaternion.AngleAxis(0.0f, Vector3.up);
            //    yield return null;
            //}
            //while (Quaternion.Angle(transform.localRotation, desiredRotation) > 5.0f)
            //{
            //    //transform.rotation = Quaternion.RotateTowards(transform.rotation, desiredRotation, Time.deltaTime * rotationSpeed);
            //    Debug.Log("ROTATING IN PROGRESS");
            //    yield return null;
            //}
            //targetRot = transform.localRotation.eulerAngles + new Vector3(0, 0, rotationAngle);
            targetRot = new Vector3(0, 0, rotationAngle);
            //Debug.Break();
            rotationSpeed = (rotationAngle >= 0f) ? rotationSpeed : -rotationSpeed;

            //Debug.Log("EULERANG: " + transform.InverseTransformPoint(transform.localEulerAngles));
            //Debug.Log("TARGET_EULERANG: " + targetRot);
            //Debug.Log("ANGLE DIFF: " + Vector3.Angle(transform.rotation.eulerAngles, targetRot));

            while (Mathf.Abs(transform.localRotation.eulerAngles.z - targetRot.z) > 1.0f)
            {
                transform.Rotate(new Vector3(0f, 0f, rotationSpeed) * Time.deltaTime);
                float recentRotZ = transform.localRotation.eulerAngles.z;
                if ((recentRotZ >= 90.0f && recentRotZ <= 270.0f) || recentRotZ <= -90.0f /*|| transform.localRotation.eulerAngles.z >= 270.0f*/)
                {
                    Debug.Log("RECENT_ROT_Z: " + recentRotZ);
                    break;
                }
                Debug.Log("RATATED");
                yield return null;
                //yield return new WaitForFixedUpdate();
            }
            //Debug.Log("END_EULERANG: " + transform.rotation.eulerAngles);
            //Debug.Break();

            // Generate 2 possible new target angles. Choose one randomly and clamp btwn -90 and 90 degrees.

            // Quick fix if we exceed angle
            //         if (transform.rotation.eulerAngles.z < -90.0f)
            //{
            //	Vector3 newRot = new Vector3(0, 0, -90.0f);
            //	transform.rotation = Quaternion.Euler(newRot);
            //}
            //else if (transform.rotation.eulerAngles.z > 90.0f)
            //{
            //	Vector3 newRot = new Vector3(0, 0, 90.0f);
            //	transform.rotation = Quaternion.Euler(newRot);
            //}

            //rotationAngle = Mathf.Clamp(rotationAngle, -90.0f, 90.0f);

            //float lowerRotationAngle = rotationAngle - Random.Range(20.0f, 80.0f);
            //float higherRotationAngle = rotationAngle + Random.Range(20.0f, 80.0f);

            float recentRotationZ = transform.localRotation.eulerAngles.z;
            if ((recentRotationZ <= 0.0f && recentRotationZ >= -90.0f) || (recentRotationZ >= 270.0f && recentRotationZ <= 360.0f))
            {
                //rotationAngle = higherRotationAngle;
                rotationAngle = 90.0f;
                Debug.Log("LOCAL Z-IF: " + transform.localRotation.eulerAngles.z);

            }
            else /*if (transform.localRotation.eulerAngles.z > 0.0f)*/
            {
                //rotationAngle = lowerRotationAngle;
                rotationAngle = -90.0f;
                Debug.Log("LOCAL Z-ELSE IF: " + transform.localRotation.eulerAngles.z);

                //Debug.Break();


            }

            //float modAngle = transform.localRotation.eulerAngles.z % 360.0f;
            //if (modAngle >= 0.0f && modAngle <= 90.0f)
            //{
            //	//rotationAngle = higherRotationAngle;
            //	rotationAngle = Random.Range(-90.0f, -90.0f);
            //	Debug.Log("LOCAL Z-IF: " + transform.localRotation.eulerAngles.z);

            //}
            //else if (modAngle >= 270.0f && modAngle <= 360.0f)
            //{
            //	//rotationAngle = lowerRotationAngle;
            //	rotationAngle = Random.Range(90.0f, 90.0f);
            //	Debug.Log("LOCAL Z-ELSE IF: " + transform.localRotation.eulerAngles.z);

            //	//Debug.Break();


            //}
            //else
            //{
            //	Debug.Log("ELSE CASE REACHED");
            //}
            //         else if (transform.localRotation.eulerAngles.z >= 0.0f)
            //         {
            //             rotationAngle = Random.Range(-90.0f, 0.0f);
            //         }
            //         else if (transform.localRotation.eulerAngles.z < 0.0f)
            //         {
            //             rotationAngle = Random.Range(0.0f, 90.0f);
            //}

            //rotationAngle = Mathf.Clamp(rotationAngle, -90.0f, 90.0f);

            //float chosenAngle = (Random.value <= 0.5f) ? lowerRotationAngle : higherRotationAngle;


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