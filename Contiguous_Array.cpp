class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int sums = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sums += nums[j];
                if ((sums == 0) || (sums == 1))
                {
                    count++;
                    i = j;
                    break;
                }
                else if(sums > 1)
                {
                    i = j;
                    break;
                }
            }
        }
        return count;
    }
};