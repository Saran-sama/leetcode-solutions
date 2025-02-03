/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root)
	{
		vector<TreeNode*> list;
		vector<vector<int>> output;
		list.push_back(root);
		while (list.size())
		{
			int size = list.size();
			vector<int> local;
			while (size--)
			{
				auto currNode = *list.begin();
				local.push_back(currNode->val);
				if (currNode->left)
					list.push_back(currNode->left);
				if (currNode->right)
					list.push_back(currNode->right);
				list.erase(list.begin());
			}
			output.push_back(local);
		}
		return output;
	}
};
