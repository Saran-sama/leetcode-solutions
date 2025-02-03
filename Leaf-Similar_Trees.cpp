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
    void leafSimilarHelper(TreeNode* root, vector<int>& list)
    {
        if (root)
        {
            if ((!root->left) && (!root->right))
            {
                list.push_back(root->val);
                return;
            }
            leafSimilarHelper(root->left, list);
            leafSimilarHelper(root->right, list);
        }
        return;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> one, two;
        leafSimilarHelper(root1, one);
        leafSimilarHelper(root2, two);
        return one == two;
    }
};