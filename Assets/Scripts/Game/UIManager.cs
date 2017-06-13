using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class UIManager : MonoBehaviour
{


    /************************ [VARIABLES & PROPERTIES] ************************/

    public Text scoreText;
    public Text scoreGoalText;
    public Text levelText;
    public Text healthText;
    public Text dashStoreText;
    public Text burshRushText;
    public Image healthBar;     // The Health Bar that changes in size as health inc/dec
    public ContinueScreen continueScreen;
    public Button startGameButton;      // Primary button for beginning the game
    public GameObject shopButton;
    public float scaleY;    // Original height of health bar
    // Level update text
    public Text levelGoalText;
    public Text levelEndText;
    //public Text startGameText;
    public IEnumerator levelGoalRoutine;
    public IEnumerator levelEndRoutine;

    public float displayLength = 3.0f;  // How long dialog appears on-screen
    public float startHealth = -1f;
    public float endHealth = -1f;
    public float healthStep = 5.0f;
    public float lerpRatio;
    public Vector3 oldScale;
    public Vector3 newScale;
    public float startHealthCopy = 0f;
    public float endHealthCopy;
    public float ratio;

    public void UpdateHealth()
    {
        // Text
        Debug.Log("HEALTH UPDATED");
        healthText.text = "Health: " + GameManager.Singleton.playerHealth.ToString() + " / " + GameManager.Singleton.playerMaxHealth.ToString();

        // Health bar
        endHealth = GameManager.Singleton.playerHealth;
        StopAllCoroutines();
        StartCoroutine(LerpHealthBar());
        //Debug.Log ("RATIO: " + ratio);
        //healthBar.rectTransform.localScale = new Vector3 (ratio, 1, 1);       // Resize health bar proportionally
        //healthBar.rectTransform.localScale = new Vector3(8.02f * ratio, scaleY, 1);     // Resize health bar proportionally

    }

    IEnumerator LerpHealthBar()
    {
        startHealthCopy = 0f;
        endHealthCopy = startHealth - endHealth;

        ratio = (float)GameManager.Singleton.playerHealth / GameManager.Singleton.playerMaxHealth;
        oldScale = healthBar.rectTransform.localScale;
        newScale = new Vector3(8.02f * ratio, scaleY, 1);

        while ((endHealthCopy - startHealthCopy) > 1.0f)
        {
            startHealthCopy += healthStep;
            lerpRatio = startHealthCopy / endHealthCopy;
            //lerpRatio *= (lerpRatio * lerpRatio);
            //lerpRatio = 1f - Mathf.Abs(Mathf.Cos(lerpRatio * Mathf.PI * 0.5f));
            lerpRatio = Mathf.Abs(Mathf.Sin(lerpRatio * Mathf.PI * 0.5f));
            healthBar.rectTransform.localScale = Vector3.Lerp(oldScale, newScale, lerpRatio);     // Resize health bar proportionally
            Debug.Log("NOW LERPING");
            //Debug.Break();
            yield return new WaitForEndOfFrame();
        }

        // Update healths
        startHealth = endHealth;
    }

    void Awake()
    {
        if (singleton == null)
        {
            singleton = this;
        }
        else
        {
            DestroyImmediate(this);
        }
    }

    void Start()
    {
        // Get original height of health bar
        scaleY = healthBar.rectTransform.localScale.y;
        // Since inspector values are not processed yet
        UpdateHealth();
        startHealth = GameManager.Singleton.playerMaxHealth;

        // SUBSCRIBE to GameManager StartLevelEvent
        GameManager.Singleton.StartLevelEvent += OnLevelStartUpdateUI;
    }

    // goal=enemiesToKill
    public void OnLevelStartUpdateUI()
    {

        // Can we dynamically pass in params to event subscribers?
        levelGoalRoutine = IncreaseLevelRoutine(GameManager.Singleton.currLevel);

        shopButton.SetActive(false);
        startGameButton.gameObject.SetActive(false);
        scoreGoalText.text = GameManager.Singleton.scoreBoundaries[GameManager.Singleton.currLevel].ToString();

        //StopAllCoroutines ();
        StartCoroutine(levelGoalRoutine);
    }

    // Visual cue to players that difficulty is changing
    IEnumerator IncreaseLevelRoutine(int currLevel)
    {

        if (currLevel == 0)
        {

            String goalText = "Ready...begin!!!";
            levelGoalText.gameObject.SetActive(true);
            levelGoalText.text = goalText;
            yield return new WaitForSeconds(1.5f);  // Show the level goal text on screen
            levelGoalText.gameObject.SetActive(false);      // Hide the text

        }
        else
        {

            String goalText = "WARNING: Difficulty increased!!!";
            levelGoalText.gameObject.SetActive(true);
            levelGoalText.text = goalText;
            yield return new WaitForSeconds(0.7f);  // Show the level goal text on screen

            // Blink on and off
            levelGoalText.gameObject.SetActive(false);      // Hide the text
            yield return new WaitForSeconds(0.3f);  // Show the level goal text on screen

            levelGoalText.gameObject.SetActive(true);
            yield return new WaitForSeconds(0.7f);  // Show the level goal text on screen

            levelGoalText.gameObject.SetActive(false);      // Hide the text
            yield return new WaitForSeconds(0.3f);  // Show the level goal text on screen

            levelGoalText.gameObject.SetActive(true);
            yield return new WaitForSeconds(0.7f);  // Show the level goal text on screen

            levelGoalText.gameObject.SetActive(false);      // Hide the text
        }
    }




    public void EndLevel(int level)
    {
        DisplayVictoryScreen();                                 // Opens the Victory Screen and the only current way of progressing to next level.
                                                                //GameManager.Singleton.shopButton.SetActive (true);		// Shop is active when level is over
    }

    public void DisableContinueScreen()
    {
        continueScreen.gameObject.SetActive(false);
    }

    public void DisplayVictoryScreen()
    {
        continueScreen.gameObject.SetActive(true);
        continueScreen.GetComponent<ContinueScreen>().OpenVictoryContinueScreen();
        Debug.Log("VICTORY SCREEN");
        /*EnableVictoryScreen ();
		DisableFailureScreen ();*/
    }

    public void DisplayFailureScreen()
    {
        continueScreen.gameObject.SetActive(true);
        continueScreen.GetComponent<ContinueScreen>().OpenFailureContinueScreen();
        /*DisableVictoryScreen ();
		EnableFailureScreen ();*/
    }


    public void EnableVictoryScreen()
    {
        continueScreen.victoryScreen.SetActive(true);
    }

    public void DisableVictoryScreen()
    {
        continueScreen.victoryScreen.SetActive(false);
    }

    public void EnableFailureScreen()
    {
        continueScreen.failureScreen.SetActive(true);
    }

    public void DisableFailureScreen()
    {
        continueScreen.failureScreen.SetActive(false);
    }


    //Singleton implementation
    private static UIManager singleton;
    public static UIManager Singleton
    {
        get
        {
            if (singleton == null)
            {
                singleton = new UIManager();
            }
            return singleton;
        }
    }

    public void UpdateScore()
    {
        scoreText.text = GameManager.Singleton.playerScore.ToString();
    }



    public void UpdateDashText(int dashes)
    {
        dashStoreText.text = "Stored Dashes: " + dashes;
    }

    public void UpdateBurstRushText()
    {
        burshRushText.text = "Burst Rushes: " + GameManager.Singleton.rushes.Count;     // See how many rushes are left in our list
    }

}
