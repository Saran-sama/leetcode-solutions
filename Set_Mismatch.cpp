class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i])
            {
                return vector<int>{nums[i - 1], nums[i - 1] + 1};
            }
        }
        return vector<int>();
    }
};