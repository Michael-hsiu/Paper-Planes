using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PauseMainMenu : MenuScreen
{
    [Header("UI_ELEMENTS")]
    public Image backgroundImage;
    public Image menuBox;       // Box surrounding buttons
    public Button tutorialButton;
    public Button musicButton;
    public Button creditsButton;

    [Header("SCREEN_REFS")]
    public MenuScreen tutorialConfirmScreen;
    public MenuScreen musicScreen;
    public MenuScreen creditsScreen;


    // Called when pause button is pressed again
    // Timescale must be separately set back to 1
    //public void OnTearDown()
    //{
    //    // Disable all UI elements
    //    backgroundImage.gameObject.SetActive(false);
    //    menuBox.gameObject.SetActive(false);
    //    tutorialButton.gameObject.SetActive(false);
    //    musicButton.gameObject.SetActive(false);
    //    creditsButton.gameObject.SetActive(false);

    //}

    // Transition to Tutorial Confirmation screen
    public void OnTransitionToTutorialConfirmationScreen()
    {
        tutorialConfirmScreen.gameObject.SetActive(true);
        tutorialConfirmScreen.OnSetup();
        OnTearDown();
    }

    // Transition to Music screen
    // Option to adjust volume, with #s
    public void OnTransitionToMusicScreen()
    {
        musicScreen.gameObject.SetActive(true);
        musicScreen.OnSetup();
        OnTearDown();

    }

    // Transition to Credits screen
    public void OnTransitionToCreditsScreen()
    {
        creditsScreen.gameObject.SetActive(true);
        creditsScreen.OnSetup();
        OnTearDown();

    }

}
