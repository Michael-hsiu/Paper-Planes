using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System;


public class UIManager : MonoBehaviour
{
    [Header("SCORE_UI")]
    public float scoreAnimationDuration = 2.0f;
    public float currScoreLerpTime = 0f;
    public float lerpEndTime;
    public float scoreLerpRatio;
    public bool isUpdatingScore = false;
    public int startDisplayedScore = 0;     // Lerp start point
    public int displayedChangingScore = 0;     // Currently lerping score that is displayed

    public Canvas uiCanvas;     // Where all UI elements are rendered
    public Text scoreMultiplierText;    // Score multiplier
    public Text scoreText;
    public Text scoreGoalText;
    public Text levelText;
    public Text healthText;
    public Text dashStoreText;
    public Text burshRushText;
    public Image healthBar;     // The Health Bar that changes in size as health inc/dec
    public GameOverScreen gameOverScreen;   // Screen that displays after player loss
    //public ContinueScreen continueScreen;
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
    public int startHealth = -1;
    public int endHealth = -1;
    public float healthStep = 5.0f;
    public float lerpRatio;
    public Vector3 oldScale;
    public Vector3 newScale;
    public float currLerpTime = 0f;
    public float lerpInterval;      // How long each lerp should take, independent of damage
    public bool isLerping = false;
    public float endHealthCopy;
    public float ratio;
    public int numDequeued = 0;
    public int numTimesHealthUpdated = 0;

    // For when player is hit multiple times in a row, quickly one after another
    public Queue<int> damageQueue = new Queue<int>();
    public int targetEndHealth;
    public int peekValue;
    public int currentMin;


    void Update()
    {
        UpdateScore();
    }

    public void UpdateScoreMultiplier()
    {
        int scoreMultiplier = GameManager.Singleton.scoreMultiplier;
        if (scoreMultiplier > 1)
        {
            scoreMultiplierText.text = "x" + scoreMultiplier;
        }
        else
        {
            scoreMultiplierText.text = string.Empty;
        }
    }

    // Ref: http://answers.unity3d.com/questions/934659/c-adding-and-counting-up-scores-with-mathflerp.html
    public void UpdateScore()
    {
        // Lerp to target score
        if (!isUpdatingScore)
        {
            isUpdatingScore = true;
            currScoreLerpTime = 0f;
        }

        // Continue lerping even if end score continues, lerp will automatically compensate
        currScoreLerpTime += Time.deltaTime;
        lerpRatio = currScoreLerpTime / scoreAnimationDuration;

        // Lerp only if ratio is valid and there has been a score increase
        if (/*lerpRatio <= 1f && */ displayedChangingScore < GameManager.Singleton.playerScore)
        {
            displayedChangingScore = (int)Mathf.Lerp(startDisplayedScore, GameManager.Singleton.playerScore, lerpRatio);
            //Debug.Log(string.Format("DISPLAYED: {0}, START:D {1}", displayedChangingScore, startDisplayedScore));
            //Debug.Break();
            scoreText.text = displayedChangingScore.ToString();
        }
        else
        {
            startDisplayedScore = GameManager.Singleton.playerScore;
            //Debug.Log("START_DISPLAY_SCORE: " + startDisplayedScore);
            isUpdatingScore = false;
        }
    }

    public void UpdateHealth()
    {
        // Text
        //Debug.Log("HEALTH UPDATED");
        healthText.text = "Health: " + GameManager.Singleton.playerHealth.ToString() + " / " + GameManager.Singleton.playerMaxHealth.ToString();

        // Health bar
        endHealth = GameManager.Singleton.playerHealth;
        damageQueue.Enqueue(endHealth);
        //Debug.Log("DAMAGE QUEUE POST ENQUEUE" + Utils.CollectionValues(damageQueue));

        //Debug.Break();
        //StopAllCoroutines();
        if (!isLerping)
        {
            StartNextLerp();
        }
    }

