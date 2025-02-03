class Solution 
{
    bool canJump(vector<int>& nums, int index)
    {
        if (index = (nums.size() - 1))
        {
            return true;
        }
        else if (index >= nums.size())
        {
            return false;
        }
        for (int i = 1; i <= nums[index]; i++)
        {
            auto result = canJump(nums, index + i);
            if (result == true)
            {
                return true;
            }
        }
        return false;
    }
public:
    bool canJump(vector<int>& nums) 
    {
        return canJump(nums, 0);
    }
};