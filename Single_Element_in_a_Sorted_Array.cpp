class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int res = 0;
        for (auto num :nums)
        {
            res = res ^ num;
        }
        return res;
    }
};