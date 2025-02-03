class Solution 
{
    void solve(vector<vector<int>>& grid, int x, int y, int sum)
    {
        if ((x == (grid.size()-1)) && (y == (grid[0].size() - 1)))
        {
            if ((sum + grid[x][y]) < _minSum)
            {
                _minSum = (sum + grid[x][y]);
            }
            return;
        }        
        if ((x < grid.size()) && (y < grid[0].size()))
        {
            solve(grid, x + 1, y, sum + grid[x][y]);
        }
        if ((y < grid[0].size()) && (x < grid.size()))
        {
            solve(grid, x, y + 1, sum + grid[x][y]);            
        }
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        solve(grid, 0, 0, 0);
        return _minSum;
    }
    int _minSum = numeric_limits<int>::max();
};