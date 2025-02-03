class Node
{
public:
    Node() :_nodeArray{ nullptr }
    {

    }
    Node* _nodeArray[26];
};

class Trie 
{
public:
    /** Initialize your data structure here. */
    Trie():_nodeArray{ nullptr }
    {

    }

    void _insert_internal(string word, Node* node)
    {
        if (word.length())
        {
            int index = word[0] - 'a';
            if (node->_nodeArray[index] == nullptr)
            {
                node->_nodeArray[index] = new Node();
            }
            _insert_internal(word.substr(1, word.length() - 1), node->_nodeArray[index]);
        }
    }

    /** Inserts a word into the trie. */
    void insert(string word) 
    {
        _list.insert(word);
        if (word.length())
        {
            int index = word[0] - 'a';
            if (_nodeArray[index] == nullptr)
            {
                _nodeArray[index] = new Node();
            }
            _insert_internal(word.substr(1, word.length() - 1), _nodeArray[index]);
        }
    }

    /** Returns if the word is in the trie. */
    bool search(string word) 
    {
        return _list.find(word) == _list.end() ? false : true;
    }

    bool __startsWith(string prefix, Node* node)
    {
        if (prefix.length())
        {
            int index = prefix[0] - 'a';
            if (node->_nodeArray[index] == nullptr)
            {
                return false;
            }
            return __startsWith(prefix.substr(1, prefix.length() - 1), node->_nodeArray[index]);
        }
        return true;
    }
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) 
    {
        if (prefix.length())
        {
            int index = prefix[0] - 'a';
            if (_nodeArray[index] == nullptr)
            {
                return false;
            }
            return __startsWith(prefix.substr(1, prefix.length() - 1), _nodeArray[index]);
        }
        return true;
    }
private:
    Node* _nodeArray[26];
    unordered_set<string> _list;
};
/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */