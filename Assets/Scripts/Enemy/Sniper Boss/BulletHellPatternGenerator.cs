using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellPatternGenerator : MonoBehaviour
{

    // The list of shot spawns, organized into pairs (each a list)
    public List<BulletHellShotSpawnListWrapper> listOfListOfBulletHellShotSpawns;
    public float generatedRotationAngle;

    public void GenerateRandomPatterns()
    {

        // Go through each pair of shot spawns
        foreach (BulletHellShotSpawnListWrapper shotSpawnPairList in listOfListOfBulletHellShotSpawns)
        {
            // We're looking at an individual element from a pair now
            generatedRotationAngle = Random.Range(90.0f, 178.0f);

            //bool isSecondShotSpawn = false;
            foreach (BulletHellShotSpawn bulletHellShotSpawn in shotSpawnPairList.pair)
            {
                // Give it a value.
                if (bulletHellShotSpawn.rotationAngleCopy > 0)
                {
                    bulletHellShotSpawn.rotationAngleCopy = -generatedRotationAngle;
                }
                else
                {
                    bulletHellShotSpawn.rotationAngleCopy = generatedRotationAngle;
                }

                //if (!isSecondShotSpawn)
                //{
                //    isSecondShotSpawn = true;
                //    bulletHellShotSpawn.rotationAngle = generatedRotationAngle;
                //}
                //else
                //{
                //    // Give its partner the negative value.
                //    bulletHellShotSpawn.rotationAngle = -generatedRotationAngle;
                //}

            }
        }
    }
}
