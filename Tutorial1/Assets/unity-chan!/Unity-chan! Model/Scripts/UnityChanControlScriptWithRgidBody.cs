using UnityEngine;

namespace UnityChan
{
	[RequireComponent(typeof(Animator))]
	[RequireComponent(typeof(CapsuleCollider))]
	[RequireComponent(typeof(Rigidbody))]

	public class UnityChanControlScriptWithRgidBody : MonoBehaviour
	{
		public float animSpeed = 1.5f;
		public float lookSmoother = 3.0f;
		public bool useCurves = true;
		public float useCurvesHeight = 0.5f;

		public float forwardSpeed = 7.0f;
		public float backwardSpeed = 2.0f;
		public float rotateSpeed = 10.0f;
		public float jumpPower = 5.0f;
		private CapsuleCollider col;
		private Rigidbody rb;
		private Vector3 velocity;
		private float orgColHight;
		private Vector3 orgVectColCenter;
		private Animator anim;
		private AnimatorStateInfo currentBaseState;

		private GameObject cameraObject;
		
		static int idleState = Animator.StringToHash ("Base Layer.Idle");
		static int locoState = Animator.StringToHash ("Base Layer.Locomotion");
		static int jumpState = Animator.StringToHash ("Base Layer.Jump");
		static int restState = Animator.StringToHash ("Base Layer.Rest");

		public float dir;

		// 初期化
		void Start ()
		{
			anim = GetComponent<Animator> ();
			col = GetComponent<CapsuleCollider> ();
			rb = GetComponent<Rigidbody> ();
			cameraObject = GameObject.FindWithTag("MainCamera");
			orgColHight = col.height;
			orgVectColCenter = col.center;
		}
	
		void FixedUpdate ()
		{
			float h = Input.GetAxis ("Horizontal");
			float v = Input.GetAxis ("Vertical");
			Vector3 inputDirection = h * Vector3.right + v * Vector3.forward;
			float direction = 0;
			anim.SetFloat("Speed", inputDirection.magnitude > 1 ? 1 : inputDirection.magnitude);
			if (inputDirection.magnitude > 0)
			{
				float angle = Vector3.Angle(Vector3.forward, inputDirection);
				float angleIni = transform.eulerAngles[1];
				if (angleIni > 180) angleIni = -360 + angleIni;
				if (h < 0) angle = -angle;
				float alfa = angle - angleIni;
				dir = angle;
				if (Mathf.Abs(alfa) > 1)
				{
					if ((alfa >= 0 && alfa < 180) || alfa <= -180)
					{
						anim.SetFloat("Direction", 0);
						direction = 1;
					}
					else
					{
						anim.SetFloat("Direction", 0);
						direction = -1;
					}
					if (Mathf.Abs(alfa) < rotateSpeed)
					{
						direction = direction * Mathf.Abs(alfa) / rotateSpeed;
						anim.SetFloat("Direction", 0);
					}
				}
				else anim.SetFloat("Direction", 0);
			}
			else anim.SetFloat("Direction", 0);
			anim.speed = animSpeed;
			currentBaseState = anim.GetCurrentAnimatorStateInfo (0);
			rb.useGravity = true;
		
			velocity = inputDirection;
			velocity *= forwardSpeed;
		
			if (Input.GetButtonDown ("Jump")) {
				if (currentBaseState.nameHash == locoState) {
					if (!anim.IsInTransition (0)) {
						rb.AddForce (Vector3.up * jumpPower, ForceMode.VelocityChange);
						anim.SetBool ("Jump", true);
					}
				}
			}
			transform.localPosition += velocity * Time.fixedDeltaTime;
			transform.Rotate (0, direction * rotateSpeed, 0);	
			if (currentBaseState.nameHash == locoState) {
				if (useCurves) {
					resetCollider ();
				}
			}
			else if (currentBaseState.nameHash == jumpState) {
				cameraObject.SendMessage ("setCameraPositionJumpView");
				if (!anim.IsInTransition (0)) {
					if (useCurves) {
						float jumpHeight = anim.GetFloat ("JumpHeight");
						float gravityControl = anim.GetFloat ("GravityControl"); 
						if (gravityControl > 0)
							rb.useGravity = false;
						Ray ray = new Ray (transform.position + Vector3.up, -Vector3.up);
						RaycastHit hitInfo = new RaycastHit ();
						if (Physics.Raycast (ray, out hitInfo)) {
							if (hitInfo.distance > useCurvesHeight) {
								col.height = orgColHight - jumpHeight;
								float adjCenterY = orgVectColCenter.y + jumpHeight;
								col.center = new Vector3 (0, adjCenterY, 0);
							} else {				
								resetCollider ();
							}
						}
					}		
					anim.SetBool ("Jump", false);
				}
			}
			else if (currentBaseState.nameHash == idleState) {
				if (useCurves) {
					resetCollider ();
				}
				if (Input.GetButtonDown ("Jump")) {
					anim.SetBool ("Rest", true);
				}
			}
			else if (currentBaseState.nameHash == restState) {
				if (!anim.IsInTransition (0)) {
					anim.SetBool ("Rest", false);
				}
			}
		}

		void resetCollider ()
		{
			col.height = orgColHight;
			col.center = orgVectColCenter;
		}
	}
}