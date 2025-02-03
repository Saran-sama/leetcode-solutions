class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        auto sum = 0, max = 0;
        int i = 0;
        if (nums.size() >= k)
        {
            for (i = 0; i < k; i++)
            {
                sum += nums[i];
            }
            if (sum > max)
            {
                max = sum;
            }
        }
        for (int j = i, k = 0; j < nums.size(); j++, k++)
        {
            sum -= nums[k];
            sum += nums[j];
            if (sum > max)
            {
                max = sum;
            }
        }
        return double(max) / k;
    }
};