class Node
{
public:
    vector<Node*> dependencyList;    
};
class Solution 
{
    bool isLooped(set<Node*>& list, Node* node)
    {
        if (list.find(node) != list.end())
        {
            return false;
        }
        for (auto node: node->dependencyList)
        {
            if (isLooped(list, node) == false)
            {
                return false;
            }
        }
        return true;
    }
public:

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
    {
        for (auto& pair: prerequisites)
        {
            if (_numToNode.find(pair[0]) == _numToNode.end())
            {
                _numToNode[pair[0]] = new Node();
            }
            if (_numToNode.find(pair[1]) == _numToNode.end())
            {
                _numToNode[pair[1]] = new Node();
            }
            _numToNode[pair[0]]->dependencyList.push_back(_numToNode[pair[1]]);
        }
        set<Node*> list;
        for (auto& pair : _numToNode)
        {
            if (isLooped(list, pair.second) == false)
            {
                return false;
            }
            list.clear();
        }
        return true;
    }
    map<int, Node*> _numToNode;
};