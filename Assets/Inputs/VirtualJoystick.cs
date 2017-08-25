using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

// Source: https://www.youtube.com/watch?v=6kGxSS66Ba8
public class VirtualJoystick : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{

    public Image bgImg;
    public Image joystickImg;
    public Vector3 inputDirection = Vector3.zero;
    public Vector3 fakeInputDirection;
    public float joystickKnobDistance = 2.0f;       // Scales how far we can pull the knob from confines of the circle region


    void Awake()
    {
        GameManager.Singleton.StartLevelEvent += ResetJoystick;
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
        Debug.Log("ON_DRAG_CALLED!");
        Vector2 pos = Vector2.zero;
        //if (RectTransformUtility.ScreenPointToLocalPointInRectangle(bgImg.rectTransform,
        //                                                            ped.position,
        //                                                            ped.pressEventCamera,
        //                                                            out pos))
        //{
        //pos.x = (pos.x / bgImg.rectTransform.sizeDelta.x);      // Ratio of where exactly clicked inside rectangle
        //pos.y = (pos.y / bgImg.rectTransform.sizeDelta.y);

        //float x = 0f;
        //if (bgImg.rectTransform.pivot.x == 1)
        //{       // If on right
        //    x = pos.x * 2 + 1;
        //}
        //else
        //{                                   // If on left
        //    x = pos.x * 2 - 1;
        //}

        //float y = 0f;

        //if (bgImg.rectTransform.pivot.y == 1)
        //{       // If on right
        //    y = pos.y * 2 + 1;
        //}
        //else
        //{                                   // If on left
        //    y = pos.y * 2 - 1;
        //}


        // Only allow movement if camera is not animating
        if (GameManager.Singleton.cameraIsAnimating)
        {
            // Allow joystick to move, but player will not move

            //fakeInputDirection = new Vector3(x, 0, y);      // Don't move on vertical plane
            fakeInputDirection = (fakeInputDirection.sqrMagnitude > 1) ? fakeInputDirection.normalized : fakeInputDirection;        // Prevent us from pulling front knob out of space of bkgrnd img; works b/c axes go from [-1,1] inclusive

            joystickImg.rectTransform.anchoredPosition = new Vector3(fakeInputDirection.x * (bgImg.rectTransform.sizeDelta.x / 3) * joystickKnobDistance, fakeInputDirection.z * (bgImg.rectTransform.sizeDelta.y / 3) * joystickKnobDistance);       // Move front knob by a third of bgimg size
        }
        else
        {
            // Allow normal in-game movement
            //inputDirection = new Vector3(x, 0, y);      // Don't move on vertical plane
            inputDirection = (inputDirection.sqrMagnitude > 1) ? inputDirection.normalized : inputDirection;        // Prevent us from pulling front knob out of space of bkgrnd img; works b/c axes go from [-1,1] inclusive

            joystickImg.rectTransform.anchoredPosition = new Vector3(inputDirection.x * (bgImg.rectTransform.sizeDelta.x / 3) * joystickKnobDistance, inputDirection.z * (bgImg.rectTransform.sizeDelta.y / 3) * joystickKnobDistance);       // Move front knob by a third of bgimg size
        }
        //}

        Debug.Log(inputDirection);
        //Debug.Log ("BGIMG AREA CLICKED");
    }


    public virtual void OnPointerDown(PointerEventData ped)
    {
        //Debug.Break();
        Debug.Log("ON_PTER_DOWN!");
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            joystickImg.rectTransform.anchoredPosition = Input.GetTouch(0).position;
            inputDirection = Input.GetTouch(0).deltaPosition.normalized;
        }
        else if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            Debug.Log("TOUCHPHASE_ENDED!");
            //Debug.Break();
        }
        //OnDrag(ped);        // A single tap makes front knob snap to touch location

    }

    public virtual void OnPointerUp(PointerEventData ped)
    {
        //inputDirection = Vector3.zero;      // Reset position of joystick on release
        //joystickImg.rectTransform.anchoredPosition = Vector3.zero;      // Return joystick to its center position in bkgrndImg
        Debug.Log("ON_PTER_UP!");

    }

}
