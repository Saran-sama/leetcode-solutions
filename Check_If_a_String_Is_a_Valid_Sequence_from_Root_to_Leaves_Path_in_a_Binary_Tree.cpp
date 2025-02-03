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
    bool isValidSeq(TreeNode* root, vector<int>& arr, int index)
    {
        if (root)
        {
            if (index == (arr.size() - 1))
            {
                if (root->val == arr[index])
                {
                    return true;
                }
                
            }
            if ((index < (arr.size() - 1)) && (root->val == arr[index]))
            {
                auto left = isValidSeq(root->left, arr, index + 1);
                if (left)
                {
                    return true;
                }
                return isValidSeq(root->right, arr, index + 1);
            }
        }
        return false;
    }
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr) 
    {
        return isValidSeq(root, arr, 0);
    }
};