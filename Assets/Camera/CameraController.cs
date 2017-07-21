using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{

    //public Vector3 startMenuOffset;         // Offset when player on start menu
    public Vector3 playerGameplayOffset;    // Offset during gameplay
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

        // Lotus opening animation plays
        // Now zoom into player, easing in and easing out
        //transitionRatio = 0.0f;
        //while (transitionRatio < 1.0f)
        //{
        //    transform.position = Vector3.Lerp(startAnimationOffset, playerGameplayOffset, transitionRatio);    // Lerp btwn offset orig camera and gameplay camera view
        //    transitionRatio += Time.deltaTime * 1 / startAnimationDuration;       // Animation lasts 2 sec (or whatever value animationDuration is)
        //    yield return null;
        //}
        isTransitioning = false;
    }

}

//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;

//public class CameraMotor : MonoBehaviour
//{

//private Transform lookAt;
//private Vector3 startOffset;
//private Vector3 moveVector;

//private float transition = 0.0f;
//private float animationDuration = 3.0f;     // How long the camera animation at beginning lasts
//private Vector3 animationOffset = new Vector3(0, 8, 5);

//// Use this for initialization
//void Start()
//{
//    lookAt = GameObject.FindGameObjectWithTag("Player").transform;     // Get the Player's transform
//    startOffset = transform.position - lookAt.position;     // Offset btwn camera and player at game start
//}

//// Update is called once per frame
//void LateUpdate()
//{
//    moveVector = lookAt.position + startOffset;     // Start with the offset btwn camera and player

//    // X
//    moveVector.x = 0;       // Camera always looks at center of track

//    // Y
//    moveVector.y = Mathf.Clamp(moveVector.y, 3, 5);     // Restrict camera movement to between Y=3 and Y=5 (up/down)

//    if (transition > 1.0f)
//    {        // Camera transition already ran ([0,1] -> 1 is upper bound of lerp endpoints) 
//        transform.position = moveVector;        // Camera will continue to follow player w/ beginning offset
//    }
//    else
//    {
//        // Animation at start of game
//        transform.position = Vector3.Lerp(moveVector + animationOffset, moveVector, transition);    // Lerp btwn offset orig camera and gameplay camera view
//        transition += Time.deltaTime * 1 / animationDuration;       // Animation lasts 2 sec (or whatever value animationDuration is)
//        transform.LookAt(lookAt.position + Vector3.up);     // Camera rotation facing upwards, then downwards towards player
//    }

//}
//}

