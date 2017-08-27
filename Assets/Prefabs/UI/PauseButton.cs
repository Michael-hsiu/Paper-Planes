using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PauseButton : MonoBehaviour
{

    public bool gamePaused = false;
    public MenuScreen pauseMainMenu;

    [Header("AUDIO")]
    public AudioClip onTappedAudioClip;

    // Called when Pause Button is clicked
    public void OnClick()
    {
        GameManager.Singleton.cameraController.audioSource.PlayOneShot(onTappedAudioClip, 1f);

        if (!gamePaused)
        {
            Time.timeScale = 0;
            gamePaused = true;
            pauseMainMenu.gameObject.SetActive(true);
            pauseMainMenu.OnSetup();
        }
        else
        {
            Time.timeScale = 1;
            gamePaused = false;
            GameManager.Singleton.activeMenuScreen.OnTearDown();        // Remove menu screen from whatever screen we are on, if button is pressed again
        }
    }
}
