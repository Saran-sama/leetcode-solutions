/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    void Solve(Node *root)
    {
        if (!root)
        {
            return;
        }
        for (auto child: root->children)
        {
            Solve(child);
            _output.push_back(child->val);
        }
    }
public:
    vector<int> postorder(Node* root) 
    {
        if (!root)
        {
            return _output;
        }
        Solve(root);
        _output.push_back(root->val);
        return _output;
    }
private:
    vector<int> _output;
};