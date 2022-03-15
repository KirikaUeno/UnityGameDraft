using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemHolderParent : MonoBehaviour
{
    public float maxWeight = 1;
    public float maxVolume = 1;
    public float currentWeight = 0;
    public float currentVolume = 0;
    public List<GameObject> items = new List<GameObject>();
    public string nameOfHolder = "default name";

    public virtual bool receiveItem(GameObject obj)
    {
        if ((obj.GetComponent<Rigidbody>().mass + currentWeight <= maxWeight) && (obj.GetComponent<ObjectPhysicalProperties>().volume + currentVolume <= maxVolume))
        {
            items.Add(obj);
            currentWeight += obj.GetComponent<Rigidbody>().mass;
            currentVolume += obj.GetComponent<ObjectPhysicalProperties>().volume;
            return true;
        }
        else return false;
    }

    public void removeItem(GameObject obj)
    {
        items.Remove(obj);
        currentVolume -= obj.GetComponent<ObjectPhysicalProperties>().volume;
        currentWeight -= obj.GetComponent<Rigidbody>().mass;
    }
}
