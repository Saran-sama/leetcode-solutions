class Solution {
public:
    double average(vector<int>& salary) 
    {
        int min = numeric_limits<int>::max();
        int max = numeric_limits<int>::min();
        int sum = 0;
        for (auto& item : salary)
        {
            if (item > max)
            {
                max = item;
            }
            if (item < min)
            {
                min = item;
            }
            sum += item;
        }
        return (sum - min - max)/(salary.size() - 2);
    }
};