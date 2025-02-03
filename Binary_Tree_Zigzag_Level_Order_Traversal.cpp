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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> output;
        vector<TreeNode*> list;
        list.push_back(root);
        bool flag = false;
        while(!list.empty())
        {
            if (flag)
            {
                vector<int> tempList;
                for (auto& item : list)
                {
                    tempList.push_back(item->val);
                }
                reverse(tempList.begin(), tempList.end());
                output.push_back(tempList);
            }
            else
            {
                vector<int> tempList;
                for (auto& item : list)
                {
                    tempList.push_back(item->val);
                }                
                output.push_back(tempList);
            }
            flag = !flag;
            auto size = list.size();
            while (size)
            {
                auto ptr = list[0];
                if (ptr->left)
                {
                    list.push_back(ptr->left);
                }
                if (ptr->right)
                {
                    list.push_back(ptr->right);
                }
                list.erase(list.begin());
                size--;
            }
        }
        return output;
    }
};