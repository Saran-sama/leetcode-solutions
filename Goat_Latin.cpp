class Solution {
public:
	string toGoatLatin(string S)
	{
		char prevChar = ' ';
		unordered_set<char> list{ 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
		string output;
		int count = 1;
		for (int i = 0; i < S.length(); i++)
		{
			string word;
			while ((S[i] != ' ') && (i < S.length()))
			{
				word += S[i];
				i++;
			}
			if (list.find(word[0]) != list.end())
			{
				word = word + "ma";
			}
			else
			{
				auto temp = word[0];
				word = word.substr(1, word.length() - 1);
				word = word + temp + "ma";
			}
			for (int c = 0; c < count; c++)
			{
				word += 'a';
			}
			count++;
			output = output + " " + word;
		}
		return output;
	}
};