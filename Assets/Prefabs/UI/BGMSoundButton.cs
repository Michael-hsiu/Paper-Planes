using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGMSoundButton : SettingsButton
{

    public AudioSource bgmAudioSource;

    public override void Start()
    {
        preferenceID = Constants.bgmEnabledID;
        bgmAudioSource = GameManager.Singleton.cameraController.GetComponent<AudioSource>();
        base.Start();

    }


    public override void EnableSetting()
    {
        if (!bgmAudioSource.isPlaying)
        {
            bgmAudioSource.Play();
        }
        base.EnableSetting();
    }
    public override void DisableSetting()
    {
        if (bgmAudioSource.isPlaying)
        {
            bgmAudioSource.Stop();
        }
        base.DisableSetting();
    }

}
