using UnityEngine;
using System.Collections;

public class RotateY : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown(){

		FindObjectOfType<Tetromino>().RotateY();
	}
}
