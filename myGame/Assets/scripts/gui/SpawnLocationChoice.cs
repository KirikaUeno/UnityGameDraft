using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpawnLocationChoice : MonoBehaviour
{
    private GameObject menusHandler;
    public GameObject spawnPoint;
    // Start is called before the first frame update
    void Start()
    {
        menusHandler = GameObject.Find("MenusHandeler");
        gameObject.GetComponentInChildren<Text>().text = gameObject.name;
        GetComponent<Button>().onClick.AddListener(()=>
        {
            if(spawnPoint!=null) menusHandler.GetComponent<MenusHandeler>().spawnLocation = spawnPoint.transform.position;
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
