using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TwoArmsItemHolder : ItemHolderParent
{
    public GameObject leftArm;
    public GameObject rightArm;
    public void Start()
    {
        maxWeight = 18;
        maxVolume = 9.4f;
    }

    public override bool receiveItem(GameObject obj)
    {
        if ((obj.GetComponent<Rigidbody>().mass + currentWeight <= maxWeight) &&
            (obj.GetComponent<ObjectPhysicalProperties>().volume + currentVolume <= (8.5 * Mathf.Exp(-(items.Count + 1) * (items.Count + 1) / 15) + 1.5))
            && (leftArm.GetComponent<ArmItemHolder>().items.Count==0) && (rightArm.GetComponent<ArmItemHolder>().items.Count == 0))
        {
            items.Add(obj);
            currentWeight += obj.GetComponent<Rigidbody>().mass;
            currentVolume += obj.GetComponent<ObjectPhysicalProperties>().volume;
            return true;
        }
        else return false;
    }
}
