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
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> result;
        if (!root)
        {
            return result;
        }
        vector<TreeNode*> queue;

        queue.push_back(root);
        result.push_back(root->val);

        while (!queue.empty())
        {
            int size = queue.size();
            int recent = -1;
            while (size)
            {
                auto top = queue[0];
                if (top->left)
                {
                    queue.push_back(top->left);
                    recent = top->left->val;
                }
                if (top->right)
                {
                    queue.push_back(top->right);
                    recent = top->right->val;
                }
                queue.erase(queue.begin());
                size--;
            }
            if (recent != -1)
                result.push_back(recent);
        }
        return result;
    }
};