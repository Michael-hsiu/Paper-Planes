using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[SelectionBase]
public class SimpleBomberMiniBoss : Ship
{

    #region Variables
    public float rotationFactor;
    #endregion

    #region Unity Life Cycle
    protected override void Start()
    {

        base.Start();
        enemyType = EnemyType.Boss;

        // Reset values from defaultValues scrObj
        health = defaultValues.health;
        rotationSpeed = defaultValues.rotationSpeed;
        rotationFactor = defaultValues.rotationFactor;
        sprite.transform.localRotation = defaultValues.spriteInitialRotation;

        // Component state initialization
        moveState = GetComponent<IMoveState>();
        //moveState.OnObjectReuse();

        // Set start position/rotation to match sprites from Stage 1
        // These should work b/c if multiple Bomber Bosses killed, should still call Start() in order of kills
        //transform.position = defaultValues.initialPosition;
        //transform.rotation = defaultValues.initialRotation;

    }

    // This is called everytime this prefab is reused
    public override void OnObjectReuse()
    {
        StopAllCoroutines();
        Start();

        // Color / alpha reset
        Color resetColor = startColor;
        resetColor.a = 1f;
        sprite.material.color = resetColor;
    }
    #endregion



    #region Game Logic



    #endregion
}
