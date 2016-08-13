using UnityEngine;
using System.Collections;

public class Tetromino : MonoBehaviour {

	float fall = 0;
	public float fallSpeed = 1;


	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
		
		CheckUserInput ();
	}

	void CheckUserInput () {
		if (Input.GetKeyDown (KeyCode.LeftArrow)) {

			transform.position += new Vector3 (-1, 0, 0);

			if (CheckIsValidPosition ()) {

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {
				transform.position += new Vector3 (1, 0, 0);
			}


		} else if (Input.GetKeyDown (KeyCode.RightArrow)) {

			transform.position += new Vector3 (1, 0, 0);

			if (CheckIsValidPosition ()) {

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {
				transform.position += new Vector3 (-1, 0, 0);
			}


		} else if (Input.GetKeyDown (KeyCode.UpArrow)) {

			transform.position += new Vector3 (0, 0, 1);

			if (CheckIsValidPosition ()) {

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {
				transform.position += new Vector3 (0, 0, -1);
			}

		} else if (Input.GetKeyDown (KeyCode.DownArrow)) {

			transform.position += new Vector3 (0, 0, -1);

			if (CheckIsValidPosition ()) {

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {
				transform.position += new Vector3 (0, 0, 1);
			}

		} else if (Input.GetKeyDown(KeyCode.Space) || Time.time - fall >= fallSpeed) {

			transform.position += new Vector3 (0, -1, 0);

			if (CheckIsValidPosition ()) {

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {
				
				transform.position += new Vector3 (0, 1, 0);

				FindObjectOfType<Game> ().DeleteRow ();

//				if (FindObjectOfType<Game> ().CheckIsAboveGrid (this)) {
//
//					FindObjectOfType<Game> ().GameOver ();
//				}

				enabled = false;

				FindObjectOfType<Game> ().SpawnNextTetronimo ();
			}

			fall = Time.time;

		} else if (Input.GetKeyDown (KeyCode.X)) {

			transform.Rotate (90, 0, 0);

			if (CheckIsValidPosition ()) {

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {
				transform.Rotate (-90, 0, 0);
			}

		} else if (Input.GetKeyDown (KeyCode.Y)) {

			transform.Rotate (0, 90, 0);

			if (CheckIsValidPosition ()) {

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {
				transform.Rotate (0, -90, 0);
			}

		} else if (Input.GetKeyDown (KeyCode.Z)) {

			transform.Rotate (0, 0, 90);

			if (CheckIsValidPosition ()) {

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {
				transform.Rotate (0, 0, -90);
			}
		}

	}


	bool CheckIsValidPosition() {

		foreach (Transform mino in transform) {

			Vector3 pos = FindObjectOfType<Game> ().Round (mino.position);

			if (FindObjectOfType<Game> ().CheckIsInsideGrid (pos) == false) {
				return false;
			}

			if (FindObjectOfType<Game> ().GetTransformAtGridPosition (pos) != null && FindObjectOfType<Game> ().GetTransformAtGridPosition (pos).parent != transform) {
				return false;
			}

		}

		return true;

	}



}
