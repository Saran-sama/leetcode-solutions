class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> list;
        for (int i = 0; i < nums.size(); i++)
        {
            if (list.find(target - nums[i]) != list.end())
            {
                return {list[target - nums[i]], i};
            }
            list[nums[i]] = i;
        }
        return {};
    }
};