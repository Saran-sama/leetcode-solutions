class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        vector<int> list(10, -1);
        for (auto&num : nums)
        {
            if (list[num] != -1)
            {
                return false;
            }
            list[num] = 1;
        }
        return true;
    }
};