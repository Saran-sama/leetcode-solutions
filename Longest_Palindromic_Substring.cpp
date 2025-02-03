class Solution 
{
public:
    string longestPalindrome(string s)
    {
        string maxPalindrome = "";
        int i = 0, j = 0, k = 0;
        int maxLen = 0;
        for (i = 0; i < s.length(); i++)
        {
            int len = 0;
            for (j = i, k = i; (j < s.length()) && (k >= 0); j++, k--)
            {
                if (s[j] != s[k])
                {
                    break;
                }
                len += 2;
                if (len > maxLen)
                {
                    maxLen = len;
                    if (k % 2)
                    {
                        maxPalindrome = s.substr(k, j);
                    }
                    else
                    {
                        maxPalindrome = s.substr(k, j + 1);
                    }
                }
            }
        }

        for (i = 0; i < s.length(); i++)
        {
            int len = 0;
            for (j = i, k = i + 1; (k < s.length()) && (j >= 0); j--, k++)
            {
                if (s[j] != s[k])
                {
                    break;
                }
                len += 2;
                if (len >= maxLen)
                {
                    maxLen = len;
                    maxPalindrome = s.substr(j, k);
                }
            }
        }
        return maxPalindrome;
    }
};