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
    int solve(TreeNode* root, int& k)
    {
        if (!root)
        {
            return -1;
        }
        else
        {
            auto res = kthSmallest(root->left, k);
            if (res != -1)
            {
                return res;
            }
            if (--k == 0)
            {
                return root->val;
            }            
            return kthSmallest(root->right, k);
        }        
    }
public:
    int kthSmallest(TreeNode* root, int k) 
    {
        return solve(root, k);
    }
};