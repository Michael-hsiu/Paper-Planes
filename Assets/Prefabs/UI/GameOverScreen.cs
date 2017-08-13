using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverScreen : MonoBehaviour
{

    public GameObject gameOverScreen;
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
    public float numEnemiesLerpDuration = 0.5f;
    public float numPowerupsLerpDuration = 0.5f;
    public float scoreLerpRatio;
    public float currScoreLerpTime;

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
    }


    IEnumerator UpdateUIScoreRoutine()
    {
        scoreLerpRatio = 0.0f;
        targetScore = GameManager.Singleton.playerScore;
        while (scoreLerpRatio < 1.0f)
        {
            float newScore = (int)Mathf.Lerp(0, targetScore, scoreLerpRatio);
            scoreText.text = newScore.ToString();

            scoreLerpRatio += (Time.deltaTime / scoreLerpDuration);
            yield return null;
        }
    }

    IEnumerator UpdateUINumEnemiesDefeatedRoutine()
    {
        numEnemiesDefeatedText.gameObject.SetActive(true);
        scoreLerpRatio = 0.0f;
        targetnumEnemiesDefeated = GameManager.Singleton.numEnemiesDefeated;
        while (scoreLerpRatio < 1.0f)
        {
            float newNumEnemiesDefeated = (int)Mathf.Lerp(0, targetnumEnemiesDefeated, scoreLerpRatio);
            numEnemiesDefeatedText.text = newNumEnemiesDefeated.ToString();

            scoreLerpRatio += (Time.deltaTime / numEnemiesLerpDuration);
            yield return null;
        }
    }
    IEnumerator UpdateUINumPowerupsCollectedRoutine()
    {
        numPowerupsCollectedText.gameObject.SetActive(true);
        scoreLerpRatio = 0.0f;
        targetnumPowerupsCollected = GameManager.Singleton.numPowerupsCollected;
        while (scoreLerpRatio < 1.0f)
        {
            float newNumPowerupsCollected = (int)Mathf.Lerp(0, targetnumPowerupsCollected, scoreLerpRatio);
            numEnemiesDefeatedText.text = newNumPowerupsCollected.ToString();

            scoreLerpRatio += (Time.deltaTime / numPowerupsLerpDuration);
            yield return null;
        }
    }
}
