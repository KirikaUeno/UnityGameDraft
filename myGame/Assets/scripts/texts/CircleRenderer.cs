using UnityEngine;

public class CircleRenderer : MonoBehaviour
{
    private int pointsNumber = 100;
    private float radius = 0.7f;
    private float step;
    private LineRenderer lineDrawer;

    void Start()
    {
        lineDrawer = transform.GetChild(0).GetComponent<LineRenderer>();
        step = 2 * Mathf.PI / pointsNumber;
        lineDrawer.positionCount = pointsNumber + 1;
    }

    void Update()
    {
        for (int i = 0; i < pointsNumber + 1; i++)
        {
            lineDrawer.SetPosition(i, new Vector3(radius * Mathf.Cos(i * step), 0.1f, radius * Mathf.Sin(i * step)));
        }
    }
}
