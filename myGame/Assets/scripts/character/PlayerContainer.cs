using MLAPI;
using UnityEngine;
using MLAPI.Connection;
using UnityEngine.UI;

public class PlayerContainer : MonoBehaviour
{
    public NetworkObject player;
    private bool isplayerDefined = false;
    public NetworkManager netManager;
    public GameObject UIText;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (!isplayerDefined && (netManager.IsHost || netManager.IsClient))
        {
            setPlayer(netManager.ConnectedClients[netManager.LocalClientId].PlayerObject);
            if (player != null) isplayerDefined = true;
        }
    }

    public void setPlayer(NetworkObject player)
    {
        this.player = player;
    }

    public NetworkObject getplayer()
    {
        return player;
    }
}
