using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class VirtualDraggableJoystick : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{

    public Image bgImg;
    public Image joystickImg;

    public Vector3 inputDirection = Vector3.zero;
    public Vector3 fakeInputDirection;
    public Camera tapHandleCamera;
    //public float joystickKnobDistance = 2.0f;       // Scales how far we can pull the knob from confines of the circle region

    void Awake()
    {
        //GameManager.Singleton.StartLevelEvent += ResetJoystick;
    }

    void Update()
    {
        Debug.Log("TOUCH_COUNT_UPDATE: " + Input.touchCount);

    }
    private void ResetJoystick()
    {
        // Reset joystick on game_start
        inputDirection = Vector3.zero;
        joystickImg.rectTransform.anchoredPosition = Vector3.zero;      // Return joystick_img to center of mount 

        Debug.Log("JOYSTICK_RESET");
        //Debug.Break();
    }

    public virtual void OnDrag(PointerEventData ped)
    {
        if (GameManager.Singleton.levelActive)
        {
            Debug.Log("TOUCH_COUNT_PTER_DRAG: " + Input.touchCount);

            Debug.Log("ON_DRAG_CALLED!");
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                Vector2 tapPoint = Input.GetTouch(0).position;
                tapPoint = tapHandleCamera.ScreenToWorldPoint(new Vector3(tapPoint.x, tapPoint.y, transform.position.z));        // Core logic
                                                                                                                                 //tapPoint.y = Screen.width - tapPoint.y;
                                                                                                                                 //bgImg.rectTransform.anchoredPosition3D = tapPoint;
                joystickImg.rectTransform.anchoredPosition3D = tapPoint;
                //inputDirection = Input.GetTouch(0).deltaPosition.normalized;
                Debug.Log("TOUCHPHASE_MOVED!");

                // Move joystick indicator to tap position. Only move player is camera is not animating!
                joystickImg.rectTransform.anchoredPosition3D = tapPoint;
                if (!GameManager.Singleton.cameraIsAnimating)
                {
                    inputDirection = (Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position) - Camera.main.transform.position).normalized;
                }

                //Vector3 rawInputDirection = Input.GetTouch(0).deltaPosition.normalized;
                //inputDirection = new Vector3(rawInputDirection.x, rawInputDirection.z, 0f);

                Debug.Log("INPUT_DIR: " + inputDirection);
            }
        }

        //Vector2 pos = Vector2.zero;


        // Only allow movement if camera is not animating
        //if (GameManager.Singleton.cameraIsAnimating)
        //{
        //    // Allow joystick to move, but player will not move

        //    //fakeInputDirection = new Vector3(x, 0, y);      // Don't move on vertical plane
        //    fakeInputDirection = (fakeInputDirection.sqrMagnitude > 1) ? fakeInputDirection.normalized : fakeInputDirection;        // Prevent us from pulling front knob out of space of bkgrnd img; works b/c axes go from [-1,1] inclusive

        //    joystickImg.rectTransform.anchoredPosition = new Vector3(fakeInputDirection.x * (bgImg.rectTransform.sizeDelta.x / 3) * joystickKnobDistance, fakeInputDirection.z * (bgImg.rectTransform.sizeDelta.y / 3) * joystickKnobDistance);       // Move front knob by a third of bgimg size
        //}
        //else
        //{
        //    // Allow normal in-game movement
        //    //inputDirection = new Vector3(x, 0, y);      // Don't move on vertical plane
        //    inputDirection = (inputDirection.sqrMagnitude > 1) ? inputDirection.normalized : inputDirection;        // Prevent us from pulling front knob out of space of bkgrnd img; works b/c axes go from [-1,1] inclusive

        //    joystickImg.rectTransform.anchoredPosition = new Vector3(inputDirection.x * (bgImg.rectTransform.sizeDelta.x / 3) * joystickKnobDistance, inputDirection.z * (bgImg.rectTransform.sizeDelta.y / 3) * joystickKnobDistance);       // Move front knob by a third of bgimg size
        //}
        //}

        //Debug.Log(inputDirection);
        //Debug.Log ("BGIMG AREA CLICKED");
    }


    public virtual void OnPointerDown(PointerEventData ped)
    {
        //Debug.Break();
        //bgImg.gameObject.SetActive(true);
        if (GameManager.Singleton.levelActive)
        {
            joystickImg.gameObject.SetActive(true);

            Debug.Log("ON_PTER_DOWN!");
            Debug.Log("TOUCH_COUNT_PTER_DOWN: " + Input.touchCount);




            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            {
                if (GameManager.Singleton.cameraIsAnimating)
                {
                    Vector2 tapPoint = Input.GetTouch(0).position;
                    tapPoint = tapHandleCamera.ScreenToWorldPoint(tapPoint);        // Core logic

                    //bgImg.rectTransform.anchoredPosition = tapPoint;
                    joystickImg.rectTransform.anchoredPosition = tapPoint;

                    //inputDirection = Input.GetTouch(0).deltaPosition.normalized;
                }
                else
                {

                }

                Debug.Log("TOUCHPHASE_BEGAN!");
            }
            else if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                Vector2 tapPoint = Input.GetTouch(0).position;
                tapPoint = tapHandleCamera.ScreenToWorldPoint(tapPoint);        // Core logic

                //bgImg.rectTransform.anchoredPosition = tapPoint;
                joystickImg.rectTransform.anchoredPosition = tapPoint;

                //inputDirection = Input.GetTouch(0).deltaPosition.normalized;
                Debug.Log("TOUCHPHASE_MOVED!");
            }
            else if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                Debug.Log("TOUCHPHASE_ENDED!");
                //Debug.Break();
            }
            //OnDrag(ped);        // A single tap makes front knob snap to touch location

        }

    }

    public virtual void OnPointerUp(PointerEventData ped)
    {
        //inputDirection = Vector3.zero;      // Reset position of joystick on release
        //joystickImg.rectTransform.anchoredPosition = Vector3.zero;      // Return joystick to its center position in bkgrndImg
        //bgImg.gameObject.SetActive(false);

        joystickImg.gameObject.SetActive(false);

        if (GameManager.Singleton.levelActive)
        {
            inputDirection = Vector3.zero;      // Stop player from moving when not touching screen
            Debug.Log("ON_PTER_UP!");
        }

    }

}
