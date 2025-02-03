/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if (!head)
        {
            return head;
        }
        map<Node*, Node*> oldNewMap;
        Node* headNew = new Node(head->val);
        oldNewMap[head] = headNew;
        oldNewMap[nullptr] = nullptr;
        auto temp = headNew;
        auto headSave = head;
        while (head->next)
        {
            temp->next = new Node(head->next->val);
            if (oldNewMap.find(head->next->random) != oldNewMap.end())
            {
                temp->next->random = oldNewMap[head->next->random];
            }
            if (!temp->next->random)
            {
                temp->next->random = 0;
            }
            oldNewMap[head->next] = temp->next;
            temp = temp->next;
            head = head->next;
        }
        head = headSave;
        temp = headNew;
        while (head)
        {
            if (temp->random == 0)
            {
                if (oldNewMap.find(head->random) != oldNewMap.end())
                    temp->random = oldNewMap[head->random];
                else
                    temp->random = 0;
            }
            head = head->next;
            temp = temp->next;
        }
        return headNew;
    }
};