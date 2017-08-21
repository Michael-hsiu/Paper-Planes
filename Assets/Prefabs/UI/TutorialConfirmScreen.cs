using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TutorialConfirmScreen : MenuScreen
{

    [Header("UI_ELEMENTS")]
    public Button yesButton;
    public Button noButton;


    public void OnYesButtonPressed()
    {
        // Restart the level with tutorial enabled and timescale back to normal
        Time.timeScale = 1;
        //GameManager.Singleton.cameraController.tutorialEnabled = true;
        PlayerPrefs.SetInt(Constants.tutorialEnabled, 1);   // Just in case app crashes or is closed before the tutorial playthrough happens
        PlayerPrefs.Save();

        GameManager.Singleton.OnLevelRestart();
        // Tear down this menu screen
        OnTearDown();
    }

    public void OnNoButtonPressed()
    {
        pauseMainMenu.gameObject.SetActive(true);
        pauseMainMenu.OnSetup();    // Transition back to pause main menu
        OnTearDown();       // Tear down this menu screen

    }
}
