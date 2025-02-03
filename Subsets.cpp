class Solution {
    void solve(vector<int>& nums, int index, int stack, vector<int>& stackNums)
    {
        if (stack)
        {
            for (int i = index; i < nums.size(); i++)
            {
                stackNums.push_back(nums[i]);
                solve(nums, i + 1, stack - 1, stackNums);
                stackNums.pop_back();
            }
        }
        else
        {
            _output.push_back(stackNums);
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int> stackNums;
        for (int i = 1; i <= nums.size(); i++)
        {
            solve(nums, 0, i, stackNums);
        }
        _output.push_back({});
        return _output;
    }
    vector<vector<int>> _output;
};