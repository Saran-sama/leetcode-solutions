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
    TreeNode* mergeTrees(TreeNode* sumTree, TreeNode* t1, TreeNode* t2)
    {
        if (t1 || t2)
        {
            int sum = (t1 ? t1->val : 0) + (t2 ? t2->val : 0);
            sumTree = new TreeNode(sum);
            sumTree->left = mergeTrees(nullptr, t1 ? t1->left : nullptr, t2 ? t2->left : nullptr);
            sumTree->right = mergeTrees(nullptr, t1 ? t1->right : nullptr, t2 ? t2->right : nullptr);
        }
        return sumTree;
    }
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2)
    {
        auto ret = mergeTrees(nullptr, t1, t2);
        return ret;
    }
};