using MLAPI;
using UnityEngine;

public class CameraMain : MonoBehaviour
{
    private PlayerContainer playerContainer;
    public NetworkManager netManager;
    public float scrollSpeed;
    public float rotateSpeed;

    private float distanceFromPlayer = 3;
    private Vector3 shift;
    private Vector3 localShift;

    void Start()
    {
        playerContainer = GameObject.Find("PlayerContainer").GetComponent<PlayerContainer>();
        shift = new Vector3(0, 1.7f, 0);
        localShift = new Vector3(0, 0, 0);
    }

    void Update()
    {
        if (netManager.IsHost || netManager.IsClient)
        {
            transform.position = playerContainer.getplayer().transform.position - transform.forward * distanceFromPlayer + shift;
            bool isCtrlPressed = Input.GetButton("Ctrl");
            if (isCtrlPressed)
            {
                Cursor.visible = true;
                Cursor.lockState = CursorLockMode.None;
            }
            else
            {
                Cursor.visible = false;
                Cursor.lockState = CursorLockMode.Locked;
                //localShift += new Vector3(0, 0, Input.GetAxis("Mouse ScrollWheel") * Time.deltaTime * scrollSpeed);
                transform.Rotate(new Vector3(0, Input.GetAxis("Mouse X") * Time.deltaTime * rotateSpeed, 0), Space.World);
                transform.Rotate(new Vector3(-Input.GetAxis("Mouse Y") * Time.deltaTime * rotateSpeed, 0, 0), Space.Self);
                shift += transform.right* Input.GetAxis("AltHorizontal") * Time.deltaTime * rotateSpeed + transform.up*Input.GetAxis("AltVertical")* Time.deltaTime * rotateSpeed;


                distanceFromPlayer -= Input.GetAxis("Mouse ScrollWheel") * Time.deltaTime * scrollSpeed;
            }
        }
    }
}
