using MLAPI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class simpleCut : ActionOfInteractableParent
{
    public bool isCut = false;
    void Start()
    {
        nameOfAction = "Cut";
    }

    public override void action(MLAPI.NetworkObject player)
    {
        gameObject.GetComponent<Rigidbody>().isKinematic = false;
        isCut = true;
    }

    public override bool areRequirementsMet(NetworkObject player)
    {
        return !isCut;
    }
}
