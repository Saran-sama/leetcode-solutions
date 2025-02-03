class Solution
{
public:
    template <typename BOARD>
    int getVal(const BOARD& board, int x, int y, int X, int Y)
    {
        if ((x < 0) || (x >= X))
        {
            return 0;
        }
        if ((y < 0) || (y >= Y))
        {
            return 0;
        }
        return board[x][y];
    }
    void gameOfLife(vector<vector<int>>& board)
    {
        auto copy = board;



        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                int X = board.size();
                int Y = board[i].size();
                int sum = getVal(board, i - 1, j - 1, X, Y) +
                    getVal(board, i - 1, j, X, Y) +
                    getVal(board, i - 1, j + 1, X, Y) +
                    getVal(board, i, j - 1, X, Y) +
                    getVal(board, i, j + 1, X, Y) +
                    getVal(board, i + 1, j - 1, X, Y) +
                    getVal(board, i + 1, j, X, Y) +
                    getVal(board, i + 1, j + 1, X, Y);
                if (board[i][j] == 1)
                {
                    if ((sum < 2) || (sum > 3))
                    {
                        copy[i][j] = 0;
                    }
                }
                else
                {
                    if (sum == 3)
                    {
                        copy[i][j] = 1;
                    }
                }
            }
        }
        board = copy;
    }
};