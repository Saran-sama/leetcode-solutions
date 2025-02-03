class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int count = 0;
        if (nums.size())
        {
            count = 1;
            int prev = nums[0];
            int j = 1;
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] == prev)
                {
                    continue;
                }
                count++;
                prev = nums[i];
                nums[j++] = nums[i];
            }
        }
        return count;
    }
};