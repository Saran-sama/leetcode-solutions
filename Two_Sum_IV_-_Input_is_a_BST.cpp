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
    void findTarget(TreeNode* root)
    {
        if (root)
        {
            _elements.push_back(root->val);
            findTarget(root->left);
            findTarget(root->right);
        }
    }
    vector<int> _elements;
public:
    bool findTarget(TreeNode* root, int k) 
    {
        findTarget(root);
        for (int i = 0; i < _elements.size(); i++)
        {
            for (int j = i + 1; j < _elements.size(); j++)
            {
                if ((_elements[i] + _elements[j]) == k)
                {
                    return true;
                }
            }
        }
        return false;
    }
};