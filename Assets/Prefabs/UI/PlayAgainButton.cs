using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayAgainButton : MonoBehaviour
{

    public GameOverScreen gameOverScreen;

    [Header("AUDIO")]
    //public AudioSource audioSource;
    public AudioClip playAgainAudioClip;

    IEnumerator returnAfterAudioRoutine;

    void Awake()
    {
        //audioSource = GetComponent<AudioSource>();
    }

    // Restart the level
    // Hide the game_over screen
    public void OnButtonClick()
    {
        GameManager.Singleton.cameraController.audioSource.PlayOneShot(playAgainAudioClip, 1f);
        gameOverScreen.DisableGameOverScreen();

        GameManager.Singleton.OnLevelRestart();
    }



}
