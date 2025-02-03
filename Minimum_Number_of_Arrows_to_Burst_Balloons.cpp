class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        std::sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>&b)
        {
            return a[0] < b[0];
        });

        int counter = 0;

        for (int i = 0; i < points.size();)
        {
            int j = i + 1;
            while ((j < points.size()) && (points[i][1] >= points[j][0]))
            {
                j++;
            }
            i = j;
            counter++;
        }

        return counter;
    }
};