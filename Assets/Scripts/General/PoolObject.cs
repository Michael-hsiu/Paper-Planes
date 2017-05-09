using UnityEngine;
using System.Collections;

// Source: https://github.com/SebLague/Object-Pooling/blob/master/PoolObject.cs
public class PoolObject : MonoBehaviour {

	public virtual void OnObjectReuse() {
		// Anything to reset? Transform, velocity, etc.
	}

	public virtual void DestroyForReuse() {
		//Debug.Log ("DestroyForReuse() WAS REACHED");
		gameObject.SetActive (false);	// Naive implementation; need to customize to improve performance (only disabling scripts, sprite, etc. instead of whole GO)
	}
}