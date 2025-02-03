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
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        auto* root = (l1->val <= l2->val) ? l1 : l2;
        auto* left = l1;
        auto* right = l2;
        while (left && right)
        {
            if (left->val <= right->val)
            {
                auto nextOfLeft = left->next;
                left->next = right;
                left = nextOfLeft;
            }
            else
            {
                auto nextOfRight = right->next;
                right->next = left;
                right = nextOfRight;
            }
        }
        return root;
    }
};