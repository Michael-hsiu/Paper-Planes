using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DashAbility : MonoBehaviour {

	public GameObject player;

	public DashState dashState;
	public float dashTimer;
	public float maxDash = 20f;

	public Vector2 savedVelocity;
    
	void Start() {
		player = GameObject.FindGameObjectWithTag (Constants.PlayerTag);		// Get Player at runtime	
	}

	void Update () 
	{
		switch (dashState) 
		{
		case DashState.Ready:
			var isDashKeyDown = Input.GetKeyDown (KeyCode.LeftShift);
			if(isDashKeyDown)
			{
				savedVelocity = player.GetComponent<Rigidbody>().velocity;
				player.GetComponent<Rigidbody>().velocity =  new Vector2(player.GetComponent<Rigidbody>().velocity.x * 3f, player.GetComponent<Rigidbody>().velocity.y);
				dashState = DashState.Dashing;
			}
			break;
		case DashState.Dashing:
			dashTimer += Time.deltaTime * 3;
			if(dashTimer >= maxDash)
			{
				Debug.Log ("IS DASHING!!!!!");
				dashTimer = maxDash;
				player.GetComponent<Rigidbody>().velocity = savedVelocity;
				dashState = DashState.Cooldown;
			}
			break;
		case DashState.Cooldown:
			dashTimer -= Time.deltaTime;
			if(dashTimer <= 0)
			{
				dashTimer = 0;
				dashState = DashState.Ready;
			}
			break;
		}
	}
}

public enum DashState 
{
	Ready,
	Dashing,
	Cooldown
}