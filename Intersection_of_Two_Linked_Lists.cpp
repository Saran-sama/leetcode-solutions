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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        stack<ListNode*> stkA;
        stack<ListNode*> stkB;
        
        while (headA)
        {
            stkA.push(headA);
            headA = headA->next;
        }
        
        while (headB)
        {
            stkB.push(headB);
            headB = headB->next;
        }
        
        ListNode *prev = nullptr;
        while (stkA.size() && stkB.size())
        {
            auto A = stkA.top();
            auto B = stkB.top();
            if (A != B)
            {
                return prev;
            }
            stkA.pop();
            stkB.pop();
            prev = A;
        }
        return nullptr;
    }
};