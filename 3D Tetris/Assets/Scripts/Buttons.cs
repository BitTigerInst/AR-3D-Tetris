using UnityEngine;
using System.Collections;

public class Buttons : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown() {

		Debug.Log ("on mouse down!");

		Tetromino tetro = FindObjectOfType<Game> ().liveTetromino.GetComponent<Tetromino>();

		switch (name) {

		case "Move_X_pos":
			tetro.MoveXPos ();
			break;
		case "Move_X_neg":
			tetro.MoveXNeg ();
			break;
		case "Move_Z_pos":
			tetro.MoveZPos ();
			break;
		case "Move_Z_neg":
			tetro.MoveZNeg ();
			break;
		case "Rotate_X":
			tetro.RotateX ();
			break;
		case "Rotate_Y":
			tetro.RotateY ();
			break;
		case "Rotate_Z":
			tetro.RotateZ ();
			break;

		}

		tetro.KeyUpHorizontal ();

	}


}
