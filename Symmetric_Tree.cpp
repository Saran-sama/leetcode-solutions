class Solution {
	bool isSymmetric(TreeNode* nodeA, TreeNode* nodeB)
	{
		if ((nodeA) && (nodeB))
		{
			if (nodeA->val != nodeB->val)
			{
				return false;
			}
			auto res = isSymmetric(nodeA->left, nodeB->right);
			if (res == false)
			{
				return false;
			}
			else
				return isSymmetric(nodeA->right, nodeB->left);
		}
		else
		{
			return nodeA == nodeB;
		}
	}
public:
	bool isSymmetric(TreeNode* root)
	{
		if (!root)
		{
			return true;
		}
		return isSymmetric(root->left, root->right);
	}
};