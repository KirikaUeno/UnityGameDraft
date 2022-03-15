using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface InterfaceAction
{
    void action(MLAPI.NetworkObject player);

    bool areRequirementsMet(MLAPI.NetworkObject player);
}