class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int sum = 0;
        for (auto& item : nums)
        {
            sum += item;
        }
        sum = sum / 2;
        for (int i = 0; i < nums.size(); i++)
        {
            sum -= nums[i];
            if (sum == 0)
            {
                return i;
            }
        }
        return -1;
    }
};