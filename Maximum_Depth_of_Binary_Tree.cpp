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
    void maxDepth(TreeNode* node, int level)
    {
        if (node)
        {
            if (level > _maxDepth)
            {
                _maxDepth = level;
            }
            maxDepth(node->left, level + 1);
            maxDepth(node->right, level + 1);
        }
    }
public:
    int maxDepth(TreeNode* root) {
        if (!root)
        {
            return 0;
        }
        maxDepth(root, 1);
        return _maxDepth;
    }
private:
    int _maxDepth = 0;
};