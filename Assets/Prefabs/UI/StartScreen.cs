using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartScreen : MonoBehaviour
{

    [Header("UI_ELEMENTS")]
    public Text titleText;
    public Text tapToStartText;

    [Header("TAP_LERP_LOGIC")]
    public float tapEaseInLerpDuration = 0.5f;
    public float tapEaseOutDuration = 0.5f;
    public float tapLerpRatio;
    public float tapStayDuration = 0.4f;
    public Color textStartColor;
    public Color textEndColor;
    public bool assignedStartColor = false;
    public bool onStartScreen = true;

    IEnumerator tapFadeRoutine;

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
            Debug.Log("IN_ROUTINE");
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

            // Annoucement stays for a duration
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

    public void OnClickedOnStartButton()
    {
        Debug.Log("CLICKED_START!");
    }
}

