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
    bool Solve(TreeNode* root, int val)
    {
        if (!root)
        {
            return true;
        }
        else
        {
            if (root->val != val)
            {
                return false;
            }
            auto res = Solve(root->left, val);
            if (!res)
            {
                return false;
            }
            else
                return Solve(root->right, val);
        }
    }
public:
    bool isUnivalTree(TreeNode* root) {
        if (!root)
        {
            return true;
        }
        return Solve(root, root->val);
    }
};