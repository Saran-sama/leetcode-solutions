/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        unordered_set<ListNode*> list;
        while (head)
        {
            if (list.find(head) != list.end())
            {
                return false;
            }
            list.emplace(head);
            head = head->next;
        }
        return true;
    }
};