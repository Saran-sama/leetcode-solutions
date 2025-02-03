class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int max = 0;
        
        for (int i = prices.size() - 1; i > 1; i--)
        {
            for (int j = i - 1; j >=0; j--)
            {
                auto profit = prices[i] - prices[j];
                if (profit > max)
                {
                    max = profit;
                }
            }
        }
        return max;
    }
};