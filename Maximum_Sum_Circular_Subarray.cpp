class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) 
    {
        int max1 = numeric_limits<int>::min();
        int max2 = numeric_limits<int>::min();
        int sum1 = 0;
        int totalSum = 0;
        for (auto item : A)
        {
            sum1 += item;
            if (sum1 < 0)
            {
                sum1 = 0;
            }            
            if (sum1 > max1)
            {
                max1 = sum1;
            }
            totalSum += item;
        }
        
        for (auto item : A)
        {
            sum1 += item * -1;
            if (sum1 < 0)
            {
                sum1 = 0;
            }            
            if (sum1 > max2)
            {
                max2 = sum1;
            }
        }
        
        int CS = totalSum + max2;
        return CS > max1 ? CS: max1;
    }
};