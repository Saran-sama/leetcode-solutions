class Solution
{

    void goodNodesHelper(TreeNode* root, int prevMax, int& counter)
    {
        if (!root)
        {
            return;
        }
        if (root->val >= prevMax)
        {
            counter++;
            prevMax = root->val;
        }
        goodNodesHelper(root->left, prevMax, counter);
        goodNodesHelper(root->right, prevMax, counter);
    }

public:
    int goodNodes(TreeNode* root)
    {
        int counter = 0;
        goodNodesHelper(root, std::numeric_limits<int>::min(), counter);
        return counter;
    }
};