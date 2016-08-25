﻿using UnityEngine;
using System.Collections;

public class Shadow : MonoBehaviour {

	Tetromino liveTetro;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		Tetromino[] tetros = FindObjectsOfType<Tetromino> ();


		liveTetro = new Tetromino();

		foreach (Tetromino tetro in tetros) {

			if (tetro.GetComponent<Tetromino> ().enabled == true) {

				liveTetro = tetro;
				break;
			}
		}
			
		transform.position = liveTetro.transform.position;
		transform.rotation = liveTetro.transform.rotation;

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

			Transform transInGrid = FindObjectOfType<Game> ().GetTransformAtGridPosition (pos);


			if (transInGrid != null && !liveTetro.gameObject.Equals(transInGrid.parent.gameObject)) {

				return false;
			}

		}

		return true;

	}
}
