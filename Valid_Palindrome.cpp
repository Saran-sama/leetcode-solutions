class Solution {
public:
    bool isPalindrome(string s) 
    {
        string filtered;
        for (auto ch : s)
        {
            if ((ch >= 'a') && (ch <='z'))
            {
                filtered += ch;
            }
        }

        int i = 0, j = filtered.length() - 1;        
        while (i < j)
        {
            if (filtered[i] != filtered[j])
            {
                return false;
            }
            i++, j--;
        }
        return true;
    }
};