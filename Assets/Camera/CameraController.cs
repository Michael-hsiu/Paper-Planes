using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{

    //public Vector3 startMenuOffset;         // Offset when player on start menu
    public Vector3 playerGameplayOffset;    // Offset during gameplay
    public Vector3 activeOffset;            // Depends on which zoom we're using
    //public Vector3 startAnimationOffset;    // Offset when lotus opening animation plays
    public Vector3 startPosition;           // Position when at start menu
    public float startAnimationDuration = 2.0f;
    public float transitionRatio = 0.0f;           // For lerps
    public bool isTransitioning = false;

    [Header("CAMERA_VIEW_VALUES")]
    public float startMenuOrthographicSize = 200.0f;
    public float startAnimationOrthographicSize = 150.0f;
    public float gameplayOrthographicSize = 12.0f;

    IEnumerator startCameraMovementRoutine;
    IEnumerator scoreUICameraMovementRoutine;

    void Awake()
    {
        DontDestroyOnLoad(this);
    }

    void Start()
    {
        startPosition = transform.position;
        startCameraMovementRoutine = StartGameCameraAnimation();
        StartCoroutine(startCameraMovementRoutine);
        //playerGameplayOffset = transform.position - GameManager.Singleton.playerShip.transform.position;
    }

    void LateUpdate()
    {
        if (!isTransitioning)
        {
            transform.position = GameManager.Singleton.playerShip.gameObject.transform.position + playerGameplayOffset;       // Camera follows the player
        }
    }

    IEnumerator StartGameCameraAnimation()
    {
        // Move forward a little, then pause
        isTransitioning = true;
        transitionRatio = 0.0f;
        while (transitionRatio < 1.0f)
        {
            Camera.main.orthographicSize = Mathf.SmoothStep(startMenuOrthographicSize, gameplayOrthographicSize, transitionRatio);
            //transform.position = Vector3.Lerp(startPosition, startAnimationOffset, transitionRatio);    // Lerp btwn offset orig camera and gameplay camera view
            transitionRatio += Time.deltaTime * 1 / startAnimationDuration;       // Animation lasts 2 sec (or whatever value animationDuration is)
            yield return null;
        }
        isTransitioning = false;
    }

    public void StartScoreUICameraAnimation()
    {
        if (scoreUICameraMovementRoutine != null)
        {
            StopCoroutine(scoreUICameraMovementRoutine);
            scoreUICameraMovementRoutine = null;
        }
        scoreUICameraMovementRoutine = StartScoreUICameraAnimationRoutine();
        StartCoroutine(scoreUICameraMovementRoutine);
    }
    IEnumerator StartScoreUICameraAnimationRoutine()
    {
        // Move forward a little, then pause
        isTransitioning = true;
        transitionRatio = 0.0f;
        Vector3 animStartPosition = transform.position;
        while (transitionRatio < 1.0f)
        {
            Camera.main.orthographicSize = Mathf.SmoothStep(gameplayOrthographicSize, startMenuOrthographicSize, transitionRatio);
            transform.position = Vector3.Lerp(animStartPosition, startPosition, transitionRatio);    // Lerp btwn offset orig camera and gameplay camera view
            transitionRatio += Time.deltaTime * 1 / startAnimationDuration;       // Animation lasts 2 sec (or whatever value animationDuration is)
            yield return null;
        }
        //isTransitioning = false;
    }
}
