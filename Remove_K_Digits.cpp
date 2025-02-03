class Solution
{
	string takeIthCharAndReturn(string& s, int index)
	{
		string newStr = "";
		for (int i = 0; i < s.length(); i++)
		{
			if (i != index)
				newStr += s[i];
		}
		return newStr;
	}
	string removeKdigits(string num, int k, int level)
	{
		if (level < k)
		{
			for (int i = 0; i < num.length(); i++)
			{
				removeKdigits(takeIthCharAndReturn(num, i), k, level + 1);
			}
		}
		else
		{
			if (stol(num) < stol(_num))
			{
				_num = num;
			}
		}
		return "";
	}
public:
	string removeKdigits(string num, int k)
	{
		_num = num;
		removeKdigits(num, k, 0);
		return _num;
	}
private:

	string _num;
};