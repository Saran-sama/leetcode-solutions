class FirstUnique {
public:
    FirstUnique(vector<int>& nums) 
    {
        for (auto item : nums)
        {
            _numToCount[item]++;
            _list.push_back(item);
        }
    }
    
    int showFirstUnique() 
    {
        for (auto item: _list)
        {
            if (_numToCount[item] == 1)
            {
                return item;
            }
        }
        return -1;
    }
    
    void add(int value) 
    {
         _numToCount[value]++;
        _list.push_back(value);
    }
private:
    vector<int> _list;
    map<int, int> _numToCount;
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */