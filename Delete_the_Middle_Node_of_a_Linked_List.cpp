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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode* fast = head, *slow = head, *prev = head;

        while (fast && fast->next)
        {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        auto* temp = (prev && prev->next) ? prev->next->next : nullptr;
        delete prev->next;
        prev->next = temp;
        return head;
    }
};