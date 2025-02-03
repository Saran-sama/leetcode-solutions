class Solution 
{
    void sinkIslands(vector<vector<char>>& grid, int x, int y)
    {
        if ((x >= 0) && (y >=0) && (x < grid.size()) && (y < grid[0].size()))
        {
            if (grid[x][y] == '1')
            {
                grid[x][y] == '0'
                sinkIslands(grid, x + 1, y);
                sinkIslands(grid, x - 1, y);
                sinkIslands(grid, x, y + 1);
                sinkIslands(grid, x, y - 1);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) 
    {
        int islands = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    sinkIslands(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
};