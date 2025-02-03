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
    int balanceHelper(TreeNode* node)
    {
        if ((!node) || (!_isBalanced))
        {
            return 0;
        }
        int left = balanceHelper(node->left);
        int right = balanceHelper(node->right);
        if (abs(left - right) > 1)
        {
            _isBalanced = false;
            return 0;
        }
        return max(left, right) + 1;
    }
public:
    bool isBalanced(TreeNode* root) 
    {
        balanceHelper(root);
        return _isBalanced;
    }
private:
    bool _isBalanced = true;
};