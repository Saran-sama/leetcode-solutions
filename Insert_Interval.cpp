class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        vector<vector<int>> output;
        if (!intervals.size())
        {
            output.push_back(newInterval);
            return output;
        }
        auto start = newInterval[0];
        auto end = newInterval[1];
        int i = 0;
        
        while ((i < intervals.size()) && (intervals[i][1] < start))
        {
            output.push_back(intervals[i]);
            i++;
        }

        start = intervals[i][0];
        int j = 0;
        while ((i < intervals.size()) && (intervals[i][0] <= end))
        {
            i++;
            j++;
        }
        i--;
        end = max(intervals[i][1], end);
        output.push_back({start, end});
        i++;
        while (i < intervals.size())
        {
            output.push_back(intervals[i]);
            i++;
        }
        return output;
    }
};