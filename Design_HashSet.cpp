class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) 
    {
        _set.insert(key);
    }
    
    void remove(int key) 
    {
        _set.erase(key);    
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) 
    {
        return _set.find(key) != _set.end();
    }
    set<int> _set;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */