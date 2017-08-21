using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PauseButton : MonoBehaviour
{

    public bool gamePaused = false;
    public MenuScreen pauseMainMenu;

    // Called when Pause Button is clicked
    public void OnClick()
    {
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
