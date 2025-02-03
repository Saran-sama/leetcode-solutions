class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int sum = 0;
        for (auto& row: triangle)
        {
            sum += *min_element (row.begin(), row.end());
        }
        return sum;
    }
};