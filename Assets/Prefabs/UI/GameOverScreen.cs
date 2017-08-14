using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverScreen : MonoBehaviour
{

    public GameObject gameOverScreen;
    public GameObject mapImage;
    public GameObject playAgainButton;

    public int targetScore;
    public int targetnumEnemiesDefeated;
    public int targetnumPowerupsCollected;

    public int numEnemiesDefeated;
    public int numPowerupsCollected;

    [Header("UI_REFERENCES")]
    public Text scoreText;
    public Text numEnemiesDefeatedText;
    public Text numPowerupsCollectedText;

    [Header("SCORE_LERP_LOGIC")]
    public float scoreLerpDuration = 1.0f;
    public float mapAlphaLerpDuration = 3.0f;
    public float numEnemiesLerpDuration = 0.5f;
    public float numPowerupsLerpDuration = 0.5f;
    public float scoreLerpRatio;
    public float numEnemiesLerpRatio;
    public float numPowerupsLerpRatio;
    public float currScoreLerpTime;

    public Color startColor;
    public Color endColor;
    public bool assignedStartColor = false;

    IEnumerator scoreUIControllerRoutine;
    IEnumerator updateUIScoreRoutine;
    IEnumerator updateUINumEnemiesDefeatedRoutine;
    IEnumerator updateUINumPowerupsCollectedRoutine;

    public void Awake()
    {
        gameOverScreen = gameObject;
        numEnemiesDefeatedText.gameObject.SetActive(false);
        numPowerupsCollectedText.gameObject.SetActive(false);
    }

    // Begins Score UI display sequence
    public void OnScoreUIEntered()
    {
        if (scoreUIControllerRoutine != null)
        {
            StopCoroutine(scoreUIControllerRoutine);
            scoreUIControllerRoutine = null;
        }
        scoreUIControllerRoutine = ScoreUIControllerRoutine();
        StartCoroutine(scoreUIControllerRoutine);
    }

    IEnumerator ScoreUIControllerRoutine()
    {
        // Disable score_text
        UIManager.Singleton.scoreText.gameObject.SetActive(false);

        // First lerp the SCORE
        if (updateUIScoreRoutine != null)
        {
            StopCoroutine(updateUIScoreRoutine);
            updateUIScoreRoutine = null;
        }
        updateUIScoreRoutine = UpdateUIScoreRoutine();
        StartCoroutine(updateUIScoreRoutine);
        yield return updateUIScoreRoutine;



        // Next lerp the NUM_ENEM_DEFEATED and NUM_POW_COLLECTED simultaneously
        if (updateUINumEnemiesDefeatedRoutine != null)
        {
            StopCoroutine(updateUINumEnemiesDefeatedRoutine);
            updateUINumEnemiesDefeatedRoutine = null;
        }
        if (updateUINumPowerupsCollectedRoutine != null)
        {
            StopCoroutine(updateUINumPowerupsCollectedRoutine);
            updateUINumPowerupsCollectedRoutine = null;
        }
        updateUINumEnemiesDefeatedRoutine = UpdateUINumEnemiesDefeatedRoutine();
        updateUINumPowerupsCollectedRoutine = UpdateUINumPowerupsCollectedRoutine();

        StartCoroutine(updateUINumEnemiesDefeatedRoutine);
        StartCoroutine(updateUINumPowerupsCollectedRoutine);

        yield return updateUINumEnemiesDefeatedRoutine;
        yield return updateUINumPowerupsCollectedRoutine;

        // Finally display UI for playing again
        //Debug.Break();
        playAgainButton.SetActive(true);
    }


    IEnumerator UpdateUIScoreRoutine()
    {
        // Temp clear the screen (may change to fade out)
        Utils.KillAllEnemies();
        Utils.DisablePowerups();

        // Have empty text for sub-scores
        scoreText.text = string.Empty;
        numEnemiesDefeatedText.text = string.Empty;
        numPowerupsCollectedText.text = string.Empty;

        // Logic for UI score upgrading
        scoreLerpRatio = 0.0f;
        targetScore = GameManager.Singleton.playerScore;
        if (!assignedStartColor)
        {
            startColor = mapImage.GetComponent<SpriteRenderer>().color;
            assignedStartColor = true;
        }
        endColor = startColor;
        endColor.a = 0;
        while (scoreLerpRatio < 1.0f)
        {
            scoreLerpRatio += (Time.deltaTime / scoreLerpDuration);

            // Lerp the text 
            float newScore = (int)Mathf.Lerp(0, targetScore, scoreLerpRatio);
            scoreText.text = newScore.ToString();

            // Fade out the map
            //float newAlpha = Mathf.Lerp(255, 0, scoreLerpRatio);
            //Color mapImageColor = mapImage.GetComponent<SpriteRenderer>().color;
            //mapImageColor.a = newAlpha;
            mapImage.GetComponent<SpriteRenderer>().color = Color.Lerp(startColor, endColor, scoreLerpRatio);
            //Debug.Break();
            //Debug.Log("MAP_IMG_COLOR: " + mapImageColor.a);

            yield return null;
        }
    }

    IEnumerator UpdateUINumEnemiesDefeatedRoutine()
    {
        numEnemiesDefeatedText.gameObject.SetActive(true);
        numEnemiesLerpRatio = 0.0f;
        targetnumEnemiesDefeated = GameManager.Singleton.numEnemiesDefeated;
        float newNumEnemiesDefeated = 0f;
        while (numEnemiesLerpRatio < 1.0f /*&& newNumEnemiesDefeated < targetnumEnemiesDefeated*/)
        {
            numEnemiesLerpRatio += (Time.deltaTime / numEnemiesLerpDuration);

            newNumEnemiesDefeated = (int)Mathf.Lerp(0, targetnumEnemiesDefeated, numEnemiesLerpRatio);
            numEnemiesDefeatedText.text = newNumEnemiesDefeated.ToString();

            yield return null;
        }
    }
    IEnumerator UpdateUINumPowerupsCollectedRoutine()
    {
        numPowerupsCollectedText.gameObject.SetActive(true);
        numPowerupsLerpRatio = 0.0f;
        targetnumPowerupsCollected = GameManager.Singleton.numPowerupsCollected;
        float newNumPowerupsCollected = 0f;
        while (numPowerupsLerpRatio < 1.0f /*&& newNumPowerupsCollected < targetnumPowerupsCollected*/)
        {
            numPowerupsLerpRatio += (Time.deltaTime / numPowerupsLerpDuration);

            newNumPowerupsCollected = (int)Mathf.Lerp(0, targetnumPowerupsCollected, numPowerupsLerpRatio);
            numPowerupsCollectedText.text = newNumPowerupsCollected.ToString();

            yield return null;
        }
    }

    // Called on button press
    public void DisableGameOverScreen()
    {
        // Show the map again
        Color startColor = mapImage.GetComponent<SpriteRenderer>().color;
        startColor.a = 255;
        mapImage.GetComponent<SpriteRenderer>().color = startColor;

        // Disable UI elements
        gameObject.SetActive(false);

        //Debug.Break();
        //mapImage.SetActive(false);
        //playAgainButton.SetActive(false);

    }
}
