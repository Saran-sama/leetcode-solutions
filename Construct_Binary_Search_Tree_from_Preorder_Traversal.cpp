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
    void insert(TreeNode* node, TreeNode* root)
    {
        if (node->val < root->val)
        {
            if (!root->left)
            {
                root->left = node;
                return;
            }
            insert(node, root->left);
        }
        else
        {
            if (!root->right)
            {
                root->right = node;
                return;
            }
            insert(node, root->right);            
        }
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        if (preorder.size())
        {
            root = new TreeNode(preorder[0]);
            for (int i = 1; i < preorder.size(); i++)
            {
                insert(new TreeNode(preorder[i]), root);
            }
        }
        return root;
    }
    TreeNode *root = nullptr;
};