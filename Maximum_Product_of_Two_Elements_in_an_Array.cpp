class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int max1 = 0;
        int index = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i]--;
            if (nums[i] > max1)
            {
                max1 = nums[i];
                index = i;
            }
        }
        int max2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i] > max2) && (i != index))
            {
                max2 = nums[i];
            }
        }
        return max1 * max2;
    }
};