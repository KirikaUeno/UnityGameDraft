using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmItemHolder : ItemHolderParent
{
    public GameObject twoArms;
    public void Start()
    {
        maxWeight = 8;
        maxVolume = 3;
    }

    public override bool receiveItem(GameObject obj)
    {
        if ((obj.GetComponent<Rigidbody>().mass + currentWeight <= maxWeight) &&
            (obj.GetComponent<ObjectPhysicalProperties>().volume+currentVolume <= (3.3*Mathf.Exp(-(items.Count+1)*(items.Count+1)/6)+0.25))
            && (twoArms.GetComponent<TwoArmsItemHolder>().items.Count == 0))
        {
            items.Add(obj);
            currentWeight += obj.GetComponent<Rigidbody>().mass;
            currentVolume += obj.GetComponent<ObjectPhysicalProperties>().volume;
            return true;
        }
        else return false;
    }
}
