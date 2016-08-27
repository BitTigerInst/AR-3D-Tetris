using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class GameMenu : MonoBehaviour {

	public Text levelText;

	// Use this for initialization
	void Start () {
	
		levelText.text = "0";
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
}
