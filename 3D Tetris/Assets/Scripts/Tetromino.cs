using UnityEngine;
using System.Collections;

public class Tetromino : MonoBehaviour {

	float fall = 0;
	public float fallSpeed = 1;

	public int individualScore = 100;

	private float individualScoreTime;

	public AudioClip moveSound;
	public AudioClip rotateSound;
	public AudioClip landSound;

	private AudioSource audioSource;

	private float continuosVerticalSpeed = 0.05f;
	private float continuosHorizontalSpeed = 0.1f;
	private float buttonDownWaitMax = 0.2f;

	private float verticalTimer = 0;
	private float horizontalTimer = 0;
	private float buttonDownWaitTimer = 0;

	private bool movedImmediateHorizontal = false;
	private bool movedImmediateVertical = false;


	// Use this for initialization
	void Start () {

		audioSource = GetComponent<AudioSource> ();

	}

	// Update is called once per frame
	void Update () {
		
		CheckUserInput ();

		UpdateIndividualScore ();
	}

	void UpdateIndividualScore () {

		if (individualScoreTime < 1) {

			individualScoreTime += Time.deltaTime;

		} else {

			individualScoreTime = 0;

			individualScore = Mathf.Max (individualScore - 10, 0);
		}
			

	}

	void CheckUserInput () {

		if (Input.GetKeyUp (KeyCode.LeftArrow) || Input.GetKeyUp (KeyCode.RightArrow) || Input.GetKeyUp (KeyCode.UpArrow) || Input.GetKeyDown (KeyCode.DownArrow) || Input.GetKeyUp (KeyCode.Space)) {

			horizontalTimer = 0;
			verticalTimer = 0;
			buttonDownWaitTimer = 0;

			movedImmediateHorizontal = false;
			movedImmediateVertical = false;
		}

		if (Input.GetKey (KeyCode.LeftArrow)) {

			if (movedImmediateHorizontal) {

				if (buttonDownWaitTimer < buttonDownWaitMax) {

					buttonDownWaitTimer += Time.deltaTime;
					return;
				}

				if (horizontalTimer < continuosHorizontalSpeed) {

					horizontalTimer += Time.deltaTime;

					return;
				}
			}

			if (!movedImmediateHorizontal) {
				movedImmediateHorizontal = true;
			}

			horizontalTimer = 0;

			MoveXNeg ();

		} else if (Input.GetKey (KeyCode.RightArrow)) {

			if (movedImmediateHorizontal) {

				if (buttonDownWaitTimer < buttonDownWaitMax) {

					buttonDownWaitTimer += Time.deltaTime;
					return;
				}

				if (horizontalTimer < continuosHorizontalSpeed) {

					horizontalTimer += Time.deltaTime;

					return;
				}
			}

			if (!movedImmediateHorizontal) {
				movedImmediateHorizontal = true;
			}

			horizontalTimer = 0;

			MoveXPos ();

		} else if (Input.GetKey (KeyCode.UpArrow)) {

			if (movedImmediateHorizontal) {

				if (buttonDownWaitTimer < buttonDownWaitMax) {

					buttonDownWaitTimer += Time.deltaTime;
					return;
				}

				if (horizontalTimer < continuosHorizontalSpeed) {

					horizontalTimer += Time.deltaTime;

					return;
				}
			}

			if (!movedImmediateHorizontal) {
				movedImmediateHorizontal = true;
			}

			horizontalTimer = 0;

			MoveZPos ();

		} else if (Input.GetKey (KeyCode.DownArrow)) {

			if (movedImmediateHorizontal) {

				if (buttonDownWaitTimer < buttonDownWaitMax) {

					buttonDownWaitTimer += Time.deltaTime;
					return;
				}

				if (horizontalTimer < continuosHorizontalSpeed) {

					horizontalTimer += Time.deltaTime;

					return;
				}
			}

			if (!movedImmediateHorizontal) {
				movedImmediateHorizontal = true;
			}

			horizontalTimer = 0;

			MoveZNeg ();

		} else if (Input.GetKey (KeyCode.Space) || Time.time - fall >= fallSpeed) {

			if (movedImmediateVertical) {

				if (buttonDownWaitTimer < buttonDownWaitMax) {

					buttonDownWaitTimer += Time.deltaTime;
					return;
				}

				if (verticalTimer < continuosVerticalSpeed) {

					verticalTimer += Time.deltaTime;
					return;
				}
			}

			if (!movedImmediateVertical) {
				movedImmediateVertical = true;
			}
			verticalTimer = 0;

			transform.position += new Vector3 (0, -1, 0);

			if (CheckIsValidPosition ()) {

				if (Input.GetKey (KeyCode.Space)) {

					PlayMoveAudio ();
				}

				FindObjectOfType<Game> ().UpdateGrid (this);

			} else {

				PlayLandAudio ();

				Destroy (FindObjectOfType<Shadow> ().gameObject);
				
				transform.position += new Vector3 (0, 1, 0);

				FindObjectOfType<Game> ().DeleteRow ();

				if (FindObjectOfType<Game> ().CheckIsAboveGrid (this)) {

					FindObjectOfType<Game> ().GameOver ();
				}

				enabled = false;

				Game.currentScore += individualScore;

				FindObjectOfType<Game> ().SpawnNextTetronimo ();
			}

			fall = Time.time;

		} else if (Input.GetKeyDown (KeyCode.X)) {

			RotateX ();

		} else if (Input.GetKeyDown (KeyCode.Y)) {

			RotateY ();

		} else if (Input.GetKeyDown (KeyCode.Z)) {

			RotateZ ();
		}

	}



	public void MoveXPos () {

		transform.position += new Vector3 (1, 0, 0);

		if (CheckIsValidPosition ()) {

			PlayMoveAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.position += new Vector3 (-1, 0, 0);
		}
	}

	public void MoveXNeg () {

		transform.position += new Vector3 (-1, 0, 0);

		if (CheckIsValidPosition ()) {

			PlayMoveAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.position += new Vector3 (1, 0, 0);
		}
	}

	public void MoveZPos () {

		transform.position += new Vector3 (0, 0, 1);

		if (CheckIsValidPosition ()) {

			PlayMoveAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.position += new Vector3 (0, 0, -1);
		}
	}

	public void MoveZNeg () {

		transform.position += new Vector3 (0, 0, -1);

		if (CheckIsValidPosition ()) {

			PlayMoveAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.position += new Vector3 (0, 0, 1);
		}
	}

	public void RotateX () {

		transform.Rotate (90, 0, 0, Space.World);

		if (CheckIsValidPosition ()) {

			PlayRotateAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.Rotate (-90, 0, 0, Space.World);
		}
	}

	public void RotateY () {
		
		transform.Rotate (0, 90, 0, Space.World);

		if (CheckIsValidPosition ()) {

			PlayRotateAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.Rotate (0, -90, 0, Space.World);
		}
	}

	public void RotateZ () {

		transform.Rotate (0, 0, 90, Space.World);

		if (CheckIsValidPosition ()) {

			PlayRotateAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.Rotate (0, 0, -90, Space.World);
		}
	}


	void PlayMoveAudio () {

		audioSource.PlayOneShot (moveSound);
	}

	void PlayRotateAudio () {

		audioSource.PlayOneShot (rotateSound);
	}

	void PlayLandAudio () {
		
		audioSource.PlayOneShot (landSound);
	}

	bool CheckIsValidPosition () {

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
