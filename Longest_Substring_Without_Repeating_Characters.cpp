class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int len = 0, maxLen = 0;
        map<char, int> location;
        int i = 0;
        for (auto ch : s)
        {
            if (location.find(ch) == location.end())
            {
                location[ch] = i++;
                len++;
                if (len > maxLen)
                {
                    maxLen = len;
                }
            }
            else
            {
                len = i - location[ch];
                location[ch] = i++;
            }
        }
        return maxLen;
    }
};