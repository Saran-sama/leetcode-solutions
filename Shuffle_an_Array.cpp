class Solution {
public:
    Solution(vector<int>& nums):_listCopy(nums), _list(nums)
    {
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int>& reset() {
        _list = _listCopy;
        return _list;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int>& shuffle() {
        return _listCopy;
    }
private:
    vector<int> _list;
    vector<int> _listCopy;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */