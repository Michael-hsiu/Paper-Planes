using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils {
	public List<GameObject> GetChildren(GameObject go) {
		List<GameObject> list = new List<>();
		return GetChildrenHelper (go, list);
	}

	private List<GameObject> GetChildrenHelper(GameObject go, List<GameObject> list) {
		if (go == null || go.transform.childCount == 0) {
			return list;
		}
		foreach (Transform t in go.transform) {
			list.Add (t.gameObject);
			GetChildrenHelper (t.gameObject, list);
		}
		return list;
	}
}
