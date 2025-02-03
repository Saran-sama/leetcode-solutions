class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        vector<int> list1(26, 0), list2(26, 0);
        for (auto ch : s)
        {
            list1[ch - 'a']++;
        }
        for (auto ch : t)
        {
            list2[ch - 'a']++;
        }
        
        int i = 0;
        while (i < 26)
        {
            if (list1[i] != list2[i])
            {
                return i + 'a';
            }
            i++;
        }
        return '0';
    }
};