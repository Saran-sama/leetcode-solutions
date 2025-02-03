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
    ListNode* middleNode(ListNode* head) 
    {
        auto tortoise = head;
        auto hare = head;
        while (hare)
        {
            if (hare->next)
            {
                hare = hare->next->next;
            }
            else
            {
                return tortoise;
            }
            tortoise = tortoise->next;
        }
        return tortoise;
    }
};