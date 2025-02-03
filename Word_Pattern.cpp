class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        int j = 0;
        map<char, string> cToStr{};
        for (int i = 0; i < pattern.size(); i++)
        {
            string temp{};
            while ((j < s.size()) && (s[j] != ' '))
            {
                temp += s[j];
                j++;
            }
            j++;
            if (cToStr.find(pattern[i]) == cToStr.end())
            {
                cToStr[pattern[i]] = temp;
                continue;
            }
            if (cToStr[pattern[i]] != temp)
            {
                return false;
            }
        }
        return true;  
    }
};