    // TODO: This is problematic when hit by consecutive hits, like when MissileBoss spams missiles. Possible soln: use a queue for additional damage values,
    // which is used if UpdateHealth() is called while a lerp is still active. After the active lerp, the next one is called, and so on, until queue is empty.
    IEnumerator LerpHealthBar()
    {
        // Prevent >1 routine from running at once
        isLerping = true;
        currLerpTime = 0f;

        // If we have many damage values to calculate, bundle multiple into one lerp
        //float damageQueueCount = damageQueue.Count;
        //for (int i = 0; i < damageQueueCount; i++)
        //{
        //    int dequeuedValue = damageQueue.Dequeue();
        //    if (dequeuedValue > 0)
        //    {
        //        targetEndHealth = Mathf.Max(targetEndHealth, dequeuedValue);
        //    }
        //    Utils.PrintValues("DAMAGE QUEUE POST MULTI-DEQUEUE", damageQueue);

        //}

        numDequeued = 1;
        targetEndHealth = damageQueue.Dequeue();
        peekValue = targetEndHealth;
        currentMin = targetEndHealth;

        bool keepCollectingValues = true;
        while (damageQueue.Count > 0 && keepCollectingValues)
        {
            if (peekValue > 0)
            {
                // Only collect values until we pick up a health pack
                peekValue = damageQueue.Peek();
                if (peekValue < currentMin)
                {
                    currentMin = damageQueue.Dequeue();
                    numDequeued += 1;

                }
                else
                {
                    keepCollectingValues = false;
                }

                //targetEndHealth = Mathf.Max(targetEndHealth, dequeuedValue);
            }
            //Debug.Log("DAMAGE QUEUE POST MULTI-DEQUEUE" + Utils.CollectionValues(damageQueue));
            //Debug.Break();
            yield return null;
        }
        //Debug.Break();
        targetEndHealth = currentMin;
        ratio = (float)targetEndHealth / GameManager.Singleton.playerMaxHealth;
        oldScale = healthBar.rectTransform.localScale;
        newScale = new Vector3(8.02f * ratio, scaleY, 1);

        //while (Mathf.Abs(endHealthCopy - startHealthCopy) > 1.0f)
        float workingLerpInterval = lerpInterval;
        float timeFactor = 1f;
        bool lerpSpedUp = false;
        while (currLerpTime < workingLerpInterval)
        {

            // If the player isn't hurt
            if (numTimesHealthUpdated == 0)
            {
                numTimesHealthUpdated += 1;
                break;
            }

            // For if we get health pack while getting attacked
            if (GameManager.Singleton.playerHealth > targetEndHealth)
            {
                break;
            }

            // For if player dies 
            if (GameManager.Singleton.playerHealth == 0)
            {
                newScale = new Vector3(0f, scaleY, 1);
            }
            currLerpTime += Time.deltaTime;
            lerpRatio = currLerpTime / workingLerpInterval;
            //Debug.Log("INSIDE WHILE LOOP");
            //Debug.Break();
            // Speed up lerp if we keep taking damage
            // Many hits registered, so lerp them quickly
            if (!lerpSpedUp && numDequeued > 3)
            {
                workingLerpInterval = Mathf.Clamp(workingLerpInterval * 0.8f, currLerpTime, workingLerpInterval * 0.8f);
                lerpSpedUp = true;
                //lerpRatio = 1;
                //timeFactor = 2f;
                //Debug.Log("FASTER LERP ACTIVATED!");
                //Debug.Break();
            }

            // Terminate this lerp if there are too many damages we need to lerp
            if (damageQueue.Count > 3 && !lerpSpedUp)
            {
                break;

            }

            // Use custom interpolation if only one hit was detected (style points) (currently broken)
            if (numDequeued == 1)
            {

                //lerpRatio *= (lerpRatio * lerpRatio);
                //lerpRatio = (float)Math.Pow(lerpRatio, 3) * (lerpRatio * (6f * lerpRatio - 15f) + 10f);
                //lerpRatio = 1f - Mathf.Abs(Mathf.Cos(lerpRatio * Mathf.PI * 0.5f));
                lerpRatio = Mathf.Sin(lerpRatio * Mathf.PI * 0.5f);
                //Debug.Log("STYLIZED LERP ACTIVATED!");
                //Debug.Break();
            }

            healthBar.rectTransform.localScale = Vector3.Lerp(oldScale, newScale, lerpRatio);     // Resize health bar proportionally
            //Debug.Log("NOW LERPING");
            yield return new WaitForEndOfFrame();
        }

        // Update healths
        isLerping = false;
        if (damageQueue.Count != 0)
        {
            StartNextLerp();
        }

        //startHealth = endHealth;
    }

