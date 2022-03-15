using MLAPI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleEat : ActionOfInteractableParent
{
    private GameObject playerContainer;
    void Start()
    {
        nameOfAction = "Eat";
        playerContainer = GameObject.Find("PlayerContainer");
    }

    public override void action(MLAPI.NetworkObject player)
    {
        if (gameObject.transform.parent.gameObject.GetComponent<ItemHolderParent>() != null) gameObject.transform.parent.gameObject.GetComponent<ItemHolderParent>().removeItem(gameObject);
        playerContainer.GetComponent<Inventory>().updateInventory();
        Destroy(gameObject);
    }

    public override bool areRequirementsMet(NetworkObject player)
    {
        return true;
    }
}
