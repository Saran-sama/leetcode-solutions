/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        auto tmp = head;
        while (tmp)
        {
            while (tmp->next && (tmp->val == tmp->next->val))
            {
                tmp->next = tmp->next->next;
            }
            tmp = tmp->next;
        }
        return head;
    }
};