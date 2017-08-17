using UnityEngine;
using UnityEditor;

// From: http://answers.unity3d.com/questions/39360/how-to-get-to-the-editor-to-display-a-childs-world.html
public static class DebugMenu
{
    [MenuItem("Debug/Print Global Position & Rotation")]
    public static void PrintGlobalPosition()
    {
        if (Selection.activeGameObject != null)
        {
            Debug.Log(Selection.activeGameObject.name + " is at " + Selection.activeGameObject.transform.position);
            Debug.Log(Selection.activeGameObject.name + " rotation is: " + Selection.activeGameObject.transform.rotation.eulerAngles);

        }
    }

    [MenuItem("Debug/Print Current Game Time")]
    public static void PrintCurrentGameTime()
    {
        Debug.Log("CURRENT_GAME_TIME: " + Time.time);
    }
}