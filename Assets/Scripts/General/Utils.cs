using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils {

	//public GameObject inputManager;
	
	public static List<GameObject> GetChildren(GameObject go) {
		List<GameObject> list = new List<GameObject>();
		return GetChildrenHelper (go, list);
	}

	private static List<GameObject> GetChildrenHelper(GameObject go, List<GameObject> list) {
		if (go == null) {
			return list;
		}
		foreach (Transform t in go.transform) {
			list.Add (t.gameObject);
			if (t.transform.childCount > 0) {
				GetChildrenHelper (t.gameObject, list);
			}
		}
		return list;
	}

	public static List<Collider> GetColliders(GameObject go) {
		List<Collider> list = new List<Collider>();
		return GetCollidersHelper (go, list);
	}

	private static List<Collider> GetCollidersHelper(GameObject go, List<Collider> list) {
		if (go == null) {
			return list;
		}
		foreach (Transform t in go.transform) {
			if (t.GetComponent<Collider>() != null) {
				list.Add (t.GetComponent<Collider> ());
			}
			// Recursive depth-first search for colliders
			if (t.transform.childCount > 0) {
				GetCollidersHelper (t.gameObject, list);
			}
		}
		return list;
	}

	// Finds and returns first child with desired tag
	public static GameObject FindChildWithTag(GameObject go, string tag) {
		if (go == null) {
			return null;
		}

		foreach (Transform t in go.transform) {
			if (t.CompareTag(tag)) {
				return t.gameObject;
			}
			if (t.transform.childCount > 0) {
				GameObject child = FindChildWithTag (t.gameObject, tag);
				if (child != null) {
					return child;
				}
			}
		}
		return null;
	}

	// Returns a random position within a certain radius (on x-y plane)
	public static Vector3 RandomPos(Transform t, float radius) {
		float x = t.position.x + Random.Range (-radius, radius);
		float y = t.position.y + Random.Range (-radius, radius);

		return new Vector3 (x, y, t.position.z);
	}

	// Returns squared straight-line distance between 2 pts
	public static float SquaredEuclideanDistance(GameObject t1, GameObject t2) {
		return Mathf.Pow((t1.transform.position.x - t2.transform.position.x), 2) + Mathf.Pow((t1.transform.position.y - t2.transform.position.y), 2);
	}
}
