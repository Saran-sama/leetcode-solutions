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
    void reorderList(ListNode* head) 
    {
        if ((!head) || (!head->next))
        {
            return;
        }
        auto temp = head;
        ListNode* prev = nullptr;
        while (temp->next)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = nullptr;
        temp->next = head->next;
        head->next = temp;
    }
};