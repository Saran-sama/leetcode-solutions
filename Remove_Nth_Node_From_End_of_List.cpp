/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

    void removeNthFromEnd2(ListNode* head, int& n)
    {
        if (!head)
        {
            return;
        }
        else
        {
            removeNthFromEnd2(head->next, n);
            if (n == 0)
            {
                head->next = head->next->next;
            }
            n--;
        }
    }

public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        removeNthFromEnd2(head, n);
        return head;
    }
};