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
	ListNode* oddEvenList(ListNode* head)
	{
		auto odd = head;
		auto even = head->next;
		auto oddTemp = odd;
		auto evenTemp = even;
		while ((odd->next) && (even->next))
		{
			if (odd->next)
			{
				odd->next = odd->next->next;
				odd = odd->next;
			}
			if (odd)
			{
				even->next = odd->next;
				even = even->next;
			}
		}
		odd->next = evenTemp;
		return oddTemp;
	}

};