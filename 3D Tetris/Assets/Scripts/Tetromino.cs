using UnityEngine;
using System.Collections;

public class Tetromino : MonoBehaviour {

	float fall = 0;
	private float fallSpeed;

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
	private float buttonDownWaitTimerHorizontal = 0;
	private float buttonDownWaitTimerVertical = 0;

	private bool movedImmediateHorizontal = false;
	private bool movedImmediateVertical = false;


	//- Touch movement variables
	private int touchSensitivityHorizontal = 10;
	private int touchSensitivityVertical = 2;

	Vector2 previousUnitPosition = Vector2.zero;
	Vector2 direction = Vector2.zero;

	bool moved = false;



	// Use this for initialization
	void Start () {

		audioSource = GetComponent<AudioSource> ();

		fallSpeed = FindObjectOfType<Game> ().fallSpeed;

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

	public void KeyUpHorizontal () {

		horizontalTimer = 0;
		movedImmediateHorizontal = false;
		buttonDownWaitTimerHorizontal = 0;
	}

	public void KeyUpVertical () {

		verticalTimer = 0;
		movedImmediateVertical = false;
		buttonDownWaitTimerVertical = 0;
	}

	void CheckUserInput () {

		if (Input.touchCount > 0) {

			Touch t = Input.GetTouch (0);

			if (t.phase == TouchPhase.Began) {

				previousUnitPosition = new Vector2 (t.position.x, t.position.y);
				
			} else if (t.phase == TouchPhase.Moved) {

				Vector2 touchDeltaPosition = t.deltaPosition;
				direction = touchDeltaPosition.normalized;

				if (Mathf.Abs (t.position.x - previousUnitPosition.x) <= touchSensitivityHorizontal) {

					if (Mathf.Abs (t.position.y - previousUnitPosition.y) >= touchSensitivityVertical) {

						if (direction.y < 0) {

							MoveDown ();
							previousUnitPosition = t.position;
							moved = true;
						}

					}
				}

			} else if (t.phase == TouchPhase.Ended) {

				moved = false;
			}

		}

		if (Input.GetKeyUp (KeyCode.LeftArrow) || Input.GetKeyUp (KeyCode.RightArrow) || Input.GetKeyUp (KeyCode.UpArrow) || Input.GetKeyDown (KeyCode.DownArrow)) {

			KeyUpHorizontal ();
		}

		if (Input.GetKeyUp (KeyCode.Space)) {

			KeyUpVertical ();
		}

		//- Moving in four directions
		if (Input.GetKey (KeyCode.LeftArrow)) {

			MoveXNeg ();
		} 

		if (Input.GetKey (KeyCode.RightArrow)) {

			MoveXPos ();
		} 

		if (Input.GetKey (KeyCode.UpArrow)) {
			
			MoveZPos ();
		}

		if (Input.GetKey (KeyCode.DownArrow)) {
			
			MoveZNeg ();
		} 

		//- Moving down
		if (Input.GetKey (KeyCode.Space) || Time.time - fall >= fallSpeed) {

			MoveDown ();
		}

		//- Rotatoin along three axis
		if (Input.GetKeyDown (KeyCode.X)) {

			RotateX ();
		}

		if (Input.GetKeyDown (KeyCode.Y)) {

			RotateY ();
		} 

		if (Input.GetKeyDown (KeyCode.Z)) {

			RotateZ ();
		}

	}


	/// <summary>
	/// Move and rotate Tetromino at different direction and along different axis
	/// </summary>
	public void MoveDown () {

		if (movedImmediateVertical) {

			if (buttonDownWaitTimerVertical < buttonDownWaitMax) {

				buttonDownWaitTimerVertical += Time.deltaTime;
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

			Destroy (FindObjectOfType<Shadow> ().gameObject);

			PlayLandAudio ();

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
	}

	public void MoveXPos () {

		if (movedImmediateHorizontal) {

			if (buttonDownWaitTimerHorizontal < buttonDownWaitMax) {

				buttonDownWaitTimerHorizontal += Time.deltaTime;
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

		transform.position += new Vector3 (1, 0, 0);

		if (CheckIsValidPosition ()) {

			PlayMoveAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.position += new Vector3 (-1, 0, 0);
		}
	}

	public void MoveXNeg () {

		if (movedImmediateHorizontal) {

			if (buttonDownWaitTimerHorizontal < buttonDownWaitMax) {

				buttonDownWaitTimerHorizontal += Time.deltaTime;
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

		transform.position += new Vector3 (-1, 0, 0);

		if (CheckIsValidPosition ()) {

			PlayMoveAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.position += new Vector3 (1, 0, 0);
		}
	}

	public void MoveZPos () {

		if (movedImmediateHorizontal) {

			if (buttonDownWaitTimerHorizontal < buttonDownWaitMax) {

				buttonDownWaitTimerHorizontal += Time.deltaTime;
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

		transform.position += new Vector3 (0, 0, 1);

		if (CheckIsValidPosition ()) {

			PlayMoveAudio ();

			FindObjectOfType<Game> ().UpdateGrid (this);

		} else {
			transform.position += new Vector3 (0, 0, -1);
		}
	}

	public void MoveZNeg () {

		if (movedImmediateHorizontal) {

			if (buttonDownWaitTimerHorizontal < buttonDownWaitMax) {

				buttonDownWaitTimerHorizontal += Time.deltaTime;
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
