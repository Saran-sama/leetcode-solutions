class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> charToCount;
        for (auto ch: s)
        {
            charToCount[ch]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (charToCount[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};