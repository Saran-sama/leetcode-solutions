class Solution {
	bool Solve(string& s, string& t, int i, int j)
	{
		if ((i > (s.size()-1)) && (j > (t.size()-1)))
		{
			return false;
		}
		else
		{
			if ((s[i] == t[j]) && (i == (s.size() - 1)))
			{
				return true;
			}
			else if (s[i] == t[j])
			{
				auto res = false;
				while ((!res) && ((i < s.size()) && (j < t.size())))
				{
					res = Solve(s, t, i + 1, ++j);
				}
				return res;
			}
			else
			{
				auto res = false;
				while ((!res) && ((i < s.size()) && (j < t.size())))
				{
					res = Solve(s, t, i, ++j);
				}
				return res;
			}
		}
	}
public:
	bool isSubsequence(string s, string t)
	{
		auto res =  Solve(s, t, 0, 0);
		return res;
	}
};