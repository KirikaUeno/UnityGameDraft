using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMain : MonoBehaviour
{
    private Transform unityChanPos;
    public Vector3 shift = new Vector3(0, 10, -15);
    // Start is called before the first frame update
    void Start()
    {
        unityChanPos = GameObject.Find("UnityChan").transform;
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = unityChanPos.position + shift;
    }
}
