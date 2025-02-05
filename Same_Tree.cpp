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
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if (p == q)
        {
            return true;
        }
        else if (p && q)
        {
            if (p->val == q->val)
            {
                auto ret = isSameTree(p->left, q->left);
                if (!ret)
                {
                    return false;
                }
                return isSameTree(p->right, q->right);
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};