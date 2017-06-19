using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class FiringRangeCollider : MonoBehaviour
{

	public bool targetInRange;


	void Update()
	{
		targetInRange = false;
	}

	void OnTriggerEnter(Collider other)
	{
		// Either-or: either trigger processes, or Euclidean calc processes
		if (other.gameObject.CompareTag(Constants.PlayerTag) /* && !GameManager.Singleton.onDashCooldown*/)
		{
			try
			{
				GetComponentInParent<RangedShip>().fireState.Mode = FiringMode.Firing;
			}
			catch (NullReferenceException e)
			{
				Debug.LogError(e);
			}	
		}
	}

	void OnTriggerStay(Collider other)
	{
		if (other.gameObject.CompareTag(Constants.PlayerTag))
		{
			targetInRange = true;
		}
	}

	void OnTriggerExit(Collider other)
	{
		//Debug.Log ("Leaving firing range from player!");

		if (other.gameObject.CompareTag(Constants.PlayerTag))
		{
			try
			{
				GetComponentInParent<RangedShip>().fireState.Mode = FiringMode.NotFiring;
			}
			catch (NullReferenceException e)
			{
				Debug.LogError(e);
				//Debug.Break ();
			}	
		}
	}

}
