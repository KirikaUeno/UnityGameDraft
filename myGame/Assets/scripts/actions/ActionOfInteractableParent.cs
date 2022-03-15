using MLAPI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class ActionOfInteractableParent : MonoBehaviour, InterfaceAction
{
    public string nameOfAction = "defaultName";
    public abstract void action(MLAPI.NetworkObject player);
    public abstract bool areRequirementsMet(NetworkObject player);
}
