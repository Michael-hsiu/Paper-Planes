using UnityEngine;
using System.Collections;
using System.Collections.Generic;

// Source: https://github.com/SebLague/Object-Pooling/blob/master/PoolManager.cs
public class PoolManager : MonoBehaviour
{

    Dictionary<int, Queue<ObjectInstance>> poolDictionary = new Dictionary<int, Queue<ObjectInstance>>();
    Dictionary<string, GameObject> poolHolderDictionary = new Dictionary<string, GameObject>();     // Contains pools for ea. fab w/ ID=string_repr

    static PoolManager _instance;

    public static PoolManager Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = FindObjectOfType<PoolManager>();
            }
            return _instance;
        }
    }

    public void CreatePool(GameObject prefab, int poolSize)
    {
        int poolKey = prefab.GetInstanceID();

        if (!poolDictionary.ContainsKey(poolKey))
        {
            poolDictionary.Add(poolKey, new Queue<ObjectInstance>());

            string poolName = prefab.name + " Pool";
            GameObject poolHolder = new GameObject(poolName);      // Holds all the prefabs
            poolHolderDictionary[poolName] = poolHolder;        // Used by BomberBossStage2

            poolHolder.transform.parent = transform;

            for (int i = 0; i < poolSize; i++)
            {
                ObjectInstance newObject = new ObjectInstance(Instantiate(prefab) as GameObject);
                poolDictionary[poolKey].Enqueue(newObject);
                newObject.SetParent(poolHolder.transform);
                if (newObject.hasPoolObjectComponent)
                {
                    newObject.gameObject.GetComponent<PoolObject>().poolObjHolder = poolHolder;       // All pool objects have ref to their pool
                }
            }
        }
    }

    // Retrieve a pool container object for a certain prefab
    public GameObject GetPool(string poolName)
    {
        if (poolHolderDictionary.ContainsKey(poolName + " Pool"))
        {
            return poolHolderDictionary[poolName + " Pool"];
        }
        return null;
    }

    public void ReuseObject(GameObject prefab, Vector3 position, Quaternion rotation)
    {
        int poolKey = prefab.GetInstanceID();

        if (poolDictionary.ContainsKey(poolKey))
        {
            ObjectInstance objectToReuse = poolDictionary[poolKey].Dequeue();
            poolDictionary[poolKey].Enqueue(objectToReuse);

            objectToReuse.Reuse(position, rotation);
        }
    }

    // Different signature for returning ref to reused gameobject
    public PoolObject ReuseObjectRef(GameObject prefab, Vector3 position, Quaternion rotation)
    {
        int poolKey = prefab.GetInstanceID();

        if (poolDictionary.ContainsKey(poolKey))
        {
            ObjectInstance objectToReuse = poolDictionary[poolKey].Dequeue();
            poolDictionary[poolKey].Enqueue(objectToReuse);

            objectToReuse.Reuse(position, rotation);

            return objectToReuse.gameObject.GetComponent<PoolObject>();
        }
        return null;
    }


    public class ObjectInstance
    {

        public GameObject gameObject;
        Transform transform;

        public bool hasPoolObjectComponent;
        PoolObject poolObjectScript;

        public ObjectInstance(GameObject objectInstance)
        {
            gameObject = objectInstance;
            transform = gameObject.transform;
            gameObject.SetActive(false);        // Hides gameobject in scene

            if (gameObject.GetComponent<PoolObject>())
            {
                hasPoolObjectComponent = true;
                poolObjectScript = gameObject.GetComponent<PoolObject>();
            }
        }

        public void Reuse(Vector3 position, Quaternion rotation)
        {
            if (gameObject != null)
            {
                gameObject.SetActive(true);     // Shows object in scene
            }
            transform.position = position;
            transform.rotation = rotation;

            if (hasPoolObjectComponent)
            {
                // This method can be overridden uniquely by each pooled object, to reset variables, restart coroutines/times, etc.
                poolObjectScript.OnObjectReuse();
            }
        }

        public void SetParent(Transform parent)
        {
            transform.parent = parent;
        }
    }
}