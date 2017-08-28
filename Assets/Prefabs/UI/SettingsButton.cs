using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class SettingsButton : MonoBehaviour
{

    public bool settingEnabled = true;
    public string preferenceID;       // Setting used by player_prefs to retain changed settings

    [Header("UI_ELEMENTS")]
    public Image settingEnabledImg;
    public Image settingDisabledImg;


    // Set player_prefs settings
    public virtual void Start()
    {
        // Record settings
        if (PlayerPrefs.HasKey(preferenceID))
        {
            Debug.Log("HAS_KEY: " + preferenceID);
            int storedSetting = PlayerPrefs.GetInt(preferenceID);
            if (storedSetting == 0)
            {
                DisableSetting();
            }
            else
            {
                EnableSetting();
            }
        }
        // Otherwise, assume settings are default (all on)
        else
        {
            Debug.Log("NO_KEY: " + preferenceID);

            //Debug.Break();
            EnableSetting();
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
    public void OnSettingsChanged()
    {
        // Disable the setting
        if (settingEnabled)
        {
            DisableSetting();
        }
        // Enable the setting
        else
        {
            EnableSetting();
        }
        PlayerPrefs.Save();
        // TODO: save to player prefs (put in individual methods?)
    }

    // Enable/DisableSetting are overridden by ea. button
    public virtual void EnableSetting()
    {
        settingEnabledImg.gameObject.SetActive(true);
        settingDisabledImg.gameObject.SetActive(false);

        settingEnabled = true;

        PlayerPrefs.SetInt(preferenceID, 1);

    }
    public virtual void DisableSetting()
    {
        settingDisabledImg.gameObject.SetActive(true);
        settingEnabledImg.gameObject.SetActive(false);

        settingEnabled = false;

        PlayerPrefs.SetInt(preferenceID, 0);

    }
}
