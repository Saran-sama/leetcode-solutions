class Solution 
{

public:
    int rob(vector<int>& nums) 
    {
        vector<int> profit(nums.size(), 0);
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            int maxProfit = 0;
            for (int j = i + 2; j < nums.size(); j++)
            {
                if (maxProfit < profit[j])
                {
                    maxProfit = profit[j];
                }
            }
            profit[i] = maxProfit + nums[i];
        }
        
        return *max_element(std::begin(profit), std::end(profit)); 
    }
};