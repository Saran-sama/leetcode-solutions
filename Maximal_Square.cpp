class Solution {
    int Solve(vector<vector<char>>& matrix, int x, int y)
    {
        if ((x >= matrix.size()) || (y >= matrix[0].size()))
        {
            return 0;
        }
        else if (matrix[x][y])
        {
            return min(Solve(matrix, x, y + 1), 
                       min(Solve(matrix, x + 1, y), 
                        Solve(matrix, x + 1, y + 1))) + 1;
        }
        return 0;
    }
public:
    int maximalSquare(vector<vector<char>>& matrix) 
    {
        if ((matrix.empty()) || (matrix[0].empty()))
        {
            return 0;
        }
        /*
        for (auto& eachRow : matrix)
        {
            vector<int> row(eachRow.size(), 0);
            dp.push_back(row);
        }*/
        return Solve(matrix, 0, 0);
    }
private:
 //   vector<vector<int>> dp;
};