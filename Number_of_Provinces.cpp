class Solution 
{
    void sinkIsland(int x, int y, int X, int Y, vector<vector<int>>& isConnected)
    {
        if (isConnected[x][y] == 1)
        {
            isConnected[x][y] = 0;
            if (x > 0)
            {
                sinkIsland(x - 1, y, X, Y, isConnected);
            }
            if (y > 0)
            {
                sinkIsland(x, y - 1, X, Y, isConnected);
            }
            if (x < (X - 1))
            {
                sinkIsland(x + 1, y, X, Y, isConnected);
            }
            if (y < (Y - 1))
            {
                sinkIsland(x, y + 1, X, Y, isConnected);
            }  
        }      
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int counter = 0;
        for (int i = 0; i < isConnected.size(); i++)
        {
            for (int j = 0; j < isConnected[i].size(); j++)
            {
                if (isConnected[i][j] == 1)
                {
                    counter++;
                    sinkIsland(i, j, isConnected.size(), isConnected[i].size(), isConnected);
                }
            }
        }
        return counter;
    }
};