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
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> output;
        if (!root)
        {
            return output;
        }
        int size = root ? 1 : 0;
        vector<TreeNode*> list{root};
        vector<TreeNode*> list2;


        while (size)
        {
            vector<int> outLocal;
            for (auto& item: list)
            {
                outLocal.push_back(item->val);
            }            
            output.push_back(outLocal);
            while (size)
            {
                auto& itr = *list.begin();
                if (itr->left)
                {
                    list2.push_back(itr->left);
                }
                if (itr->right)
                {
                    list2.push_back(itr->right);
                }
                size--;
                list.erase(list.begin());
            }
            size = list2.size();
            list = list2;
            list2.clear();
        }
        std::reverse(output.begin(), output.end());
        return output;
    }
};