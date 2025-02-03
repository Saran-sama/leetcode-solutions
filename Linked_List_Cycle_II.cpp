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
    ListNode *detectCycle(ListNode *head) 
    {
        set<ListNode*> indexer;
        int i = 0;
        while (head)
        {
            if (indexer.find(head) == indexer.end())
            {
                indexer.insert(head);
            }
            else
                return head;
            head = head->next;
        }
        return nullptr;
    }
};