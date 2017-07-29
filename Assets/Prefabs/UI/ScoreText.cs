﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


// Need to pool this and give enemy scripts access to it
// Canvas positioning reference: http://answers.unity3d.com/questions/799616/unity-46-beta-19-how-to-convert-from-world-space-t.html
public class ScoreText : MonoBehaviour
{
    //public Text scoreText;
    public TextMesh scoreText;

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

    [Header("CANVAS_PLACEMENT_LOGIC")]
    public Vector2 canvasOffset;    // For viewport, center of screen is (0,0); for world, it's bottom left, this is the offset
    public Canvas uiCanvas;   // The canvas we're placing UI text on
    public RectTransform canvasTransform;
    public Vector2 viewportPosition;
    public Vector2 proportionalViewportPosition;
    public RectTransform rectTransform;

    public bool isInitializing = false;
    IEnumerator onObjectReuseRoutine;
    IEnumerator displayScoreRoutine;
    IEnumerator fadeRoutine;

    void Awake()
    {
        //isInitializing = true;

        scoreText = GetComponent<TextMesh>();
        rectTransform = GetComponent<RectTransform>();


        // TextMesh resolution fix: http://answers.unity3d.com/questions/20633/textmesh-looking-fuzzy.html?page=2&pageSize=5&sort=votes
        //float pixelRatio = (Camera.main.orthographicSize * 2.0f) / Camera.main.pixelHeight;
        //float fuzziness = 32.0f; // lower number is better, 32 seemed to work for me

        //int previousFontSize = scoreText.fontSize;
        //scoreText.fontSize = Mathf.RoundToInt(scoreText.fontSize / (pixelRatio * fuzziness));

        //float ratio = previousFontSize / ((float)scoreText.fontSize);
        //transform.localScale *= ratio;
        //isInitializing = false;
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.V))
        {
            OnObjectReuse(gameObject);
        }
    }
    // Need to make this pool-able
    public void OnObjectReuse(GameObject target)
    {
        onObjectReuseRoutine = OnObjectReuseRoutine(target);
        StartCoroutine(onObjectReuseRoutine);
    }

    IEnumerator OnObjectReuseRoutine(GameObject target)
    {
        //while (isInitializing)
        //{
        //    yield return null;
        //}
        uiCanvas = UIManager.Singleton.uiCanvas;
        canvasTransform = uiCanvas.GetComponent<RectTransform>();
        canvasOffset = new Vector2(canvasTransform.sizeDelta.x / 2, canvasTransform.sizeDelta.y / 2);   // Offset from lower-left to center

        // Determine points to display
        int pointsToDisplay = 0;
        Ship shipComponent = target.GetComponent<Ship>();
        if (shipComponent == null)
        {
            Turret turretComponent = target.GetComponent<Turret>();
            pointsToDisplay = turretComponent.enemyPoints;
        }
        else
        {
            pointsToDisplay = shipComponent.enemyPoints;
        }
        if (pointsToDisplay > 0)
        {
            // Score multiplier
            pointsToDisplay *= GameManager.Singleton.scoreMultiplier;
            scoreText.text = pointsToDisplay.ToString();
        }
        else
        {
            // To handle Pawn collision case
            scoreText.text = string.Empty;
        }
        transform.position = target.transform.position;
        //transform.SetParent(uiCanvas.transform);
        //viewportPosition = Camera.main.WorldToScreenPoint(target.transform.position);
        //rectTransform.position = viewportPosition;
        //proportionalViewportPosition = new Vector2(viewportPosition.x * canvasTransform.sizeDelta.x, viewportPosition.y * canvasTransform.sizeDelta.y);
        //rectTransform.localPosition = proportionalViewportPosition - canvasOffset;

        displayScoreRoutine = DisplayScoreRoutine(0);
        StartCoroutine(displayScoreRoutine);

        fadeRoutine = FadeRoutine();
        StartCoroutine(fadeRoutine);

        yield return null;
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
        Color initialTextColor = scoreText.color;
        initialTextColor.a = 1f;
        scoreText.color = initialTextColor;
        //Debug.Break();
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