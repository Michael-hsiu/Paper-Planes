using UnityEngine;
using System.Collections;

// Source: https://github.com/SebLague/Object-Pooling/blob/master/PoolObject.cs
public class PoolObject : MonoBehaviour
{
    public GameObject poolObjHolder;        // The container for all this category of pool object

    public void Start()
    {
        GameManager.Singleton.EndLevelEvent += OnGameOver;
    }
    public virtual void OnObjectReuse()
    {
        // Anything to reset? Transform, velocity, etc.

    }

    public virtual void DestroyForReuse()
    {
        gameObject.SetActive(false);    // Naive implementation; need to customize to improve performance (only disabling scripts, sprite, etc. instead of whole GO)
    }

    // Actions to take when game ends
    public void OnGameOver()
    {
        // Recycle all pool objects on game end
        DestroyForReuse();
    }
}