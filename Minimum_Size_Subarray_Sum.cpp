class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int minSize = numeric_limits<int>::max();

        int sum = 0;
        int counter = 0;
        int j = 0;
        for (int i = 0; i < nums.size();)
        {
            while ((j < nums.size()) && (sum <= target))
            {
                sum += nums[j];
                j++;
                counter++;
            }
            if (sum == target)
            {
                if (counter < minSize)
                {
                    minSize = counter;
                }
            }
            //else if (sum > target)
            {
                sum -= nums[i];
                i++;
                counter--;
            }
            if (sum == target)
            {
                if (counter < minSize)
                {
                    minSize = counter;
                }
            }
        }
        return minSize == numeric_limits<int>::max() ? 0 : minSize;
    }
};