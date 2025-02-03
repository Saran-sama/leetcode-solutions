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
    void Solve(TreeNode* root, stack<TreeNode*>& nodeList)
    {
        do
        {
            while (root)
            {
                nodeList.push(root);
                root = root->left;
            }
            _list.push_back(nodeList.top()->val);
            root = nodeList.top()->right;
            nodeList.pop();
        }while (nodeList.size() || root);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        stack<TreeNode*> nodeList;
        Solve(root, nodeList);
        return _list;
    }
private:
    vector<int> _list;
};