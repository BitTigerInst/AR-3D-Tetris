using UnityEngine;
using System.Collections;

public class Game : MonoBehaviour {

	public static int gridWidth = 10;
	public static int gridHeight = 20;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public bool CheckIsInsideGrid(Vector2 pos) {
		return (int)pos.x >= 0 && (int) pos.x < gridWidth && (int) pos.y >= 0;
	}

	public Vector2 Round (Vector2 pos) {
		return new Vector2 (Mathf.Round (pos.x), Mathf.Round (pos.y));
	}

}
