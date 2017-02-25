using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IFires : MonoBehaviour {

	int ShotDamage { get; set; }

	void Fire();

}
