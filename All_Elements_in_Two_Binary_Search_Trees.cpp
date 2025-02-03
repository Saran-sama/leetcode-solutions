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
    void fillContents(TreeNode* root, vector<int>& list)
    {
        if (root)
        {
            fillContents(root->left, list);
            list.push_back(root->val);
            fillContents(root->right, list);
        }
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> list1, list2;
        fillContents(root1, list1);
        fillContents(root2, list2);
        list1.insert(list1.end(), list2.begin(), list2.end());
        sort(list1.begin(), list1.end());
        return list1;
    }
};