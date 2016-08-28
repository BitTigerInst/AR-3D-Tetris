using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class GameMenu : MonoBehaviour {

	public Text levelText;
	public Text highScoreText;

	// Use this for initialization
	void Start () {
	
		levelText.text = "0";

		highScoreText.text = PlayerPrefs.GetInt ("HighScore").ToString ();

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void PlayGame () {

		Application.LoadLevel ("testing");
	}

	public void LevelChanged (float value) {

		Game.startingLevel = (int)value;
		levelText.text = value.ToString ();
	}

	public void PlayAgain() {

		Application.LoadLevel ("testing");
	}

	public void BackToGameMenu () {

		Application.LoadLevel ("GameMenu");
	}
}
