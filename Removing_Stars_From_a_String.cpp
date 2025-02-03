class Solution {
public:
    string removeStars(string s) 
    {
        stack<char> stk{};
        int i = 0;
        while (i < s.size())
        {
            if (s[i] != '*')
            {
                stk.push(s[i]);
            }
            else
            {
                stk.pop();
            }
            i++;
        };
        string result{};
        while (stk.size())
        {
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};