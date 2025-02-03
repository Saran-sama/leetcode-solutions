class Solution {
public:
    int jump(vector<int>& nums) 
    {
        if (nums.size() > 1)
        {
            vector<int> minJump(nums.size(), 1000);
            minJump[nums.size() - 1] = 0;
            for (int i = nums.size() - 2; i >= 0; i--)
            {
                int minimum = 1000;
                for (int j = i; (j < nums.size()) && (j <= (nums[i] + i)); j++)
                {
                    minimum = min(minimum, minJump[j]);
                }
                minJump[i] = minimum + 1;
            }
            return minJump[0];
        }
        else
        {
            return 0;
        }
    }
};