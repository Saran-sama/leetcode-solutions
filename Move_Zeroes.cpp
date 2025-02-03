class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int i = 0, j = 0;
        int zeroCount = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[j++] = nums[i];
            }
            else
            {
                zeroCount++;
            }
        }
        for (int j = nums.size() - 1; zeroCount > 0; j--, zeroCount--)
        {
            nums[j] = 0;
        }
    }
};