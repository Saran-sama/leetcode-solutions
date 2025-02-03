class RecentCounter {
public:
    RecentCounter() {
        
    }
    
    int ping(int t) 
    {
        _list.push_back(t);
        int lastTime = t - 3000;
        int index = _list.size() - 1;
        int count = 0;
        while ((index >= 0) && (_list[index] >= lastTime))
        {
            count++;
            index--;
        }
        return count;
    }
    vector<int> _list{};
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */