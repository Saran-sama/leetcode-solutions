/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution 
{
    int height(TreeNode* node)
    {
        if (!node)
        {
            return 0;
        }
        auto leftHeight = height(node->left);
        auto rightHeight = height(node->right);
        return max(leftHeight, rightHeight) + 1;
    }
public:
    int diameterOfBinaryTree2(TreeNode* root)
    {
        if (!root)
        {
            return 0;
        }
        auto leftHeight = height(root->left);
        auto rightHeight = height(root->right);
        
        auto maxDiaLeft = diameterOfBinaryTree(root->left);
        auto maxDiaRight = diameterOfBinaryTree(root->right);
        
        return max(leftHeight + rightHeight + 1, max(maxDiaLeft, maxDiaRight));        
    }
    
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if (!root)
        {
            return 0;
        }

        
        return diameterOfBinaryTree2(root) - 1;
    }
};