#define Check(X) if (X > target) { break; }
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        std::sort(nums.begin(), nums.end());
        set<vector<int>> outputTemp;
        for (int i = 0; i < nums.size(); i++)
        {
            Check(nums[i]);
            for (int j = i + 1; j < nums.size(); j++)
            {
                Check(nums[i] + nums[j]);
                for (int k = j + 1; k < nums.size(); k++)
                {
                    Check(nums[i] + nums[j] + nums[k]);
                    for (int l = k + 1; l < nums.size(); l++)
                    {
                        auto sum = nums[i] + nums[j] + nums[k] + nums[l];
                        Check(sum);
                        if (sum == target)
                            outputTemp.insert({ nums[i], nums[j], nums[k], nums[l] });
                    }
                }
            }
        }
        vector<vector<int>> output;
        for (auto& item : outputTemp)
        {
            output.push_back(item);
        }
        return output;
    }
};