class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        auto mini = *std::min_element(nums.begin(), nums.end());
        auto maxi = *std::max_element(nums.begin(), nums.end());
        auto expected =  ((maxi * (maxi + 1))/2) - ((mini * (mini + 1))/2);
        int sum = 0;
        for (auto item : nums)
        {
            sum += item;
        }
        if (expected == sum)
        {
            return maxi + 1;
        }
        else
        {
            return expected - sum;
        }
    }
};