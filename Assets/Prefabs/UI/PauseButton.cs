using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PauseButton : MonoBehaviour
{

    public bool gamePaused = false;

    // Called when Pause Button is clicked
    public void OnClick()
    {
        if (!gamePaused)
        {
            Time.timeScale = 0;
            gamePaused = true;
        }
        else
        {
            Time.timeScale = 1;
            gamePaused = false;
        }
    }
}
