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
    bool isValidBST(TreeNode* root) 
    {
        if (root)
        {
            if ((root->left) && (root->left->val > root->val))
            {
                return false;
            }
            if ((root->right) && (root->right->val < root->val))
            {
                return false;
            }
            bool res = isValidBST(root->left);
            if (res == false)
            {
                return false;
            }
            else
            {
                return isValidBST(root->right);
            }
        }
        return true;
    }
};