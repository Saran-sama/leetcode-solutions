class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) 
    {
        vector<char> list1(26, '0'), list2(26, '0');
        
        for (auto ch : s1)
        {
            list1[ch - 'a']++;
        }
        
        for (auto ch : s2)
        {
            list1[ch - 'a']++;
        }
        
        for (auto ch : s3)
        {
            list2[ch - 'a']++;
        }
        return list1 == list2;
    }
};