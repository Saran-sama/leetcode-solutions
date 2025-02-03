class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int, int> list;
        for (auto num : nums)
        {
            list[num]++;
        }
        for (auto& numPair : list)
        {
            if (numPair.second == 1)
            {
                return numPair.first;
            }
        }
        return -1;
    }
};