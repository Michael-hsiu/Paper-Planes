using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour {


	public float speed = 1.0f;


	private Vector2 initialPos;
	private Vector2 offset = new Vector2(0, 3);
		
	// Use this for initialization
	void Start () {
		initialPos = new Vector2(transform.position.x, transform.position.y);
	}
	
	void Update() {
		this.transform.position = Vector2.Lerp (initialPos - offset, initialPos + offset, (Mathf.Sin(speed * Time.time) + 1.0f) / 2.0f);
	}
}
