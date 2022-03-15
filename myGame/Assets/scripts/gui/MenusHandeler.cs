using MLAPI;
using MLAPI.Spawning;
using MLAPI.Transports.UNET;
using UnityEngine;
using UnityEngine.UI;

public class MenusHandeler : MonoBehaviour
{
    public NetworkManager netManager;
    public GameObject mainMenu;
    public GameObject firstMenu;
    public GameObject characterCreationMenu;
    public GameObject game;
    public GameObject unityChanPreview;
    public InputField inputField;
    public Text connectionInformation;
    private float time = 0;
    private bool countTime;
    private float timeToShowMsg = 5;
    public Vector3 spawnLocation;

    private void Start()
    {
        Debug.Log("start");
        mainMenu.SetActive(true);
        game.SetActive(false);
    }

    public void exitGame()
    {
        Application.Quit();
    }

    public void connectToTheGame()
    {
        mainMenu.SetActive(false);
        game.SetActive(true);
        if (inputField.text.Length > 0) netManager.GetComponent<UNetTransport>().ConnectAddress = inputField.text;
        else netManager.GetComponent<UNetTransport>().ConnectAddress = "127.0.0.1";

        netManager.NetworkConfig.ConnectionData = System.Text.Encoding.ASCII.GetBytes("pass");
        netManager.GetComponent<NetworkManager>().StartClient();
        if (netManager.IsConnectedClient) print("connected");
        else
        {
            connectionInformation.text = "unable to connect";
            //game.SetActive(false);
            //mainMenu.SetActive(true);
            countTime = true;
        }
    }

    private void ApprovalCheck(byte[] connectionData, ulong clientId, NetworkManager.ConnectionApprovedDelegate callback)
    {
        bool approve = false;
        bool createPlayerObject = true;

        string password = System.Text.Encoding.ASCII.GetString(connectionData);
        if (password == "pass") approve = true;

        ulong? prefabHash = NetworkSpawnManager.GetPrefabHashFromGenerator("Player");
        print("approvalcheck");

        //If approve is true, the connection gets added. If it's false. The client gets disconnected
        callback(createPlayerObject, prefabHash, approve, spawnLocation, new Quaternion());
    }

    public void host()
    {
        netManager.ConnectionApprovalCallback += ApprovalCheck;
        mainMenu.SetActive(false);
        ulong? prefabHash = NetworkSpawnManager.GetPrefabHashFromGenerator("Player");
        game.SetActive(true);
        netManager.GetComponent<NetworkManager>().StartHost(spawnLocation, new Quaternion(), true, prefabHash);
    }

    public void startServer()
    {
        netManager.ConnectionApprovalCallback += ApprovalCheck;
        mainMenu.SetActive(false);
        game.SetActive(true);
        netManager.GetComponent<NetworkManager>().StartServer();
    }

    public void hostFromMainMenu()
    {
        firstMenu.SetActive(false);
        characterCreationMenu.SetActive(true);
        unityChanPreview.SetActive(true);
    }

    public void goBackToTheFirstMenu()
    {
        firstMenu.SetActive(true);
        characterCreationMenu.SetActive(false);
        unityChanPreview.SetActive(false);
    }

    public void Update()
    {
        if (countTime)
        {
            time += Time.deltaTime;
            if (time > timeToShowMsg)
            {
                countTime = false;
                time = 0;
                connectionInformation.text = "";
            }
        }
    }
}