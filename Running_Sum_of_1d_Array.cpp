class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int prev = 0;
        vector<int> output(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            output[i] = nums[i] + prev;
            prev = output[i];
        }
        return output;
    }
};