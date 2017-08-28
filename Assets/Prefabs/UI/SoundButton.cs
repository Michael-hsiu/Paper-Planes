using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundButton : SettingsButton
{

    public AudioSource bgmAudioSource;

    void Start()
    {
        bgmAudioSource = GameManager.Singleton.cameraController.GetComponent<AudioSource>();
    }

    public void OnSettingsChangedBGM()
    {
        // Disable the setting
        if (settingEnabled)
        {
            bgmAudioSource.Stop();
        }
        // Enable the setting
        else
        {
            bgmAudioSource.Play();
        }
        // Other logic
        OnSettingsChanged();
    }

    public void OnSettingsChangedSFX()
    {
        // Disable the setting
        if (settingEnabled)
        {
            GameManager.Singleton.sfxEnabled = false;
        }
        // Enable the setting
        else
        {
            GameManager.Singleton.sfxEnabled = true;
        }
        // Other logic
        OnSettingsChanged();

    }
}
