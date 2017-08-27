using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuScreen : MonoBehaviour
{
    [Header("UI_ELEMENTS")]
    public MenuScreen pauseMainMenu;
    public List<GameObject> UIElementsToEnable = new List<GameObject>();

    [Header("AUDIO")]
    public AudioClip onTappedAudioClip;

    // Called when screen is displayed to player
    public virtual void OnSetup()
    {
        // Enable all necessary elements
        foreach (GameObject go in UIElementsToEnable)
        {
            go.SetActive(true);
        }
        GameManager.Singleton.activeMenuScreen = this;
    }

    // Called when player disables pause menu
    // Called during menu screen transitions
    public virtual void OnTearDown()
    {
        // Disable all necessary elements
        foreach (GameObject go in UIElementsToEnable)
        {
            go.SetActive(false);
        }
        gameObject.SetActive(false);    // Disable parent container
    }
}
