class Solution {
public:
    string frequencySort(string s) 
    {
        vector<int> counts(26, 0); 
        for (auto ch : s)
        {
            counts[ch - 'a']++;
        }
        std::sort(s.begin(), s.end(), [&counts](const char& ch1, const char& ch2)
                  {
                        if (counts[ch1 - 'a'] < counts[ch2 - 'a'])
                        {
                            return true;
                        }
                        else if (ch1 < ch2)
                        {
                            return true;
                        }
                      return false;
                  });
        return s;
    }
};