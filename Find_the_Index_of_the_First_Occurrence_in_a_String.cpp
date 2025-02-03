class Solution {
    
public:
    int strStr(string haystack, string needle) 
    {
        if (!needle.size() || !haystack.size())
        {
            return 0;
        }
        if (needle.size() > haystack.size())
        {
            return 0;
        }
        int checkSum = 0;
        for (auto ch : needle)
        {
            checkSum += ch;
        }
        
        int initCheckSum = 0;
        for (int i = 0; i < needle.size(); i++)
        {
            initCheckSum += haystack[i];
        }
        if (checkSum == initCheckSum)
        {
            if (needle == haystack.substr(0, needle.size()))
            {
                return 0;
            }
        }
        for (int i = 1; i < haystack.size();i++)
        {
            initCheckSum -= haystack[i - 1];
            initCheckSum += haystack[needle.size() + i - 1];
            if (checkSum == initCheckSum)
            {
                if (needle == haystack.substr(i, needle.size()))
                {
                    return i;
                }
            }
        }
        return -1;
    }
};