using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IFireState : EntityState {
	FiringMode Mode
	{
		get;
		set;
	}
}
