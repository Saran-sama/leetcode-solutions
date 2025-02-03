class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        set<int> s(nums.begin(), nums.end());
        return std::accumulate(nums.begin(), nums.end()) - std::accumulate(s.begin(), s.end());
    }
};