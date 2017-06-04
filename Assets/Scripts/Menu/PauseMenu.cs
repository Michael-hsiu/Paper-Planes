using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour {

	public GameObject pauseMenu;
	public bool paused = false;

	void Update() {
		if (Input.GetKeyDown (KeyCode.Escape)) {
			paused = !paused;
		}

		if (paused) {
			pauseMenu.SetActive (true);
			Time.timeScale = 0f;
		} else {
			pauseMenu.SetActive (false);
			Time.timeScale = 1f;
		}
	}

	public void Resume() {
		paused = false;
	}

	// Saves current wave / level we're on
	/*private void SaveLevel() {
		if (PlayerPrefs.HasKey (Constants.CurrLevel)) {
			//PlayerPrefs.SetInt (Constants.CurrLevel, SceneManager.GetActiveScene ().buildIndex);	// Gets index of currently loaded scene
			PlayerPrefs.SetInt (Constants.CurrLevel, GameManager.Singleton.activeLevelNum);	// Gets id# of current level
			PlayerPrefs.Save ();	// Write updated pref. to disk
		}
	}*/

	// Save current level, then exit to Main Menu
	public void ExitToMainMenu() {
		//SaveLevel ();
		SceneManager.LoadScene (Constants.MainMenu);
	}

	// Reload the current level
	/*public void RestartLevel() {
		GameManager.Singleton.EndLevel (GameManager.Singleton.activeLevelNum);
		GameManager.Singleton.activeLevelNum -= 1;
		GameManager.Singleton.BeginLevel (GameManager.Singleton.activeLevelNum);
	}*/
}
