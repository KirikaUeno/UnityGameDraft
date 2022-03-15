using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sunRotation : MonoBehaviour
{
    public float sunRotationSpeed;

    // Start is called before the first frame update
    void Start()
    {
        transform.Rotate(Vector3.right, -90);
        gameObject.GetComponent<Light>().intensity = 1;
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(Vector3.right, sunRotationSpeed * Time.deltaTime);
    }
}
