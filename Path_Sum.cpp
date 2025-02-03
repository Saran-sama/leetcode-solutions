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
class Solution 
{
    bool helper(TreeNode* root, int targetSum, int sum)
    {
        if (!root)
        {
            if (sum == targetSum)
            {
                return true;
            }
            return false;
        }
        else
        {
            if (helper(root->left, targetSum, sum + root->val))
            {
                return true;
            }
            else
                return helper(root->right, targetSum, sum + root->val);
        }
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        return helper(root, targetSum, 0);
    }
};