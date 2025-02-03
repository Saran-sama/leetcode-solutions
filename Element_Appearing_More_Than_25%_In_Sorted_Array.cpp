class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        auto quarterPercent = arr.size() * 0.25;    
        map<int, int> _numToCount;
        for (auto item: arr)
        {
            _numToCount[item]++;
            if (_numToCount[item] > quarterPercent)
            {
                return item;
            }
        }
        return 0;
    }
};