using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayAgainButton : MonoBehaviour
{

    public GameOverScreen gameOverScreen;

    // Restart the level
    // Hide the game_over screen
    public void OnButtonClick()
    {
        gameOverScreen.DisableGameOverScreen();
        GameManager.Singleton.OnLevelRestart();
    }

}
