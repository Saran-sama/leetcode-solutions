class Solution {
public:
    int titleToNumber(string s) 
    {
        int sum = 1;
        int i = 0;
        for (i = 0; i < (s.length() - 1); i++)
        {
            sum = sum * 26 * (s[i] - 'A' + 1);
        }
        return sum + (s[i] - 'A');
    }
};