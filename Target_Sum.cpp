class Solution
{
    int findTargetSumWays(vector<int>& nums, int S, int index, int sum, vector<int>& list)
    {
        if (list.size() == (nums.size()))
        {
            if (sum == S)
            {
                _sum++;
            }
            return 0;
        }
        int arr[] = { -1, 1 };

        for (int i = index; i < nums.size(); i++)
        {
            for (int sign = 0; sign < 2; sign++)
            {
                list.push_back((nums[i] * arr[sign]));
                findTargetSumWays(nums, S, i + 1, sum + (nums[i] * arr[sign]), list);
                list.erase(list.begin() + list.size() - 1);
            }
        }
        return 0;
    }
public:
    int findTargetSumWays(vector<int>& nums, int S)
    {
        vector<int> list;
        findTargetSumWays(nums, S, 0, 0, list);
        return _sum;
    }
    int _sum = 0;
};