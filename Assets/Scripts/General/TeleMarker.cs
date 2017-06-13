using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleMarker : PoolObject
{
    public override void OnObjectReuse()
    {
        transform.rotation = Quaternion.identity;
    }

    // Rotates, starts out small, grows larger.
    // When SniperBoss lands on this, send out shockwave to knock back player ship
}
