class Solution {
    void letterCombination(string& digits, int index, string output)
    {
        if (index < digits.size())
        {
            int num = digits[index] - '0' - 2;
            for (auto ch: _keypad[num])
            {
                output += ch;
                letterCombination(digits, index + 1, output);
                output.erase(output.size() - 1);
            }
        }
        else
        {
            _output.push_back(output);
        }
    }
public:
    vector<string> letterCombinations(string digits) 
    {
        string output;
        letterCombination(digits, 0, output);
        return _output;
    }
private:
    vector<string> _keypad{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};    
    vector<string> _output;
};