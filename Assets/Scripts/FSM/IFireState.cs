using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IFireState : IEntityState {
	FiringMode Mode
	{
		get;
		set;
	}
}
