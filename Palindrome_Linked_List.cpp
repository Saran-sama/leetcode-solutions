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
    bool isPalindrome(ListNode* head, ListNode* &root)
    {
        if (head && head->next)
        {
            auto res = isPalindrome(head->next, root);
            if (res == false)
            {
                return false;
            }
        }
        auto res = root->val == head->val;
        root = root->next;
        return res;
    }
public:
    bool isPalindrome(ListNode* head) 
    {
        if (!head)
        {
            return true;
        }
        else if (!head->next)
        {
            return true;
        }
        return isPalindrome(head, head);
    }
};