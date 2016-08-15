using UnityEngine;
using System.Collections;

public class TryClick : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnMouseDown(){
		// this object was clicked - do something
		transform.position += new Vector3(1, 0, 0);
	}  
}
