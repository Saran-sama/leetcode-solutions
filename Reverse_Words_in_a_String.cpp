class Solution {
public:
    string reverseWords(string s) 
    {
        stack<string> stk;
        for (int i = 0; i < s.size();)
        {
            string word = "";
            while ((i < s.size()) && (s[i] != ' '))
            {
                word += s[i];
                i++;
            }
            if (word.size())
            {
                stk.push(word);
            }
            i++;
        }

        string res = "";
        while (stk.size())
        {
            res += stk.top();
            stk.pop();
            if (stk.size())
            {
                res += ' ';
            }
        }
        return res;
    }
};