using UnityEngine;
using UnityEngine.UI;

public class SpotWithText : MonoBehaviour
{
    private Transform playerPos;
    private GameObject UIText;
    private bool isTriggered;
    private Text text;
    // Start is called before the first frame update
    void Start()
    {
        playerPos = GameObject.Find("UnityChan").transform;
        UIText = GameObject.Find("UIText");
        isTriggered = false;
        text = gameObject.GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        if ((transform.position - playerPos.position).magnitude < 1.2 && !isTriggered)
        {
            isTriggered = true;
            UIText.GetComponent<Text>().text = text.text;
        }
        else if ((transform.position - playerPos.position).magnitude > 1.2 && isTriggered)
        {
            isTriggered = false;
            UIText.GetComponent<Text>().text = "";
        }
    }
}
