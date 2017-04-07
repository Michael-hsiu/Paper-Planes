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

}
