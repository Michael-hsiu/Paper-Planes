using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


// Need to pool this and give enemy scripts access to it
public class ScoreText : MonoBehaviour
{
    public Text scoreText;

    [Header("SCORE_LERP_LOGIC")]
    public float scoreLerpDuration = 1.0f;
    public float scoreLerpRatio;
    public float currScoreLerpTime;
    public Vector3 displayOffset;   // How far off the enemy we appear
    public float verticalOffset = 5f;  // How far the number translates vertically
    public Vector3 targetVerticalOffset;    // Target destination for our movement lerp

    [Header("FADE_LERP_LOGIC")]
    public float fadeLerpDuration = 1.0f;
    public float fadeLerpRatio;
    public float currFadeLerpTime;


    IEnumerator displayScoreRoutine;
    IEnumerator fadeRoutine;

    void Start()
    {
        scoreText = GetComponent<Text>();
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.V))
        {
            OnObjectReuse();
        }
    }
    // Need to make this pool-able
    public void OnObjectReuse()
    {
        displayScoreRoutine = DisplayScoreRoutine(0);
        StartCoroutine(displayScoreRoutine);

        fadeRoutine = FadeRoutine();
        StartCoroutine(fadeRoutine);
    }

    IEnumerator DisplayScoreRoutine(int scoreToDisplay)
    {
        // Lerp alpha
        scoreLerpRatio = 0.0f;
        Vector3 startOffset = transform.position;
        targetVerticalOffset = startOffset + new Vector3(0, verticalOffset, 0);
        while (scoreLerpRatio < 1.0f)
        {
            float newYCoord = Mathf.Lerp(startOffset.y, targetVerticalOffset.y, scoreLerpRatio);
            transform.position = new Vector3(transform.position.x, newYCoord, transform.position.z);

            scoreLerpRatio += (Time.deltaTime / scoreLerpDuration);
            yield return null;
        }
    }

    IEnumerator FadeRoutine()
    {
        // Move up
        fadeLerpRatio = 0.0f;
        while (fadeLerpRatio < 1.0f)
        {
            // Gradually fade alpha
            // Maybe add exponential modifier?
            Color currScoreTextColor = scoreText.color;
            currScoreTextColor.a = Mathf.Lerp(1f, 0f, fadeLerpRatio);
            scoreText.color = currScoreTextColor;

            fadeLerpRatio += (Time.deltaTime / fadeLerpDuration);
            yield return null;
        }
    }
}
