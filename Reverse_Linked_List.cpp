/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
    ListNode* reverseList(ListNode* head, ListNode* prev) 
    {
        if (head)
        {
            auto node = reverseList(head->next, head);
            head->next = prev;
            return node;
        }
        return prev;
    }    
public:
    ListNode* reverseList(ListNode* head) 
    {
        return reverseList(head, nullptr);
    }
};