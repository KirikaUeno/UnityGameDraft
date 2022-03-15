using UnityEngine;

public class ShowInGameMenu : MonoBehaviour
{
    public GameObject inGameMenu;
    public GameObject playerScreen;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            inGameMenu.SetActive(!inGameMenu.activeSelf);
            playerScreen.SetActive(!playerScreen.activeSelf);
        }
    }
}
