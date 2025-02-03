class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        int prevXDiff = coordinates[1][0] - coordinates[0][0];
        int prevYDiff = coordinates[1][1] - coordinates[0][1];
        
        for (int i = 2; i < coordinates.size(); i++)
        {
            int newXDiff = coordinates[i][0] - coordinates[i - 1][0];
            int newYDiff = coordinates[i][1] - coordinates[i - 1][1];
            if ((newXDiff != prevXDiff) || (newYDiff != newYDiff))
            {
                return false;
            }
        }
        return true;   
    }
};