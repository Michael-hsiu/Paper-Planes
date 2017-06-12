using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellPatternGenerator : MonoBehaviour
{

    // The list of shot spawns, organized into pairs (each a list)
    public List<BulletHellShotSpawnListWrapper> listOfListOfBulletHellShotSpawns;
    public float generatedRotationAngle;
    public int numAnglesGenerated = 0;

    public void GenerateRandomPatterns()
    {
        //Debug.Log("LIST LENGTH: " + listOfListOfBulletHellShotSpawns.Count);
        //Debug.Break();
        // Go through each pair of shot spawns
        // "...%2==0" b/c there are 2 shotspawns in each pair, each of which will try to call this method
        if (numAnglesGenerated % 2 == 0)
        {
            foreach (BulletHellShotSpawnListWrapper shotSpawnPairList in listOfListOfBulletHellShotSpawns)
            {
                // We're looking at an individual element from a pair now
                generatedRotationAngle = Random.Range(90.0f, 170.0f);

                //bool isSecondShotSpawn = false;
                foreach (BulletHellShotSpawn bulletHellShotSpawn in shotSpawnPairList.pair)
                {
                    //Debug.Log(string.Format("SPAWN_NAME:D {0}, SPAWN_ANGLE:D {1}", bulletHellShotSpawn.name, bulletHellShotSpawn.rotationAngleCopy));
                    //Debug.Break();
                    // Give it a value.
                    if (bulletHellShotSpawn.rotationAngle > 0)
                    {
                        bulletHellShotSpawn.rotationAngleCopy = -generatedRotationAngle;
                        //Debug.Log("SPAWN_NAMEE: " + bulletHellShotSpawn.name);
                        //Debug.Break();
                    }
                    else
                    {
                        bulletHellShotSpawn.rotationAngleCopy = generatedRotationAngle;
                        //Debug.Log("GENERATED ROT_ANGLE: " + generatedRotationAngle);
                        //Debug.Break();

                    }
                    //Debug.Break();
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
        numAnglesGenerated += 1;

        //Debug.Break();
    }
}
