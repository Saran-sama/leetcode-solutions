class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        for (int i = 0; i < k;i++)
        {
            auto temp = nums[nums.size() - 1];
            int j;
            for (j = nums.size() - 1; j > 0 ; j--)
            {
                nums[j] = nums[j - 1];
            }
            nums[j] = temp;
        }
    }
};