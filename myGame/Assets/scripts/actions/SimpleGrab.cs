using MLAPI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SimpleGrab : ActionOfInteractableParent
{
    public GameObject actionMenuPrefab;
    public GameObject actionButtonPrefab;
    public bool needToBeCut = false;
    private GameObject playerContainer;
    void Start()
    {
        nameOfAction = "Take";
        playerContainer = GameObject.Find("PlayerContainer");
    }

    public override void action(NetworkObject player)
    {
        ItemHolderParent[] scripts = player.GetComponentsInChildren<ItemHolderParent>();
        GameObject playerScreen = GameObject.Find("PlayerScreen");

        GameObject holderMenu = Instantiate(actionMenuPrefab, new Vector3(0, 0, 0), Quaternion.identity);
        RectTransform panelRectTransform = holderMenu.GetComponent<RectTransform>();
        panelRectTransform.sizeDelta.Set((float)scripts.Length * 30, panelRectTransform.sizeDelta.y);
        holderMenu.transform.SetParent(playerScreen.transform);
        int i = 0;
        foreach (ItemHolderParent script in scripts)
        {
            if (script != gameObject.transform.parent.GetComponent<ItemHolderParent>())
            {
                GameObject actionButton = Instantiate(actionButtonPrefab, holderMenu.transform.position - new Vector3(0, 30 * i, 0), Quaternion.identity);
                actionButton.transform.SetParent(holderMenu.transform);
                actionButton.GetComponent<Button>().onClick.AddListener(() =>
                {
                    Destroy(holderMenu);
                    bool success = script.receiveItem(gameObject);
                    if (success)
                    {
                        if (gameObject.transform.parent.GetComponent<ItemHolderParent>() != null) gameObject.transform.parent.GetComponent<ItemHolderParent>().removeItem(gameObject);
                        gameObject.GetComponent<Rigidbody>().isKinematic = true;
                        gameObject.GetComponent<MeshCollider>().enabled = false;
                        gameObject.transform.SetParent(script.gameObject.transform);
                        gameObject.transform.localPosition = new Vector3();
                        if (gameObject.GetComponent<SimpleDrop>() == null) gameObject.AddComponent<SimpleDrop>();
                        playerContainer.GetComponent<Inventory>().updateInventory();
                    }
                });
                actionButton.GetComponentInChildren<Text>().text = script.nameOfHolder;
                i++;
            }
        }
        holderMenu.transform.position = Input.mousePosition + new Vector3(panelRectTransform.sizeDelta.x / 2, -panelRectTransform.sizeDelta.y / 2, 0);
    }

    public override bool areRequirementsMet(NetworkObject player)
    {
        if (needToBeCut && gameObject.GetComponent<simpleCut>() != null && !gameObject.GetComponent<simpleCut>().isCut) return false;
        if (player.GetComponentsInChildren<ItemHolderParent>().Length == 0) return false;
        return true;
    }
}
