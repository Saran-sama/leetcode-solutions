class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> numToCount;
        int len = nums.size() / 2;
        for (auto num : nums)
        {
            numToCount[num]++;
            if (numToCount[num] > len)
            {
                return num;
            }
        }
        return -1;
    }
};