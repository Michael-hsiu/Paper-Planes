using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleSystemAutoDestroy : MonoBehaviour {

	private ParticleSystem ps;

	// Use this for initialization
	void Start () {
		ps = GetComponent<ParticleSystem> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (ps) {
			if (!ps.IsAlive()) {	// Checks if particle system is still / will still emit particles, and if any particles are still alive
				Destroy (gameObject);
			}
		}
	}
}
