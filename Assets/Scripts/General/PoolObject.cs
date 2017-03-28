using UnityEngine;
using System.Collections;

// Source: https://github.com/SebLague/Object-Pooling/blob/master/PoolObject.cs
public class PoolObject : MonoBehaviour {

	public virtual void OnObjectReuse() {

	}

	protected void Destroy() {
		Debug.Log ("THIS WAS REACHED");
		//gameObject.SetActive (false);
	}
}