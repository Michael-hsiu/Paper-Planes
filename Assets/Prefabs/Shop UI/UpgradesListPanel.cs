using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpgradesListPanel : MonoBehaviour {

	public GridLayoutGroup gridLayoutGroup;
	public GameObject cellPrefab;

	void Start() {
		
		gridLayoutGroup = GetComponent<GridLayoutGroup> ();

		// Resize cellSize dynamically (source: https://www.reddit.com/r/Unity3D/comments/2w4q8l/making_elements_in_a_gridlayout_scale_to_fit/)
		RectTransform rectTransform = cellPrefab.GetComponent<RectTransform> ();
		//gridLayoutGroup.cellSize = new Vector2 (rectTransform.rect.width, rectTransform.rect.height);
		Debug.Log ("CELL SIZE: " + gridLayoutGroup.cellSize);
	}

}
