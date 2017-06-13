using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PawnFS : MonoBehaviour, IFireState
{

    public FiringMode mode = FiringMode.NotFiring;
    public FiringMode Mode
    {
        get
        {
            return mode;
        }
        set
        {
            mode = value;
        }
    }
    public PawnShip pawnShip;

    void Start()
    {
        pawnShip = GetComponent<PawnShip>();
    }

    // Setup activities after being activated from Object Pool
    public void OnObjectReuse()
    {

    }

    public void EnterState()
    {

    }

    public void ExitState()
    {

    }

    public void UpdateState()
    {

    }


    public void FireAtPlayer()
    {

    }
}

