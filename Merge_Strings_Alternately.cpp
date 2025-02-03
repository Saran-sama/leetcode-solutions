class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string result{};
        int i = 0;
        for (i = 0; (i < word1.size()) && (i < word2.size()); i++)
        {
            result += word1[i];
            result += word2[i];
        }

        for (;i < word1.size(); i++)
        {
            result += word1[i];
        }

        for (;i < word2.size(); i++)
        {
            result += word2[i];
        }

        return result;
    }
};