class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int max = std::numeric_limits<int>::min();
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i; j < nums.size(); j++)
            {
                int newSum = 0;
                for (int k = i; k <= j; k++)
                {
                    newSum += nums[k];
                }
                if (newSum > max)
                {
                    max = newSum;
                }
                newSum = 0;
            }
        }
        return max;
    }
};