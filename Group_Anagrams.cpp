class Solution
{
	vector<char> GetList(string s)
	{
		vector<char> list(26, 0);
		for (auto& c : s)
		{
			list[c - 'a']++;
		}
		return list;
	}
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs)
	{
		vector<vector<string>> output;
		while (strs.size())
		{
			for (int i = 0; i < strs.size(); i++)
			{
				vector<string> subOutput;
				subOutput.push_back(strs[i]);
				for (int j = i + 1; j < strs.size(); j++)
				{
					if (GetList(strs[i]) == GetList(strs[j]))
					{
						subOutput.push_back(strs[j]);
						strs.erase(strs.begin() + j);
						j--;
					}
				}
				strs.erase(strs.begin() + i);
				output.push_back(subOutput);
				break;
			}
		}
		return output;
	}
};