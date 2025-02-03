class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if (s.length() != t.length())
            return false;
        map<char, char> list;
        for (int i = 0; i < s.length(); i++)
        {
            if (list.find(s[i]) == list.end())
            {
                list[s[i]] = t[i];
            }
            else
            {
                if (list[s[i]] != t[i])
                    return false;
            }
        }
        return true;
    }
};