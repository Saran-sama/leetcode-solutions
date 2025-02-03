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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* head = nullptr, *tmp = nullptr;
        int carry = 0;
        while (l1 && l2)
        {
            if (head == nullptr)
            {
                auto sum = l1->val + l2->val;
                head = new ListNode(sum % 10);
                carry = sum / 10;
                tmp = head;
            }
            else
            {
                auto sum = l1->val + l2->val + carry;
                tmp->next = new ListNode(sum % 10);
                carry = sum / 10;
                tmp = tmp->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while (l1)
        {
            auto sum = l1->val + carry;
            tmp->next = new ListNode(sum % 10);
            carry = sum / 10;
            tmp = tmp->next;   
            l1 = l1->next;
        }
        while (l2)
        {
            auto sum = l2->val + carry;
            tmp->next = new ListNode(sum % 10);
            carry = sum / 10;
            tmp = tmp->next;   
            l2 = l2->next;
        }        
        if (carry)
        {
            auto sum = carry;
            tmp->next = new ListNode(sum);
            tmp = tmp->next;            
        }
        return head;
    }
};