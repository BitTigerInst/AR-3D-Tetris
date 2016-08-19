using UnityEngine;
using System.Collections;

public class Shadow : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		transform.position = FindObjectOfType<Tetromino> ().transform.position;
		transform.rotation = FindObjectOfType<Tetromino> ().transform.rotation;

		while (CheckIsValidPosition ()) {

			transform.position += new Vector3 (0, -1, 0);
		}
		transform.position += new Vector3 (0, 1, 0);
	
	}

	bool CheckIsValidPosition() {

		foreach (Transform mino in transform) {

			Vector3 pos = FindObjectOfType<Game> ().Round (mino.position);

			if (FindObjectOfType<Game> ().CheckIsInsideGrid (pos) == false) {
				
				return false;
			}

			if (FindObjectOfType<Game> ().GetTransformAtGridPosition (pos) != null) {

				string tetroName = FindObjectOfType<Game> ().GetTransformAtGridPosition (pos).parent.gameObject.name;

				string tetroTag = tetroName.Split ('_') [1];

				string shadowTag = name.Split ('_') [1];



				if (!tetroTag.Equals (shadowTag)) {

					return false;
				}
			}

		}

		return true;

	}
}
