using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletHellPatternGenerator : MonoBehaviour
{

    // The list of shot spawns, organized into pairs (each a list)
    public List<BulletHellShotSpawnListWrapper> listOfListOfBulletHellShotSpawns;
    public float generatedRotationAngle;
    public int numAnglesGenerated = 0;

    public void GenerateRandomPatterns(BulletHellShotSpawn methodCaller)
    {
        //Debug.Log("LIST LENGTH: " + listOfListOfBulletHellShotSpawns.Count);
        //Debug.Break();
        // Go through each pair of shot spawns
        // "...%2==0" b/c there are 2 shotspawns in each pair, each of which will try to call this method
        // Still needs to be fixed for >1 pair, not symmetric (though the effect is sometimes nice)
        //if (numAnglesGenerated % 2 == 0)
        bool singleMethodCall = (listOfListOfBulletHellShotSpawns[0].pair[0].generatedPattern == listOfListOfBulletHellShotSpawns[0].pair[1].generatedPattern);

        if (singleMethodCall)
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

                    // Finish the rotation by snapping to desired rotation.
                    bulletHellShotSpawn.transform.rotation = bulletHellShotSpawn.desiredRotation;

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
        // Negate the bool value
        methodCaller.generatedPattern = !methodCaller.generatedPattern;
        //numAnglesGenerated += 1;

        //Debug.Break();
    }
}
