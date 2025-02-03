class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++)
        {
            _minQueue.push(i);
            _list.insert(i);
        }
    }
    
    int popSmallest() 
    {
        auto top = _minQueue.top();
        _minQueue.pop();
        _list.erase(top);
        return top;
    }
    
    void addBack(int num) 
    {
        if (_list.find(num) == _list.end())
            _minQueue.push(num);
    }
    std::priority_queue<int, vector<int>, greater<int>> _minQueue;
    std::set<int> _list{};
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */