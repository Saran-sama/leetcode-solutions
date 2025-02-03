class Solution
{
    void solve(vector<vector<char>>& maze, int x, int y, int steps)
    {
        if (_visited.find(pair<int, int>{x, y}) != _visited.end())
        {
            return;
        }
        _visited.insert(pair<int, int>{x, y});

        if ((x >= 0) && (x < maze.size()))
        {
            if ((y >= 0) && (y < maze[0].size()))
            {
                if ((_minSteps > steps) && (maze[x][y] == '.'))
                {
                    if (pair<int, int>{x, y} == _solution)
                    {
                        
                    }
                    else if ((x == 0) || (y == 0) || x == (maze.size() - 1) || y == (maze[0].size() - 1))
					{
						_minSteps = steps;
						_visited.erase(pair<int, int>{x, y});
						return;
					}
                }
            }
        }
        if ((x > 0) && (maze[x][y] == '.'))
        {
            solve(maze, x - 1, y, steps + 1);
        }
        if ((x < (maze.size() - 1)) && (maze[x][y] == '.'))
        {
            solve(maze, x + 1, y, steps + 1);
        }
        if ((y > 0) && (maze[x][y] == '.'))
        {
            solve(maze, x, y - 1, steps + 1);
        }
        if ((y < (maze[0].size() - 1)) && (maze[x][y] == '.'))
        {
            solve(maze, x, y + 1, steps + 1);
        }
        _visited.erase(pair<int, int>{x, y});
    }
public:
    int nearestExit(vector<vector<char>> maze, vector<int> entrance)
    {
        //sort(entrance.begin(), entrance.end());
		_solution = pair<int, int>{ entrance[0], entrance[1] };
        solve(maze, entrance[0], entrance[1], 0);
        return (_minSteps == numeric_limits<int>::max()) ? -1 : _minSteps;
    }
    int _minSteps = numeric_limits<int>::max();
    set<pair<int, int>> _visited{};
    pair<int, int> _solution{};
};