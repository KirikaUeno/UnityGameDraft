using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class RightClickFindActions : MonoBehaviour
{
    public GameObject actionMenuPrefab;
    public GameObject actionButtonPrefab;

    GraphicRaycaster m_Raycaster;
    PointerEventData m_PointerEventData;
    EventSystem m_EventSystem;
    // Start is called before the first frame update
    void Start()
    {
        m_Raycaster = GameObject.Find("PlayerScreen").GetComponent<GraphicRaycaster>();
        m_EventSystem = GameObject.Find("EventSystem").GetComponent<EventSystem>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(1))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, 100))
            {
                GameObject obj = hit.collider.gameObject;
                ActionOfInteractableParent[] scripts = obj.GetComponents<ActionOfInteractableParent>();
                if (scripts.Length != 0) setupActionMenu(scripts);
                else {
                    m_PointerEventData = new PointerEventData(m_EventSystem);
                    m_PointerEventData.position = Input.mousePosition;
                    List<RaycastResult> results = new List<RaycastResult>();
                    m_Raycaster.Raycast(m_PointerEventData, results);
                    ActionOfInteractableParent[] scriptsFromInventory = GameObject.Find(results[0].gameObject.GetComponentInChildren<Text>().text).GetComponents<ActionOfInteractableParent>();
                    if (scriptsFromInventory.Length != 0) setupActionMenu(scriptsFromInventory);
                }
            }
        }
    }

    private void setupActionMenu(ActionOfInteractableParent[] scripts)
    {
        MLAPI.NetworkObject player = gameObject.GetComponent<PlayerContainer>().getplayer();
        GameObject playerScreen = GameObject.Find("PlayerScreen");

        GameObject actionMenu = Instantiate(actionMenuPrefab, new Vector3(0, 0, 0), Quaternion.identity);
        RectTransform panelRectTransform = actionMenu.GetComponent<RectTransform>();
        panelRectTransform.sizeDelta.Set((float)scripts.Length * 30, panelRectTransform.sizeDelta.y);
        actionMenu.transform.SetParent(playerScreen.transform);
        int i = 0;
        foreach (ActionOfInteractableParent script in scripts)
        {
            if (script.areRequirementsMet(player))
            {
                GameObject actionButton = Instantiate(actionButtonPrefab, actionMenu.transform.position - new Vector3(0, 30 * i, 0), Quaternion.identity);
                actionButton.transform.SetParent(actionMenu.transform);
                actionButton.GetComponent<Button>().onClick.AddListener(() => { Destroy(actionMenu); script.action(player); });
                actionButton.GetComponentInChildren<Text>().text = script.nameOfAction;
                i++;
            }
        }
        actionMenu.transform.position = Input.mousePosition + new Vector3(panelRectTransform.sizeDelta.x / 2, -panelRectTransform.sizeDelta.y / 2, 0);
    }
}
