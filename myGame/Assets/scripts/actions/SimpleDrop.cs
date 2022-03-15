using MLAPI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleDrop : ActionOfInteractableParent
{
    private GameObject playerContainer;
    // Start is called before the first frame update
    void Start()
    {
        nameOfAction = "Drop";
        playerContainer = GameObject.Find("PlayerContainer");
    }

    public override void action(NetworkObject player)
    {
        gameObject.transform.parent.gameObject.GetComponent<ItemHolderParent>().removeItem(gameObject);
        gameObject.transform.position = player.transform.position + player.transform.forward+new Vector3(0, 1, 0);
        gameObject.GetComponent<Rigidbody>().isKinematic = false;
        gameObject.GetComponent<MeshCollider>().enabled = true;
        gameObject.transform.SetParent(GameObject.Find("Environment").transform);
        playerContainer.GetComponent<Inventory>().updateInventory();
        Destroy(gameObject.GetComponent<SimpleDrop>());
    }

    public override bool areRequirementsMet(NetworkObject player)
    {
        return true;
    }
}
