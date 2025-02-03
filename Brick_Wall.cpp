class Solution 
{

public:
    int leastBricks(vector<vector<int>>& wall) 
    {
        if (!wall.size())
        {
            return 0;
        }
        map<int, int> numberToCount;
        vector<vector<int>> brickWall;
        
        int wallWidth = 0;
        for (auto item : wall[0])
        {
            wallWidth += item;
        }
        for (auto& row :  wall)
        {
            int sum = 0;
            vector<int> outputRow;
            for (auto brick : row)
            {
                sum += brick;
                outputRow.push_back(sum);
                if (wallWidth != sum)
                {
                    numberToCount[sum]++;
                }
            }
            brickWall.push_back(outputRow);
        }
        
        for (auto& pair: numberToCount)
        {
            if (_maxIntersect < pair.second)
            {
                _maxIntersect = pair.second;
            }
        }
        return wall.size() - _maxIntersect;
    }
    
    int _maxIntersect = 0;
};