    // Called from Lerp routine if there are multiple damages we still need to process
    public void StartNextLerp()
    {
        //int targetEndHealth = damageQueue.Dequeue();
        //Utils.PrintValues("DAMAGE QUEUE POST DEQUEUE", damageQueue);
        StartCoroutine(LerpHealthBar());
    }

    public void DisplayGameOverScreen()
    {
        gameOverScreen.gameObject.SetActive(true);
        gameOverScreen.GetComponent<GameOverScreen>().OnScoreUIEntered();
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
        scoreMultiplierText.text = string.Empty;

        // Get original height of health bar
        scaleY = healthBar.rectTransform.localScale.y;
        // Since inspector values are not processed yet
        UpdateHealth();
        startHealth = GameManager.Singleton.playerMaxHealth;

        // SUBSCRIBE to GameManager StartLevelEvent
        GameManager.Singleton.StartLevelEvent += OnLevelStartUpdateUI;
    }

    public void ResetHealthBar()
    {
        healthBar.rectTransform.localScale = new Vector3(8.02f, scaleY, 1);
    }

    // goal=enemiesToKill
    public void OnLevelStartUpdateUI()
    {
        // Reset cached scores from last game (this currently occurs during waves, so messes up score lerp)
        //startDisplayedScore = -1;     // Lerp start point
        //displayedChangingScore = -1;     // Currently lerping score that is displayed

        shopButton.SetActive(false);
        startGameButton.gameObject.SetActive(false);
        scoreGoalText.text = GameManager.Singleton.enemyScoreBoundaries[GameManager.Singleton.currLevel].ToString();

        // Can we dynamically pass in params to event subscribers?
        if (levelGoalRoutine != null)
        {
            StopCoroutine(levelGoalRoutine);
            levelGoalRoutine = null;
            levelGoalText.gameObject.SetActive(false);      // Hide the text
        }
        levelGoalRoutine = IncreaseLevelRoutine(GameManager.Singleton.currLevel);
        StartCoroutine(levelGoalRoutine);
    }

    // Visual cue to players that difficulty is changing
    IEnumerator IncreaseLevelRoutine(int currLevel)
    {

        //String goalText = "WARNING: Difficulty increased!!!";
        // scoreBoundaries list is zero-indexed (1st level is index 0)
        String goalText = "WAVE " + (GameManager.Singleton.currLevel + 1) + ": BEGIN!";
        levelGoalText.gameObject.SetActive(true);
        levelGoalText.text = goalText;
        yield return new WaitForSeconds(1.5f);  // Show the level goal text on screen

        // Blink on and off
        //levelGoalText.gameObject.SetActive(false);      // Hide the text
        //yield return new WaitForSeconds(0.3f);  // Show the level goal text on screen

        //levelGoalText.gameObject.SetActive(true);
        //yield return new WaitForSeconds(0.7f);  // Show the level goal text on screen

        //levelGoalText.gameObject.SetActive(false);      // Hide the text
        //yield return new WaitForSeconds(0.3f);  // Show the level goal text on screen

        //levelGoalText.gameObject.SetActive(true);
        //yield return new WaitForSeconds(0.7f);  // Show the level goal text on screen

        levelGoalText.gameObject.SetActive(false);      // Hide the text
        levelGoalRoutine = null;
        //}
    }

    public void EndLevel(int level)
    {
        //DisplayVictoryScreen();                                 // Opens the Victory Screen and the only current way of progressing to next level.
        //GameManager.Singleton.shopButton.SetActive (true);		// Shop is active when level is over
    }

    public void RestartLevel()
    {
        // Restart
        startDisplayedScore = 0;     // Lerp start point
        displayedChangingScore = 0;     // Currently lerping score that is displayed
        scoreText.text = 0.ToString();

        //DisableFailureScreen();
        //DisableContinueScreen();
        ResetHealthBar();
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

    public void UpdateDashText(int dashes)
    {
        dashStoreText.text = "Stored Dashes: " + dashes;
    }

    public void UpdateBurstRushText()
    {
        burshRushText.text = "Burst Rushes: " + GameManager.Singleton.rushes.Count;     // See how many rushes are left in our list
    }

}
