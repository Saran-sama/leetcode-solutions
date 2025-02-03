class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        vector<int> list1(26, 0);
        vector<int> list2(26, 0);
        
        for (auto& ch : s)
        {
            list1[ch - 'a']++;
        }
        
        for (auto& ch : t)
        {
            list2[ch - 'a']++;
        }
        return list1 == list2;
    }
};