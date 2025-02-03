class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> outputList;
        auto start = intervals[0][0];
        auto end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] > end)
            {
                outputList.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
            else
            {
                if (intervals[i][1] > end)
                {
                    end = intervals[i][1];
                }
            }
        }
        outputList.push_back({start, end});
        return outputList;
    }
};