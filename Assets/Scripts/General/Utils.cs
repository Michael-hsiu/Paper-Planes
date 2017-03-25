using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils {
	
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
}
