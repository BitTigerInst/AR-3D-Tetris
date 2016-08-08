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


		} else if (Input.GetKeyDown (KeyCode.RightArrow)) {

			transform.position += new Vector3 (1, 0, 0);
		

		} else if (Input.GetKeyDown (KeyCode.UpArrow)) {



		} else if (Input.GetKeyDown (KeyCode.DownArrow) || Time.time - fall >= fallSpeed) {

			transform.position += new Vector3 (0, -1, 0);
		

			fall = Time.time;

		}

	}
}
