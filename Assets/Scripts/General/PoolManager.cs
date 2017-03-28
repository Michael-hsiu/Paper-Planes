﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

// Source: https://github.com/SebLague/Object-Pooling/blob/master/PoolManager.cs
public class PoolManager : MonoBehaviour {

	Dictionary<int, Queue<ObjectInstance>> poolDictionary = new Dictionary<int, Queue<ObjectInstance>> ();

	static PoolManager _instance;

	public static PoolManager Instance {
		get {
			if (_instance == null) {
				_instance = FindObjectOfType<PoolManager> ();
			}
			return _instance;
		}
	}

	public void CreatePool(GameObject prefab, int poolSize) {
		int poolKey = prefab.GetInstanceID ();

		if (!poolDictionary.ContainsKey (poolKey)) {
			poolDictionary.Add (poolKey, new Queue<ObjectInstance> ());

			GameObject poolHolder = new GameObject (prefab.name + " pool");		// Holds all the prefabs
			poolHolder.transform.parent = transform;

			for (int i = 0; i < poolSize; i++) {
				ObjectInstance newObject = new ObjectInstance(Instantiate (prefab) as GameObject);
				poolDictionary [poolKey].Enqueue (newObject);
				newObject.SetParent (poolHolder.transform);
			}
		}
	}

	public void ReuseObject(GameObject prefab, Vector3 position, Quaternion rotation) {
		int poolKey = prefab.GetInstanceID ();

		if (poolDictionary.ContainsKey (poolKey)) {
			ObjectInstance objectToReuse = poolDictionary [poolKey].Dequeue ();
			poolDictionary [poolKey].Enqueue (objectToReuse);

			objectToReuse.Reuse (position, rotation);
		}
	}

	public class ObjectInstance {

		GameObject gameObject;
		Transform transform;

		bool hasPoolObjectComponent;
		PoolObject poolObjectScript;

		public ObjectInstance(GameObject objectInstance) {
			gameObject = objectInstance;
			transform = gameObject.transform;
			gameObject.SetActive(false);		// Hides gameobject in scene

			if (gameObject.GetComponent<PoolObject>()) {
				hasPoolObjectComponent = true;
				poolObjectScript = gameObject.GetComponent<PoolObject>();
			}
		}

		public void Reuse(Vector3 position, Quaternion rotation) {
			gameObject.SetActive (true);		// Shows object in scene
			transform.position = position;
			transform.rotation = rotation;

			if (hasPoolObjectComponent) {
				poolObjectScript.OnObjectReuse ();
			}
		}

		public void SetParent(Transform parent) {
			transform.parent = parent;
		}
	}
}