class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int prev = numeric_limits<int>::min();
        int next = prev;
        for (int i = 0; i < nums.size(); i++)
        {
            next = ((i + 1) < nums.size()) ? nums[i + 1] : numeric_limits<int>::min();
            if ((nums[i] > prev) && (nums[i] > next))
            {
                return i;
            }
        }
        return -1;
    }
};