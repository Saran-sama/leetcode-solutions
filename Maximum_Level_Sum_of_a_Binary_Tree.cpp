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
    int maxLevelSum(TreeNode* root) 
    {
        int level = 1;

        vector<TreeNode*> queue;

        queue.push_back(root);
        int max = root->val;

        int curr_level = 1;
        while (!queue.empty())
        {
            int size = queue.size();
            int sum_at_level = 0;
            while (size)
            {
                auto top = queue[0];
                if (top->left)
                {
                    queue.push_back(top->left);
                    sum_at_level += top->left->val;
                }
                if (top->right)
                {
                    queue.push_back(top->right);
                    sum_at_level += top->right->val;
                }
                queue.erase(queue.begin());
                size--;
            }
            curr_level++;
            if (sum_at_level > max)
            {
                max = sum_at_level;
                level = curr_level;
            }
        }
        return level;
    }
};
