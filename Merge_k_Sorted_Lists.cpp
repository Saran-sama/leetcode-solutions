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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int min = numeric_limits<int>::max();
        int index = -1;
        ListNode *head = nullptr;
        ListNode *temp = nullptr;
        while (lists.size())
        {
            for (int i = 0; i < lists.size(); i++)
            {
                if (min > lists[i]->val)
                {
                    min = lists[i]->val;
                    index = i;
                }
            }
            if (!head)
            {
                head = new ListNode(lists[index]->val);
                temp = head;
            }
            else
            {
                temp->next = new ListNode(lists[index]->val);
                temp = temp->next;
            }
            if (index != -1)
            {
                if (lists[index]->next)
                {
                    lists[index] = lists[index]->next;
                }
                else
                {
                    lists.erase(lists.begin() + index);
                }
            }
            else
            {
                return head;
            }
            index = -1; 
            min = numeric_limits<int>::max();
        }
        return head;
    }
};