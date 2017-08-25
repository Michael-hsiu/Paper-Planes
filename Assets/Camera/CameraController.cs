using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
    public GameObject gameMap;          // Actual image of the map
    public GameObject tutorialUIContainer;      // Contains all tutorial UI elements
    public GameObject pauseButton;      // Could be disabled on game_over
    public bool tutorialEnabled;

    [Header("CAMERA_VIEW_VALUES")]
    public float startMenuOrthographicSize = 200.0f;
    public float startAnimationOrthographicSize = 150.0f;
    public float gameplayOrthographicSize = 12.0f;

    [Header("TUTORIAL_UI_LERP_LOGIC")]
    public float tutorialStayDuration = 10.0f;      // How long tutorial text stays before disappearing
    public float tutorialDisappearDuration = 0.5f;
    public float tutorialDisappearLerpRatio;
    public Color tutorialDisappearStartColor;
    public Color tutorialDisappearEndColor;
    public bool assignedStartColor = false;
    public TextMesh tutorialTextSample;
    public TextMesh tutorialTextMesh01;
    public TextMesh tutorialTextMesh02;
    public TextMesh tutorialTextMesh03;

    [Header("GAME_UI_ELEMENTS")]
    public GameObject gameUIContainer;
    //public GameObject scoreText;
    //public GameObject healthBar;
    public GameObject leftJoystick;
    //public GameObject rightJoystick;
    //public List<GameObject> lerpOnStartObjectsRaw = new List<GameObject>();    // UI elements to fade in
    //public List<ColoredGameObject> lerpOnStartObjects = new List<ColoredGameObject>();    // UI elements to fade in

    [Header("AUDIO")]
    public AudioSource audioSource;
    public AudioSource bomberAudioSource;

    public AudioClip bgmAudioClip;
    public float audioDelay = 3.0f;

    IEnumerator startCameraMovementRoutine;
    IEnumerator scoreUICameraMovementRoutine;
    IEnumerator tutorialUIDisappearRoutine;

    // To contain each object's original and end colors
    //class ColoredGameObject
    //{
    //    public GameObject gameObj;
    //    public Color startColor;
    //    public Color endColor;
    //}

    void Awake()
    {
        //audioSource = GetComponent<AudioSource>();
        DontDestroyOnLoad(this);
        //audioSource.time = audioDelay;
        audioSource.clip = bgmAudioClip;
        audioSource.Play();
        //StartCoroutine(DelayedAudioRoutine());
    }

    //IEnumerator DelayedAudioRoutine()
    //{
    //    yield return new WaitForSeconds(audioDelay);
    //    audioSource.PlayOneShot(bgmAudioClip);
    //}

    void Start()
    {
        // Always directly above playerShip
        transform.position = new Vector3(GameManager.Singleton.playerShip.transform.position.x, GameManager.Singleton.playerShip.transform.position.y, transform.position.z);
        startPosition = transform.position;

        //startCameraMovementRoutine = StartGameCameraAnimationRoutine();
        //StartCoroutine(startCameraMovementRoutine);
        //playerGameplayOffset = transform.position - GameManager.Singleton.playerShip.transform.position;
    }

    void LateUpdate()
    {
        if (!isTransitioning && GameManager.Singleton.levelActive)
        {
            transform.position = GameManager.Singleton.playerShip.gameObject.transform.position + playerGameplayOffset;       // Camera follows the player
        }
    }

    IEnumerator StartTutorialTextFade()
    {
        // Let the text display for a while before fading
        yield return new WaitForSeconds(tutorialStayDuration);
        //Debug.Break();
        // Now start fading it out
        tutorialDisappearLerpRatio = 0.0f;
        while (tutorialDisappearLerpRatio < 1.0f)
        {

            tutorialDisappearLerpRatio += (Time.deltaTime / tutorialDisappearDuration);
            Color lerpColor = Color.Lerp(tutorialDisappearStartColor, tutorialDisappearEndColor, tutorialDisappearLerpRatio);
            tutorialTextMesh01.color = lerpColor;
            tutorialTextMesh02.color = lerpColor;
            tutorialTextMesh03.color = lerpColor;
            yield return null;
        }
    }

    // Zoom in the camera to player
    public void StartGameCameraAnimation()
    {

        // Set Game UI elements active
        gameUIContainer.SetActive(true);
        gameMap.SetActive(true);
        pauseButton.SetActive(true);

        // Move camera to its start position
        transform.position = startPosition;

        // Bool is controlled by GM on level start
        if (tutorialEnabled)
        {

            // No tutorial during next playthrough, unless activated thru Pause Menu
            //tutorialEnabled = false;
            PlayerPrefs.SetInt(Constants.tutorialEnabled, 0);
            PlayerPrefs.Save();

            tutorialUIContainer.SetActive(true);
            // Ease in the announcement
            if (!assignedStartColor)
            {
                tutorialDisappearStartColor = tutorialTextSample.color;
                // Recall that Color alphas range from 0f to 1f
                tutorialDisappearStartColor.a = 1.0f;

                tutorialDisappearEndColor = tutorialDisappearStartColor;
                tutorialDisappearEndColor.a = 0.0f;

                assignedStartColor = true;
                //Debug.Break();
            }
            // Restore alphas to full
            else
            {
                tutorialTextMesh01.color = tutorialDisappearStartColor;
                tutorialTextMesh02.color = tutorialDisappearStartColor;
                tutorialTextMesh03.color = tutorialDisappearStartColor;
            }
            if (tutorialUIDisappearRoutine != null)
            {
                StopCoroutine(tutorialUIDisappearRoutine);
                tutorialUIDisappearRoutine = null;
            }
            tutorialUIDisappearRoutine = StartTutorialTextFade();
            StartCoroutine(tutorialUIDisappearRoutine);



            Debug.Log("TUT_ENABLED_INT_NEW: " + PlayerPrefs.GetInt(Constants.tutorialEnabled));
        }
        else if (assignedStartColor)
        {
            tutorialTextMesh01.color = tutorialDisappearEndColor;
            tutorialTextMesh02.color = tutorialDisappearEndColor;
            tutorialTextMesh03.color = tutorialDisappearEndColor;
        }
        //healthBar.SetActive(true);
        //leftJoystick.SetActive(true);
        //rightJoystick.SetActive(true);

        if (startCameraMovementRoutine != null)
        {
            StopCoroutine(startCameraMovementRoutine);
            startCameraMovementRoutine = null;
        }
        startCameraMovementRoutine = StartGameCameraAnimationRoutine();
        StartCoroutine(startCameraMovementRoutine);
    }
    IEnumerator StartGameCameraAnimationRoutine()
    {
        GameManager.Singleton.cameraIsAnimating = true;

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
        GameManager.Singleton.cameraIsAnimating = false;
        isTransitioning = false;
    }

    // Zoom out camera to show whole map
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
