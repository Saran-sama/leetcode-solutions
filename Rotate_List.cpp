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
	ListNode* rotateRight(ListNode* head, int k)
	{
		auto temp = head;
		int count = 0;
		while (temp)
		{
			count++;
			temp = temp->next;
		}

		auto actualRotationNeeded = k % count;
		k = count - actualRotationNeeded;
		temp = head;
		int i = 0;
		while (temp)
		{
			i++;
			temp = temp->next;
			if (i >= (k - 1))
			{
				break;
			}
		}
		auto backup = temp->next;
		auto newHead = backup;
		temp->next = nullptr;
		while (backup->next)
		{
			backup = backup->next;
		}
		backup->next = head;
		return newHead;
	}
};