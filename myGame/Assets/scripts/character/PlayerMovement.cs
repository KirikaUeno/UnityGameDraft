using MLAPI;
using UnityEngine;
using MLAPI.NetworkVariable;
using MLAPI.Messaging;

public class PlayerMovement : NetworkBehaviour
{
    public float animSpeed = 1.5f;
    public float speed = 7.0f;
    public float rotateSpeed = 10.0f;

    private GameObject cameraMain;
    private Animator anim;
    private Rigidbody body;
    private CapsuleCollider colliderPlayer;

    /*public NetworkVariable<bool> shouldStartJump = new NetworkVariable<bool>(false);
    public NetworkVariable<float> animDirection = new NetworkVariable<float>(0);
    public NetworkVariable<float> animationSpeed = new NetworkVariable<float>(0);*/
    public ulong id;
    public bool jumping = false;

    void Start()
    {
        anim = GetComponent<Animator>();
        colliderPlayer = GetComponent<CapsuleCollider>();
        body = GetComponent<Rigidbody>();
        anim.speed = animSpeed;
        cameraMain = GameObject.Find("Main Camera");
        /*shouldStartJump.Settings.WritePermission = NetworkVariablePermission.OwnerOnly;
        animDirection.Settings.WritePermission = NetworkVariablePermission.OwnerOnly;
        animationSpeed.Settings.WritePermission = NetworkVariablePermission.OwnerOnly;
        shouldStartJump.Settings.ReadPermission = NetworkVariablePermission.Everyone;
        animDirection.Settings.ReadPermission = NetworkVariablePermission.Everyone;
        animationSpeed.Settings.ReadPermission = NetworkVariablePermission.Everyone;*/
    }

    void Update()
    {
        bool isJumping = anim.GetCurrentAnimatorStateInfo(0).IsName("Jump");
        jumping = isJumping;
        if (!isJumping)
        {
            colliderPlayer.height = 1.5f;
            body.useGravity = true;
            colliderPlayer.center = new Vector3(0, 0.75f, 0);
        }
        else
        {
            colliderPlayer.height = anim.GetFloat("ColliderHeight") + 0.5f;
            colliderPlayer.center = new Vector3(0, anim.GetFloat("ColliderCenter") - 0.25f, 0);
            float gravity = anim.GetFloat("UseGravity");
            body.useGravity = (gravity > 0.9) ? true : false;
        }
        if (IsOwner)
        {
            float h = Input.GetAxis("Horizontal");
            float v = Input.GetAxis("Vertical");
            Vector3 inputDirection = h * cameraMain.transform.right + v * Vector3.Normalize(new Vector3(cameraMain.transform.forward.x, 0, cameraMain.transform.forward.z));
            float direction = 0;
            if (inputDirection.magnitude > 0)
            {
                if (inputDirection.magnitude > 1) inputDirection = inputDirection.normalized;
                float angle = Vector3.Angle(Vector3.Normalize(new Vector3(cameraMain.transform.forward.x, 0, cameraMain.transform.forward.z)), inputDirection);
                float angleIni = Vector3.Angle(Vector3.Normalize(new Vector3(cameraMain.transform.forward.x, 0, cameraMain.transform.forward.z)), transform.forward);
                if (h < 0) angle = -angle;
                if (Vector3.Dot(cameraMain.transform.right, transform.forward) < 0) angleIni = -angleIni;
                float alfa = angle - angleIni;
                if (Mathf.Abs(alfa) > 1)
                {
                    if ((alfa >= 0 && alfa < 180) || alfa <= -180)
                    {
                        direction = 1;
                    }
                    else
                    {
                        direction = -1;
                    }
                    if (Mathf.Abs(alfa) < rotateSpeed)
                    {
                        direction = direction * Mathf.Abs(alfa) / rotateSpeed;
                    }
                }
            }

            //animationSpeed.Value = inputDirection.magnitude;
            if (Input.GetButton("Jump") && !isJumping)
            {
                //jumpServerRpc(NetworkManager.LocalClientId);
                anim.Play("Jump");
            }
            else
            {
                anim.SetFloat("Speed", inputDirection.magnitude/2);

                transform.localPosition += inputDirection * Time.deltaTime * speed;
                transform.Rotate(0, direction * rotateSpeed, 0);
            }
        }
        //anim.SetFloat("Direction", animDirection.Value);
        //anim.SetFloat("Speed", animationSpeed.Value);
        id = NetworkObjectId;
    }

    public void startJump()
    {
        if (!anim.GetCurrentAnimatorStateInfo(0).IsName("Jump"))
        {
            print("start jump");
            anim.Play("Jump");
        }
    }

    /*[ClientRpc]
    void jumpClientRpc(ulong playerID)
    {
        NetworkManager.Singleton.ConnectedClients[playerID].PlayerObject.GetComponent<PlayerMovementVisualization>().startJump();
    }

    [ServerRpc]
    void jumpServerRpc(ulong playerID)
    {
        print("recieved serverrpc");
        jumpClientRpc(playerID);
    }*/
}