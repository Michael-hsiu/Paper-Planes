using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RestartConfirmScreen : MenuScreen
{

    [Header("UI_ELEMENTS")]
    public Button yesButton;
    public Button noButton;


    public void OnYesButtonPressed()
    {
        if (GameManager.Singleton.sfxEnabled)
        {
            GameManager.Singleton.cameraController.audioSource.PlayOneShot(onTappedAudioClip, 1f);
        }

        // Restart the level with tutorial enabled and timescale back to normal
        Time.timeScale = 1;
        //GameManager.Singleton.cameraController.tutorialEnabled = true;

        GameManager.Singleton.OnLevelRestart();
        // Tear down this menu screen
        OnTearDown();
    }

    public void OnNoButtonPressed()
    {
        if (GameManager.Singleton.sfxEnabled)
        {
            GameManager.Singleton.cameraController.audioSource.PlayOneShot(onTappedAudioClip, 1f);
        }

        pauseMainMenu.gameObject.SetActive(true);
        pauseMainMenu.OnSetup();    // Transition back to pause main menu
        OnTearDown();       // Tear down this menu screen

    }
}
