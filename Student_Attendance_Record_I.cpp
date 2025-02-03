class Solution {
public:
    bool checkRecord(string s) 
    {
        int absentCount = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                absentCount++;
            }
            else if ((i < (s.length() - 2)) && 
                     (s[i] == 'L') && 
                     (s[i + 1] == 'L') &&
                     (s[i + 2] =='L'))
            {
                return false;
            }
            if (absentCount > 1)
            {
                return false;
            }
        }
        return true;
    }
};