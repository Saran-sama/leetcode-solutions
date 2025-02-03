class Solution 
{
    int minCostHelper(vector<int>& cost, int step)
    {
        if (step >= cost.size())
        {
            return 0;
        }
        else
        {
            if (_dp.find(step) !=  _dp.end())
            {
                return _dp[step]; 
            }
            _dp[step] = cost[step] + min( minCostHelper(cost, step + 1), minCostHelper(cost, step + 2));
        }
        return _dp[step];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        cost.push_back(0);
        return min(minCostHelper(cost, 0), minCostHelper(cost, 1));
    }
private:
    unordered_map<int, int> _dp;
};