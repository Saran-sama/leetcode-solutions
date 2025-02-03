class Solution {
public:
    int myAtoi(string s) 
    {
        //reverse(s.begin(), s.end());
        int total = 0;
        int negative = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '-')
            {
                negative = -1;
            }
            else if (((s[i] - '0') <= 9) && ((s[i] - '0') >= 0))
            {
                total = total * 10 + (s[i] - '0');
            }
        }
        return total * negative;
    }
};