class Solution {
public:
	vector<vector<int>> generate(int numRows)
	{
		vector<vector<int>> output;
		output.push_back({ 1 });
		output.push_back({ 1, 1 });
		for (int i = 2; i < numRows; i++)
		{
			vector<int> list;
			list.push_back(1);
			for (int j = 1; j < i; j++)
			{
				list.push_back(output[i - 1][j - 1] + output[i - 1][j]);
			}
			list.push_back(1);
			output.push_back(list);
		}
		return output;
	}
};