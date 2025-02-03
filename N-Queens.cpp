class Solution
{
	template <typename T>
	bool isSafe(int x, int y, T& output)
	{
		if ((x >= _size) || (y >= _size))
		{
			return false;
		}
		int i, j;
		for (i = x, j = y; (i < _size) && (j < _size); i++, j++)
		{
			if (output[i][j] == 'Q')
			{
				return false;
			}
		}
		for (i = x, j = y; (i >= 0) && (j >= 0); i--, j--)
		{
			if (output[i][j] == 'Q')
			{
				return false;
			}
		}
		for (i = x, j = y; (i < _size) && (j >= 0); i++, j--)
		{
			if (output[i][j] == 'Q')
			{
				return false;
			}
		}
		for (i = x, j = y; (i >= 0) && (j < _size); i--, j++)
		{
			if (output[i][j] == 'Q')
			{
				return false;
			}
		}
		for (i = 0; i < _size; i++)
		{
			if (output[i][y] == 'Q')
			{
				return false;
			}
		}
		for (i = 0; i < _size; i++)
		{
			if (output[x][i] == 'Q')
			{
				return false;
			}
		}
		return true;
	}

	template <typename T>
	void solve(T& output, int x)
	{
		if (x >= _size)
		{
			return;
		}
		for (int i = 0; i < _size; i++)
		{
			if (isSafe(x, i, output))
			{
				output[x][i] = 'Q';
				if (x == (_size - 1))
				{
					_count++;
					_output.push_back(output);
				}
				solve(output, x + 1);
				output[x][i] = '.';
			}
		}
	}
public:
	vector<vector<string>> solveNQueens(int n)
	{
		_size = n;
		string line = "";
		for (int i = 0; i < n; i++)
		{
			line += '.';
		}
		vector<string> str;
		for (int i = 0; i < n; i++)
		{
			str.push_back(line);
		}
		solve(str, 0);
		return _output;
	}
private:
	size_t _size = 0;
	int _count = 0;
	vector<vector<string>> _output;
};