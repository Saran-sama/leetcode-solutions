class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        auto last = nums.size()-1;
        return std::max(nums[last] * nums[last-1] * nums[last-2], nums[0] * nums[1] * nums[last]);
    }
};