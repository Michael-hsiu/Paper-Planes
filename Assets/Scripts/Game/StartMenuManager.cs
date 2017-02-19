using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartMenuManager : MonoBehaviour {

	public void PlayGame() {
		SceneManager.LoadScene (Constants.GameScene);
	}

}