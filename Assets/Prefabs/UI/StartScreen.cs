using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class StartScreen : MonoBehaviour
{

    [Header("UI_ELEMENTS")]
    public Text titleText;
    public Text tapToStartText;
    public Image logo;

    [Header("TAP_LERP_LOGIC")]
    public float tapEaseInLerpDuration = 0.5f;
    public float tapEaseOutDuration = 0.5f;
    public float tapLerpRatio;
    public float tapStayDuration = 0.4f;
    public Color textStartColor;
    public Color textEndColor;
    public bool assignedStartColor = false;
    public bool onStartScreen = true;

    [Header("TAP_DISAPPEAR_LOGIC")]
    public float tapDisappearDuration = 0.5f;
    public float tapDisappearLerpRatio;
    public Color textDisappearStartColor;
    public Color textDisappearEndColor;

    [Header("CAMERA_REF")]
    public CameraController cameraController;

    [Header("AUDIO")]
    public AudioSource audioSource;
    public AudioClip tapPlayAudioClip;

    IEnumerator tapFadeRoutine;
    IEnumerator startScreenDisappearRoutine;

    void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }

    void Start()
    {
        OnStartScreenEnter();
    }

    public void OnStartScreenEnter()
    {
        if (tapFadeRoutine != null)
        {
            StopCoroutine(tapFadeRoutine);
            tapFadeRoutine = null;
        }
        tapToStartText.gameObject.SetActive(true);
        tapFadeRoutine = OnStartScreenEnterRoutine();
        StartCoroutine(tapFadeRoutine);
    }

    // Fade the start part in and out
    IEnumerator OnStartScreenEnterRoutine()
    {
        while (onStartScreen)
        {
            // Ease in the annoucement
            if (!assignedStartColor)
            {
                textEndColor = tapToStartText.color;
                // Recall that Color alphas range from 0f to 1f
                textEndColor.a = 1.0f;

                textStartColor = textEndColor;
                textStartColor.a = 0.0f;

                assignedStartColor = true;
                //Debug.Break();
            }
            // Prep the text
            tapToStartText.color = textStartColor;

            tapLerpRatio = 0.0f;
            while (tapLerpRatio < 1.0f)
            {
                tapLerpRatio += (Time.deltaTime / tapEaseInLerpDuration);
                Color lerpColor = Color.Lerp(textStartColor, textEndColor, tapLerpRatio);
                tapToStartText.color = lerpColor;
                yield return null;
            }

            // Announcement stays for a duration
            yield return new WaitForSeconds(tapStayDuration);

            // Ease out the annoucement
            tapLerpRatio = 0.0f;
            while (tapLerpRatio < 1.0f)
            {
                tapLerpRatio += (Time.deltaTime / tapEaseOutDuration);
                tapToStartText.color = Color.Lerp(textEndColor, textStartColor, tapLerpRatio);
                yield return null;
            }
            //tapToStartText.gameObject.SetActive(false);
            yield return null;
        }
    }

    // Action to be executed when player taps the start screen
    public void OnClickedOnStartButton()
    {
        if (onStartScreen)
        {
            if (startScreenDisappearRoutine != null)
            {
                StopCoroutine(startScreenDisappearRoutine);
                startScreenDisappearRoutine = null;
            }
            startScreenDisappearRoutine = OnClickedOnStartButtonRoutine();
            StartCoroutine(startScreenDisappearRoutine);
        }
    }
    IEnumerator OnClickedOnStartButtonRoutine()
    {
        // Play tap audio
        audioSource.PlayOneShot(tapPlayAudioClip, 1f);

        onStartScreen = false;
        if (tapFadeRoutine != null)
        {
            StopCoroutine(tapFadeRoutine);
            tapFadeRoutine = null;
        }
        // Fade out the start button and title
        textDisappearStartColor = tapToStartText.color;
        Color startColorCopy = textDisappearStartColor;
        startColorCopy.a = 0f;
        textDisappearEndColor = startColorCopy;

        tapDisappearLerpRatio = 0.0f;
        while (tapDisappearLerpRatio < 1.0f)
        {
            tapDisappearLerpRatio += (Time.deltaTime / tapDisappearDuration);
            Color lerpColor = Color.Lerp(textDisappearStartColor, textDisappearEndColor, tapDisappearLerpRatio);
            tapToStartText.color = lerpColor;
            titleText.color = lerpColor;
            logo.color = lerpColor;
            yield return null;
        }

        // Spawn in the map
        GameManager.Singleton.OnGameStart();
        //cameraController.StartGameCameraAnimation();
    }
}

