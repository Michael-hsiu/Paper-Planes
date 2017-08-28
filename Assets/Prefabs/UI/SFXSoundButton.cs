using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFXSoundButton : SettingsButton
{

    public override void Start()
    {
        preferenceID = Constants.sfxEnabledID;
        base.Start();
    }

    // Overridden to handle SFX
    public override void EnableSetting()
    {
        GameManager.Singleton.sfxEnabled = true;
        base.EnableSetting();
    }
    public override void DisableSetting()
    {
        GameManager.Singleton.sfxEnabled = false;
        base.DisableSetting();
    }

}
