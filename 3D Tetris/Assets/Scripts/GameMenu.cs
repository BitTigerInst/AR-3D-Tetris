using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class GameMenu : MonoBehaviour {

	public Text levelText;
	public Text highScoreText;
	public Text highScoreText2;
	public Text highScoreText3;


	// Use this for initialization
	void Start () {
	
		levelText.text = "0";

		highScoreText.text = PlayerPrefs.GetInt ("HighScore").ToString ();
		highScoreText2.text = PlayerPrefs.GetInt ("HighScore2").ToString ();
		highScoreText3.text = PlayerPrefs.GetInt ("HighScore3").ToString ();

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
