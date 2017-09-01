using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public static class Utils
{

    // Recursively gets all children of a gameobject
    public static List<GameObject> GetChildren(GameObject go)
    {
        List<GameObject> list = new List<GameObject>();
        return GetChildrenHelper(go, list);
    }

    // Recursively gets all children of a gameobject given a list
    public static List<GameObject> GetChildren(GameObject go, List<GameObject> list)
    {
        return GetChildrenHelper(go, list);
    }

    // Recursively gets all children of a gameobject given a list
    public static List<GameObject> GetRootChildren(GameObject go, List<GameObject> list)
    {
        return GetRootChildrenHelper(go, list);
    }

    private static List<GameObject> GetRootChildrenHelper(GameObject go, List<GameObject> list)
    {
        if (go == null)
        {
            return list;
        }
        foreach (Transform t in go.transform)
        {
            list.Add(t.gameObject);
        }
        return list;
    }

    private static List<GameObject> GetChildrenHelper(GameObject go, List<GameObject> list)
    {
        if (go == null)
        {
            return list;
        }
        foreach (Transform t in go.transform)
        {
            list.Add(t.gameObject);
            if (t.transform.childCount > 0)
            {
                GetChildrenHelper(t.gameObject, list);
            }
        }
        return list;
    }


    // Recursively gets all colliders on a gameobject
    public static List<Collider> GetColliders(GameObject go)
    {
        List<Collider> list = new List<Collider>();
        return GetCollidersHelper(go, list);
    }
    private static List<Collider> GetCollidersHelper(GameObject go, List<Collider> list)
    {
        if (go == null)
        {
            return list;
        }
        foreach (Transform t in go.transform)
        {
            if (t.GetComponent<Collider>() != null)
            {
                list.Add(t.GetComponent<Collider>());
            }
            // Recursive depth-first search for colliders
            if (t.transform.childCount > 0)
            {
                GetCollidersHelper(t.gameObject, list);
            }
        }
        return list;
    }


    // Finds and returns first child with desired tag
    public static GameObject FindChildWithTag(GameObject go, string tag)
    {
        if (go == null)
        {
            return null;
        }

        foreach (Transform t in go.transform)
        {
            if (t.CompareTag(tag))
            {
                return t.gameObject;
            }
            if (t.transform.childCount > 0)
            {
                GameObject child = FindChildWithTag(t.gameObject, tag);
                if (child != null)
                {
                    return child;
                }
            }
        }
        return null;
    }


    // Returns a random position within a certain radius (on x-y plane)
    public static Vector3 RandomPos(Transform t, float radius)
    {
        float x = t.position.x + UnityEngine.Random.Range(-radius, radius);
        float y = t.position.y + UnityEngine.Random.Range(-radius, radius);

        return new Vector3(x, y, t.position.z);
    }


    // Returns squared straight-line distance between 2 pts
    public static float SquaredEuclideanDistance(GameObject t1, GameObject t2)
    {
        return Mathf.Pow((t1.transform.position.x - t2.transform.position.x), 2) + Mathf.Pow((t1.transform.position.y - t2.transform.position.y), 2);
    }

    // Disable all enemies in scene
    public static void KillAllEnemies()
    {
        GameObject poolManager = GameObject.Find("PoolManager");
        DisableChildren(poolManager);
    }

    // Recursively gets & disables all children of a gameobject
    public static void DisableChildren(GameObject go)
    {
        if (go == null)
        {
            return;
        }
        foreach (Transform t in go.transform)
        {
            if (t.CompareTag(Constants.EnemyTag))
            {
                Ship ship = t.GetComponent<Ship>();
                /*// Either call Kill, to get death animations....
				if (ship != null) {
					ship.Kill ();
				} 
				// ....or be content with pooling them again
				else {*/
                PoolObject po = t.GetComponent<PoolObject>();
                if (po != null)
                {
                    po.DestroyForReuse();
                }
            }
            if (t.transform.childCount > 0)
            {
                DisableChildren(t.gameObject);
            }
        }
    }

    // Disables all Powerups in scene (naive impl., needs to be optimized); can be combined w/ DisableChildren eventually
    public static void DisablePowerups()
    {
        GameObject[] list = GameObject.FindGameObjectsWithTag(Constants.Powerup);
        foreach (GameObject go in list)
        {
            if (go.GetComponent<PoolObject>() != null)
            {
                go.GetComponent<PoolObject>().DestroyForReuse();
            }
            //UnityEngine.Object.Destroy (go);
        }
    }


    // From http://stackoverflow.com/questions/1082917/mod-of-negative-number-is-melting-my-brain
    public static float Mod(float a, float n)
    {
        if (n == 0)
            throw new ArgumentOutOfRangeException("n", "(a mod 0) is undefined.");

        //puts a in the [-n+1, n-1] range using the remainder operator
        float remainder = a % n;

        //if the remainder is less than zero, add n to put it in the [0, n-1] range if n is positive
        //if the remainder is greater than zero, add n to put it in the [n-1, 0] range if n is negative
        if ((n > 0 && remainder < 0) ||
            (n < 0 && remainder > 0))
            return remainder + n;
        return remainder;
    }

    // From MSDN
    public static string CollectionValues(IEnumerable myCollection)
    {
        string values = " VALUES: ";
        foreach (object obj in myCollection)
        {
            values = values + "    " + obj;

        }
        return values;
    }
}
