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
        // Tear down this menu screen
        OnTearDown();

        // Restart the level with tutorial enabled and timescale back to normal
        Time.timeScale = 1;
        GameManager.Singleton.cameraController.tutorialEnabled = true;
        GameManager.Singleton.OnLevelRestart();
    }

    public void OnNoButtonPressed()
    {
        OnTearDown();       // Tear down this menu screen
        pauseMainMenu.gameObject.SetActive(true);
        pauseMainMenu.OnSetup();    // Transition back to pause main menu
    }
}
