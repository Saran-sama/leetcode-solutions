class SolutionInternal
{
	bool Solve(vector<vector<char>>& board,
		vector<vector<bool>>& graph,
		string& word, int x, int y,
		int index)
	{
		if ((x < _x) && (y < _y) && (y >= 0) && (x >= 0))
		{
			if ((board[x][y] == word[index]) && (graph[x][y] == false))
			{
				graph[x][y] = true;
				if (index == (word.size() - 1))
				{
					return true;
				}
				auto res = Solve(board, graph, word, x, y + 1, index + 1);
				if (res)
				{
					return true;
				}
				res = Solve(board, graph, word, x + 1, y, index + 1);
				if (res)
				{
					return true;
				}
				res = Solve(board, graph, word, x - 1, y, index + 1);
				if (res)
				{
					return true;
				}
				res = Solve(board, graph, word, x, y - 1, index + 1);
				if (res)
				{
					return true;
				}
				graph[x][y] = false;
			}
		}
		return false;
	}
public:
	bool exist(vector<vector<char>>& board, string word)
	{
		_x = board.size();
		if ((_x < 1) && (word != ""))
		{
			return false;
		}
		_y = board[0].size();
		if ((_y < 1) && (word != ""))
		{
			return false;
		}
		vector<vector<bool>> graph;
		for (int i = 0; i < _x; i++)
		{
			vector<bool> list(_y, false);
			graph.push_back(list);
		}
        for (int i = 0; i < _x; i++)
        {
            for (int j = 0; j < _y; j++)
            {
                auto res = Solve(board, graph, word, i, j, 0);
                if (res)
                {
                    return res;
                }
            }
        }
		return false;
	}
	int _x = 0;
	int _y = 0;
};

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) 
    {
        vector<string> output;
        for (auto& word : words)
        {
            SolutionInternal s;
            if (s.exist(board, word))
            {
                output.push_back(word);
            }
        }
        return output;
    }
};