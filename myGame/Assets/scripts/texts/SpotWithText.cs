using MLAPI;
using UnityEngine;
using UnityEngine.UI;

public class SpotWithText : MonoBehaviour
{
    public float radius;
    private GameObject UIText;
    private bool isTriggered;
    private Text text;
    private PlayerContainer playerContainer;
    // Start is called before the first frame update
    void Start()
    {
        playerContainer = GameObject.Find("PlayerContainer").GetComponent<PlayerContainer>();
        UIText = GameObject.Find("UIText");
        isTriggered = false;
        text = gameObject.GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        if ((NetworkManager.Singleton.IsHost || NetworkManager.Singleton.IsClient))
        {
            Vector3 dist = new Vector3(transform.position.x - playerContainer.getplayer().transform.position.x, 0, transform.position.z - playerContainer.getplayer().transform.position.z);
            if (dist.magnitude < radius && !isTriggered)
            {
                isTriggered = true;
                UIText.GetComponent<Text>().text = text.text;
            }
            else if (dist.magnitude > radius && isTriggered)
            {
                isTriggered = false;
                UIText.GetComponent<Text>().text = "";
            }
        }
    }
}
