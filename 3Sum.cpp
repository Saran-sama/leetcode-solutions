class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> output;
        set<vector<int>> filter;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    auto sum = nums[i] + nums[j] + nums[k];
                    if ((sum == 0) && 
                        (filter.find({nums[i], nums[j], nums[k]}) == filter.end())
                       )
                    {
                        output.push_back({nums[i], nums[j], nums[k]});
                        filter.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        return output;
    }
};