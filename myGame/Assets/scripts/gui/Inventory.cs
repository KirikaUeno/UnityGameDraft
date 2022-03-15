using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : MonoBehaviour
{
    public GameObject itemListPrefab;
    public GameObject itemPrefab;
    public GameObject itemsSourcePrefab;
    public GameObject playerScreen;
    public bool isInventoryShown = false;
    private GameObject inventory;
    private ItemHolderParent chosenHolder;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.I))
        {
            if (isInventoryShown) hideInventory();
            else showInventory();
            isInventoryShown = !isInventoryShown;
        }
    }

    private void showInventory()
    {
        MLAPI.NetworkObject player = gameObject.GetComponent<PlayerContainer>().getplayer();
        ItemHolderParent[] itemHolderScripts = player.GetComponentsInChildren<ItemHolderParent>();
        if (itemHolderScripts.Length != 0)
        {
            inventory = Instantiate(itemListPrefab, new Vector3(100, Screen.height - 100, 0), Quaternion.identity);
            RectTransform panelRectTransform = inventory.GetComponent<RectTransform>();
            inventory.transform.SetParent(playerScreen.transform);
            panelRectTransform.sizeDelta.Set((float)itemHolderScripts.Length * 20, panelRectTransform.sizeDelta.y);
            int i = 0;
            foreach (ItemHolderParent script in itemHolderScripts)
            {
                GameObject itemHolder = Instantiate(itemsSourcePrefab, inventory.transform.position - new Vector3(-50, 20 * i, 0), Quaternion.identity);
                itemHolder.transform.SetParent(inventory.transform);
                itemHolder.GetComponentInChildren<Text>().text = script.nameOfHolder;
                itemHolder.GetComponent<Button>().onClick.AddListener(() => {
                    chosenHolder = script;
                    foreach (Transform child in inventory.transform)
                    {
                        if (child.name == "Item(Clone)") Destroy(child.gameObject);
                    }
                    int j = 0;
                    foreach (GameObject obj in script.items)
                    {
                        GameObject item = Instantiate(itemPrefab, inventory.transform.position - new Vector3(30, 20 * j, 0), Quaternion.identity);
                        item.transform.SetParent(inventory.transform);
                        item.GetComponentInChildren<Text>().text = obj.name;
                        j++;
                    }
                    panelRectTransform.sizeDelta.Set((float)Mathf.Max(itemHolderScripts.Length, script.items.Count) * 20, panelRectTransform.sizeDelta.y);
                });
                itemHolder.GetComponentInChildren<Text>().text = script.nameOfHolder;
                i++;
            }
        }
    }

    private void hideInventory()
    {
        Destroy(inventory);
    }

    public void updateInventory()
    {
        if (isInventoryShown) showItemsFromHolder(chosenHolder);
    }

    private void showItemsFromHolder(ItemHolderParent holder)
    {
        foreach (Transform child in inventory.transform)
        {
            if (child.name == "Item(Clone)") Destroy(child.gameObject);
        }
        int j = 0;
        foreach (GameObject obj in holder.items)
        {
            GameObject item = Instantiate(itemPrefab, inventory.transform.position - new Vector3(30, 20 * j, 0), Quaternion.identity);
            item.transform.SetParent(inventory.transform);
            item.GetComponentInChildren<Text>().text = obj.name;
            j++;
        }
    }
}
