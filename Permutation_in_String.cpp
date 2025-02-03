class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if (s1.length() > s2.length())
        {
            return false;
        }
        vector<char> list1(26, 0);
        vector<char> list2(26, 0);
        for (auto ch: s1)
        {
            list1[ch - 'a']++;
        }
        
        for (int i = 0; i < s1.length(); i++)
        {
            list2[s2[i]- 'a']++;
        }
        
        if (list1 == list2)
        {
            return true;
        }
        
        int index = 0;
        char prevChar = s2[index];
        for (int i = s1.length(); i < s2.length(); i++)
        {
            list2[prevChar - 'a']--;
            list2[s2[i] - 'a']++;
            if (list1 == list2)
            {
                return true;
            }
            index++;
            prevChar = s2[index];
        }
        return false;
    }
};