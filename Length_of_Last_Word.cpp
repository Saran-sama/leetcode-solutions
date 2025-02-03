class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int len = s.length() - 1;
        int noOfChars = 0;
        for (int i = len; (i >= 0) && (s[i] != ' '); i--, noOfChars++);
        return noOfChars;
    }
};