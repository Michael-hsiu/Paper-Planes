using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class SettingsButton : MonoBehaviour
{

    public bool settingEnabled = true;
    public string preferenceID = "sound_setting";       // Setting used by player_prefs to retain changed settings

    [Header("UI_ELEMENTS")]
    public Image settingEnabledImg;
    public Image settingDisabledImg;


    // Set player_prefs settings
    void Awake()
    {

        // Record settings
        if (PlayerPrefs.HasKey(preferenceID))
        {
            int storedSetting = PlayerPrefs.GetInt(preferenceID);
            if (storedSetting == 0)
            {
                DisableSettingUI();
                settingEnabled = false;
            }
            else
            {
                EnableSettingUI();
                settingEnabled = true;
            }
        }
        // Otherwise, assume settings are default (all on)
        else
        {
            EnableSettingUI();
            settingEnabled = true;
        }
    }

    // Method accessed by button
    //public void OnClicked()
    //{
    //    // Special logic for ea. button
    //    OnSettingsChanged();

    //}

    // Overridden by ea. button type
    // Called last by ea. method that calls this
    public virtual void OnSettingsChanged()
    {
        // Disable the setting
        if (settingEnabled)
        {
            DisableSettingUI();
            settingEnabled = false;

        }
        // Enable the setting
        else
        {
            EnableSettingUI();
            settingEnabled = true;

        }
        // TODO: save to player prefs
    }

    public void EnableSettingUI()
    {
        settingDisabledImg.gameObject.SetActive(false);
        settingEnabledImg.gameObject.SetActive(true);
    }
    public void DisableSettingUI()
    {
        settingDisabledImg.gameObject.SetActive(true);
        settingEnabledImg.gameObject.SetActive(false);

    }
}
